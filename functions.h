#include<stdio.h>

#ifndef H_functions
#define H_functions
/**
* Tworzy dwuwymiarow� tablice o wymiarach a na b
* 
* Tworzy dynamicznie alokowan� tablic� o wymiarach a na b i zwraca wska�nik do niej
*
*@param a (int) - pierwszy wymiar tablicy
*@param b (int) - drugi wymiar tablicy
*
*
*/
int** alokuj(int a, int b);


/**
* zwalnia dwuwymiarow� tablice o wymiarach a 
*
* zwalmia pamie� z dynamicznie alokowanej tablicy o wymiarach a 
* 
*@param a (int) - pierwszy wymiar tablicy
*@param **x (int) - wska�nik na dwuwymiarow� tablic�
* 
*
*
*/



void zwolnij(int** x, int a);
/**
* generuje macierz i zapisuje j� do pliku i go tworzy je�eli plik nie istnieje
*
* pyta u�ytkownika o wymiary macierzy a nast�pnie tworzy j� i wype�nia za pomoc� liczb pseudolosowych
* a nast�pnie zapisuje do pliku. U�ytkownik wybiera, kt�r� macierz chce zmieni�/stworzy�
* 
* 
*@param z (int) - wyb�r macierzy 1- A, 2 - B
*
*
*/

void generuj(int z);


/**
* sprawdza czy mozna przemnozyc dwie macierze
*
* por�wnuje liczb� kolumn macierzy A z liczb� wierszy macierzy B
*@param n (int) - drugi wymiar pierwszej tablicy
*@param m (int) - pierwszy wymiar drugiej tablicy
*
*
*/

int sprawdz(int n, int m);


/**
* zczytuje  macierze z pliku
*
* odczytuje zawarto�� macierzy z pliku i zapisuje do dwuwymiarowej tablicy, oraz wypisuje b��d w przypadku z�ego zapisu pliku
* 
*@param fili (FILE) - deskryptor pliku do oczytu
*@param **arr (int) - wska�nik na dwuwymiarow� tablic�
*@param n (int) - pierwszy wymiar tablicy
*@param m (int) - drugi wymiar tablicy
* 
*
*
*/
void zczytaj(FILE* file, int** arr, int counter, int n, int m);

/**
* wy�wietla tablic�
*
* wy�wietla dwuwymiarow� tablic�
*
*@param **tablica (int) - wska�nik na dwuwymiarow� tablic�
*@param n (int) - pierwszy wymiar tablicy
*@param m (int) - drugi wymiar tablicy
*
*
*
*/

void wyswietlTablice(int** tablica, int n, int m);

/**
* mno�y  tablic� i zapisuje do pliku
*
*
*@param **tablica (int) - wska�nik na dwuwymiarow� tablic�
*@param n (int) - pierwszy wymiar pierwszej tablicy
*@param m (int) - drugi wymiar pierwszej tablicy
*@param p (int) - drugi wymiar drugiej tablicy
*@param **arr1 (int) - wska�nik na dwuwymiarow� tablic�
*@param **arr2 (int) - wska�nik na dwuwymiarow� tablic�
*
*/

void mnoz(int n, int m, int p, int** arr1, int** arr2);

/**
* funckja do wprowadzania r�cznego macierzy
*
*
*@param z (int) - wyb�r macierzy 1- A, 2 - B*
*/
void wprowadz(int z);
/**
* funkcja zapisywania Macierzy
*
*zapisuje macierz do pliku A.txt lub B.txt
* 
*@param z (int) - wyb�r macierzy 1- A, 2 - B
*@param **tab (int) - wska�nik na dwuwymiarow� tablic�
*@param n (int) - pierwszy wymiar tablicy
*@param m (int) - drugi wymiar tablicy
*/
void zapisz(int n, int m, int z, int** tab);
#endif//H_functions