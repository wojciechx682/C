o// l8_2.cpp : Ten plik zawiera funkcjê main. W nim rozpoczyna siê i koñczy wykonywanie programu.//

#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

using namespace std;


int *get_values(int *tab, int rozmiar)
{
	int x;
	
	for (int i = 0; i < rozmiar; i++)
	{		
		x = rand() % 10 + 1;
		//scanf_s("%d", &x);
		tab[i] = x;
	}
	return tab;
}

void wypisz(int *tab, int rozmiar)
{
	for (int i = 0; i < rozmiar; i++)
	{
		printf("%d ", tab[i]);
	}
}

int suma(int *tab, int rozmiar)
{
	int sum = 0;

	for (int i = 0; i < rozmiar; i++)
	{
		sum = sum + tab[i];
	}
	return sum;
}

double srednia(int *tab, int rozmiar)
{
	double sum = 0;
	double srednia;

	for (int i = 0; i < rozmiar; i++)
	{
		sum = sum + tab[i];
		srednia = sum / rozmiar;
	}
	return srednia;
}

int min(int *tab, int rozmiar)
{
	int min = tab[0];
	for (int i = 1; i < rozmiar; i++)
		if (min > tab[i])
			min = tab[i];
	return min;
}

int max(int *tab, int rozmiar)
{
	int max = tab[0];
	for (int i = 1; i < rozmiar; i++)
		if (max < tab[i])
			max = tab[i];
	return max;
}

int *allocEmptyValues(int count)
{
	int * values = (int *)malloc(sizeof(int) * count);
	for (int i = 0; i < count; i++)
	{
		values[i] = 0;
	}		
	return values;
}

void tab_sum(int *tab1, int *tab2, int rozmiar)
{
	int * tab3 = allocEmptyValues(rozmiar);

	for (int i = 0; i < rozmiar; i++)
	{
		tab3[i] = tab1[i] + tab2[i];
		printf("%d ", tab3[i]);
	}	
}

int main()
{
	int *tab1;
	int *tab2;
	
	int rozmiar;

	printf("podaj rozmiar tablicy: ");

	scanf_s("%d", &rozmiar);

	tab1 = (int *)malloc(rozmiar * sizeof(int));

	tab2 = (int *)malloc(rozmiar * sizeof(int));

	//utworzona tablica: tab[rozmiar]
	//printf("rozmiar tablicy to: %d", rozmiar);
	//printf("podaj wartoci tablicy:");

	srand(time(0));
	get_values(tab1, rozmiar);
	printf("\ntab1 = ");
	wypisz(tab1, rozmiar);
	
	get_values(tab2, rozmiar);
	printf("\n\ntab2 = ");
	wypisz(tab2, rozmiar);

	printf("\n\nsuma: %d", suma(tab1, rozmiar));
	printf("\nsrednia: %g", srednia(tab1, rozmiar));
	printf("\nwartosc minimalna: %d", min(tab1, rozmiar));
	printf("\nwartosc maksymalna: %d", max(tab1, rozmiar));

	printf("\nsuma elementow dwoch tablic: ");
	tab_sum(tab1, tab2, rozmiar);
	printf("\n");
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotycz¹ce rozpoczynania pracy:
//   1. U¿yj okna Eksploratora rozwi¹zañ, aby dodaæ pliki i zarz¹dzaæ nimi
//   2. U¿yj okna programu Team Explorer, aby nawi¹zaæ po³¹czenie z kontrol¹ ród³a
//   3. U¿yj okna Dane wyjciowe, aby sprawdziæ dane wyjciowe kompilacji i inne komunikaty
//   4. U¿yj okna Lista b³êdów, aby zobaczyæ b³êdy
//   5. Wybierz pozycjê Projekt > Dodaj nowy element, aby utworzyæ nowe pliki kodu, lub wybierz pozycjê Projekt > Dodaj istniej¹cy element, aby dodaæ istniej¹ce pliku kodu do projektu
//   6. Aby w przysz³oci ponownie otworzyæ ten projekt, przejd do pozycji Plik > Otwórz > Projekt i wybierz plik sln
