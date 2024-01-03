#include "functions.h"
#include<stdlib.h>
#include <Windows.h>
#include <stdio.h>

int** alokuj(int a, int b)
{
    int** tab = (int**)malloc(a * sizeof(int*));

    for (int i = 0; i < a; i++)
    {
        tab[i] = (int*)malloc(b * sizeof(int));
    }

    return tab;
}

void zwolnij(int** x, int a)
{
    for (int i = 0; i < a; i++)
        free(x[i]);
    free(x);
}



int sprawdz(int n, int m)
{
    if (m == n)
        return 1;
    return 0;
}


void zczytaj(FILE* file, int** arr, int counter, int n, int m)
{
    if (counter == 2)
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < m; ++j)
                fscanf_s(file, "%d", &arr[i][j]);

    else
        printf("zly format pliku");


}

void wyswietlTablice(int** tablica, int n, int m) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            printf("%2d ", tablica[i][j]);
        }
        printf("\n");
    }
}

void mnoz( int n, int m,int p, int** arr1, int** arr2)
{
    FILE *file;
    errno_t xd = fopen_s(&file, "wynik.txt", "w");
    int** res = alokuj(n, p);
    fprintf(file, "%d %d\n", n,p);


    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < p; ++j) {
            res[i][j] = 0;
            for (int k = 0; k < m; ++k) {
                res[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    for(int i=0;i<n;i++)
        for (int j = 0; j < p; j++)
        {
            fprintf(file, "%d ",res[i][j]);
            if (j == p-1)
            {
                fprintf(file, "\n");
            }
        }
    zwolnij(res, p);
    fclose(file);
}

void wprowadz(int z)
{

    int** tab = NULL;
   
        printf("wymiary macierzy (wiersze kolumny): ");
        unsigned int n, m;
        scanf_s("%u %u", &n, &m);
        tab = alokuj(n, m);
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
            {
                do
                {
                    printf("rzad: %d, kolumna %d: ", i + 1, j + 1);
                    scanf_s("%d", &tab[i][j]);
                    if (tab[i][j] < 0 || tab[i][j]>100)
                        printf("macierz przyjmuje tylko liczby od 0 do 100!!!\n");
                } while (tab[i][j] < 0 || tab[i][j]>100);
            }
        zapisz(n, m, z, tab);

        zwolnij(tab, n);
     
 }
void generuj(int z)
{

    int** tab = NULL;
    
        printf("wymiary macierzy (wiersze kolumny): ");
       unsigned int n, m;
        scanf_s("%u %u", &n, &m);
        tab = alokuj(n, m);
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
            {
                tab[i][j] = ((int)rand() % 101);
            }
        zapisz(n, m, z, tab);

        zwolnij(tab, n);
   
       
}


void zapisz(int n,int m,int z, int **tab)
{
    FILE* f;
    if (z == 1)
        errno_t fileopen = fopen_s(&f, "A.txt", "w");
    else
        errno_t fileopen = fopen_s(&f, "B.txt", "w");
    fprintf(f, "%d %d\n", n, m);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            fprintf(f, "%d ", tab[i][j]);
            if (j == m - 1)
                fprintf(f, "\n");
        }

    fclose(f);
}