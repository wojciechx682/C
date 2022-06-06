// ConsoleApplication4.cpp : Ten plik zawiera funkcj� �main�. W nim rozpoczyna si� i ko�czy wykonywanie programu.
//

#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
	int day = 0;
	int month = 0;
	int week = 0;
	int year = 2019;
	int days_since_start = 0;

	printf("Podaj dzien: ");
	scanf_s("%d", &day);

	printf("Podaj miesiac: ");
	scanf_s("%d", &month);
    
	switch (month)
	{
	case 1:
		days_since_start = day;
		break;
	case 2:
		days_since_start = day + 31;
		break;
	case 3:
		days_since_start = day + 59;
		break;
	case 4:
		days_since_start = day + 90;
		break;
	case 5:
		days_since_start = day + 120;
		break;
	case 6:
		days_since_start = day + 151;
		break;
	case 7:
		days_since_start = day + 181;
		break;
	case 8:
		days_since_start = day + 212;
		break;
	case 9:
		days_since_start = day + 243;
		break;
	case 10:
		days_since_start = day + 273;
		break;
	case 11:
		days_since_start = day + 304;
		break;
	case 12:
		days_since_start = day + 334;
		break;
	default: printf("Nie ma tekiego miesi�ca! ");
	}
	
	week = days_since_start / 7;
	printf("\nDzien %d.%d", day, month);

	if (days_since_start % 7 == 0)
	{
		printf(" to poniedzialek\n");
	}
	if (days_since_start % 7 == 1)
	{
		printf(" to wtorek\n");
	}
	if (days_since_start % 7 == 2)
	{
		printf(" to sroda\n");
	}
	if (days_since_start % 7 == 3)
	{
		printf(" to czwartek\n");
	}
	if (days_since_start % 7 == 4)
	{
		printf(" to piatek\n");
	}
	if (days_since_start % 7 == 5)
	{
		printf(" to sobota\n");
	}
	if (days_since_start % 7 == 6)
	{
		printf(" to niedziela\n");
	}
	printf("Tygodni - %d\n", week);
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
