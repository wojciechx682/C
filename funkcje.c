#include "pch.h"
#include <iostream>
#include<cstdlib>
using namespace std;

void get_values(int a[10], int n)
{
	int x;
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &x);
		a[i] = x;
	}
}

void wypisz(int t[])
{
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", t[i]);
	}
	printf("\n");
}

int suma(int t[])
{
	int sum = 0;

	for (int i = 0; i < 10; i++)
	{
		sum = sum + t[i];
	}
	return sum;
}

double srednia(int t[])
{
	double sum = 0;
	double srednia;

	for (int i = 0; i < 10; i++)
	{
		sum = sum + t[i];
		srednia = sum / 10;
	}
	return srednia;
}

int min(int t[])
{
	int min = t[0];
	for (int i = 1; i < 10; i++)
		if (min > t[i])
			min = t[i];
	return min;
}

int max(int t[])
{
	int max = t[0];
	for (int i = 1; i < 10; i++)
		if (max < t[i])
			max = t[i];
	return max;
}

void tab_sum(int t[], int t2[], int t3[])
{
	for (int i = 0; i < 10; i++)
	{
		t3[i] = t[i] + t2[i];
		
	}
}

int main()
{

	int tab[10];
	int tab2[10] = { 2,3,4,5,6,7,8,9,10,11 };
	int tab3[10];
	get_values(tab, 10);
	printf("\ntab 1:  ");
	wypisz(tab);
	printf("tab 2:  ");
	wypisz(tab2);
	printf("suma: %d \n", suma(tab));
	printf("srednia: %g \n", srednia(tab));
	printf("min: %d \n", min(tab));
	printf("max: %d \n", max(tab));
	printf("suma elementow dwoch tablic: ");
	tab_sum(tab, tab2, tab3);
	printf("\n");
	return 0;
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotycz�ce rozpoczynania pracy:
//   1. U�yj okna Eksploratora rozwi�za�, aby doda� pliki i zarz�dza� nimi
//   2. U�yj okna programu Team Explorer, aby nawi�za� po��czenie z kontrol� �r�d�a
//   3. U�yj okna Dane wyj�ciowe, aby sprawdzi� dane wyj�ciowe kompilacji i inne komunikaty
//   4. U�yj okna Lista b��d�w, aby zobaczy� b��dy
//   5. Wybierz pozycj� Projekt > Dodaj nowy element, aby utworzy� nowe pliki kodu, lub wybierz pozycj� Projekt > Dodaj istniej�cy element, aby doda� istniej�ce pliku kodu do projektu
//   6. Aby w przysz�o�ci ponownie otworzy� ten projekt, przejd� do pozycji Plik > Otw�rz > Projekt i wybierz plik sln
