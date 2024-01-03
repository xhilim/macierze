#include<stdio.h>

#ifndef H_functions
#define H_functions
/**
* Tworzy dwuwymiarow¹ tablice o wymiarach a na b
* 
* Tworzy dynamicznie alokowan¹ tablicê o wymiarach a na b i zwraca wskaŸnik do niej
*
*@param a (int) - pierwszy wymiar tablicy
*@param b (int) - drugi wymiar tablicy
*
*
*/
int** alokuj(int a, int b);


/**
* zwalnia dwuwymiarow¹ tablice o wymiarach a 
*
* zwalmia pamieæ z dynamicznie alokowanej tablicy o wymiarach a 
* 
*@param a (int) - pierwszy wymiar tablicy
*@param **x (int) - wskaŸnik na dwuwymiarow¹ tablicê
* 
*
*
*/



void zwolnij(int** x, int a);
/**
* generuje macierz i zapisuje j¹ do pliku i go tworzy je¿eli plik nie istnieje
*
* pyta u¿ytkownika o wymiary macierzy a nastêpnie tworzy j¹ i wype³nia za pomoc¹ liczb pseudolosowych
* a nastêpnie zapisuje do pliku. U¿ytkownik wybiera, któr¹ macierz chce zmieniæ/stworzyæ
* 
* 
*@param z (int) - wybór macierzy 1- A, 2 - B
*
*
*/

void generuj(int z);


/**
* sprawdza czy mozna przemnozyc dwie macierze
*
* porównuje liczbê kolumn macierzy A z liczb¹ wierszy macierzy B
*@param n (int) - drugi wymiar pierwszej tablicy
*@param m (int) - pierwszy wymiar drugiej tablicy
*
*
*/

int sprawdz(int n, int m);


/**
* zczytuje  macierze z pliku
*
* odczytuje zawartoœæ macierzy z pliku i zapisuje do dwuwymiarowej tablicy, oraz wypisuje b³¹d w przypadku z³ego zapisu pliku
* 
*@param fili (FILE) - deskryptor pliku do oczytu
*@param **arr (int) - wskaŸnik na dwuwymiarow¹ tablicê
*@param n (int) - pierwszy wymiar tablicy
*@param m (int) - drugi wymiar tablicy
* 
*
*
*/
void zczytaj(FILE* file, int** arr, int counter, int n, int m);

/**
* wyœwietla tablicê
*
* wyœwietla dwuwymiarow¹ tablicê
*
*@param **tablica (int) - wskaŸnik na dwuwymiarow¹ tablicê
*@param n (int) - pierwszy wymiar tablicy
*@param m (int) - drugi wymiar tablicy
*
*
*
*/

void wyswietlTablice(int** tablica, int n, int m);

/**
* mno¿y  tablicê i zapisuje do pliku
*
*
*@param **tablica (int) - wskaŸnik na dwuwymiarow¹ tablicê
*@param n (int) - pierwszy wymiar pierwszej tablicy
*@param m (int) - drugi wymiar pierwszej tablicy
*@param p (int) - drugi wymiar drugiej tablicy
*@param **arr1 (int) - wskaŸnik na dwuwymiarow¹ tablicê
*@param **arr2 (int) - wskaŸnik na dwuwymiarow¹ tablicê
*
*/

void mnoz(int n, int m, int p, int** arr1, int** arr2);

/**
* funckja do wprowadzania rêcznego macierzy
*
*
*@param z (int) - wybór macierzy 1- A, 2 - B*
*/
void wprowadz(int z);
/**
* funkcja zapisywania Macierzy
*
*zapisuje macierz do pliku A.txt lub B.txt
* 
*@param z (int) - wybór macierzy 1- A, 2 - B
*@param **tab (int) - wskaŸnik na dwuwymiarow¹ tablicê
*@param n (int) - pierwszy wymiar tablicy
*@param m (int) - drugi wymiar tablicy
*/
void zapisz(int n, int m, int z, int** tab);
#endif//H_functions