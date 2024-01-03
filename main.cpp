#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "functions.h"

int main()
{
	
	
	srand(time(NULL));
	int y;
	int z;
	FILE *f,*g;
	do
	{
		printf("Czy chcesz wprowadzic zmiany w macierzach?\n1 - wprowadzam macierze recznie \n2 - macierz losowa o podanych wymiarach\ninna liczba - nie: ");
		scanf_s("%d", &y);
	
	
	
		switch (y)
		{
		case 1:
			
			printf("1 - macierz A\n2 - macierz B: ");
			scanf_s("%d", &z);
			wprowadz(z);
			break;
		case 2:
			printf("1 - macierz A\n2 - macierz B: ");
			scanf_s("%d", &z);
			generuj(z);
			break;
		default:
			break;
		}
	} while (y == 1 || y == 2);


	


	 errno_t xd = fopen_s(&f, "A.txt", "r");
	errno_t haha = fopen_s(&g,"B.txt", "r");
	//czytanie plików, je¿eli siê uda³o
	if (f != NULL && g!= NULL)
	{
		int n1, m1, n2, m2;
		int CounterA = fscanf_s(f, "%d %d", &n1, &m1);
		int CounterB = fscanf_s(g, "%d %d", &n2, &m2);
		
		
		if (sprawdz(m1, n2) == 1)
		{
			int** A = alokuj(n1, m1);
			int** B = alokuj(n2, m2);
			
			
			zczytaj(f, A, CounterA, n1, m1);
			zczytaj(g, B, CounterB, n2, m2);

			wyswietlTablice(A, n1, m1);
			printf("-------------------------------------------\n");
			wyswietlTablice(B, n2, m2);
			printf("-------------------------------------------\n");

			mnoz(n1,m1,m2, A, B);



			//zwalnianie i zamykanie plików
			zwolnij(A, n1);
			zwolnij(B, n2);
			fclose(f);
			fclose(g);


			//wyœwietlenie przemno¿onej macierzy
			errno_t lol = fopen_s(&f, "wynik.txt", "r");
			if (f != NULL)
			{
				CounterA = fscanf_s(f, "%d %d", &n1, &m1);
				A = alokuj(n1, m1);
				zczytaj(f, A, CounterA, n1, m1);
				wyswietlTablice(A, n1, m1);
				fclose(f);
				zwolnij(A, n1);
				
			}
			else
			{
				printf("problem z plikiem wynik.txt");

			}
		}
		else
		{
			printf("nie mozna mnozyc podanych macierzy");
			fclose(f);
			fclose(g);
		}
	}
}