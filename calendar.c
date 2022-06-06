// ConsoleApplication9.cpp : Ten plik zawiera funkcj� �main�. W nim rozpoczyna si� i ko�czy wykonywanie programu.
//

#include "pch.h"
#include <iostream>
#include "stdio.h"
#include <conio.h>
using namespace std;

const char *tydzien[] =
{ "poniedzialek", "wtorek", "sroda", "czwartek", "piatek", "sobota", "niedziela" };

int liczbaDniroku[] =
{ 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334 };

int liczbaDni[] =
{ 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

int przestepny(int rok) {
	return ((rok % 4 == 0 && rok % 100 != 0) || rok % 400 == 0);
}

int dzienTygodnia(int dzien, int miesiac, int rok) {
	int dzienRoku;
	int yy, c, g;
	int wynik;

	dzienRoku = dzien + liczbaDniroku[miesiac - 1];
	if ((miesiac > 2) && (przestepny(rok) == 1))
		dzienRoku++;

	yy = (rok - 1) % 100;
	c = (rok - 1) - yy;
	g = yy + (yy / 4);
	wynik = (((((c / 100) % 4) * 5) + g) % 7);
	wynik += dzienRoku - 1;
	wynik %= 7;

	return wynik;
}

int Kalendarz(int dzien, int miesiac, int rok) {
	int dzienRoku;
	int yy, c, g;
	int wynik_k;

	dzienRoku = 1 + liczbaDniroku[miesiac - 1];
	if ((miesiac > 2) && (przestepny(rok) == 1))
		dzienRoku++;

	yy = (rok - 1) % 100;
	c = (rok - 1) - yy;
	g = yy + (yy / 4);
	wynik_k = (((((c / 100) % 4) * 5) + g) % 7);
	wynik_k += dzienRoku - 1;
	wynik_k %= 7;

	return wynik_k;
}

int dniMiesiaca(int miesiac, int rok)
{
	int iloscDni;
	if ((miesiac == 2) && (przestepny(rok) == 1))
	{
		iloscDni = liczbaDni[miesiac - 1] += 1;
	}
	else
	{
		iloscDni = liczbaDni[miesiac - 1];
	}

	return iloscDni;
}

/* int wyswietlKal(int miesiac)
{
	//int x = 1;
	//int y = 7;
	//int z = 2 * y;
	int dzien[31];
	//printf("\n   Pn   Wt   Sr   Cz   Pt   So   N\n");

	for (int i = 1; i <= liczbaDni[miesiac - 1]; i < i++)
	{
		dzien[i - 1] = i;
	}
	//int macierz[] = 
	//{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31 };
	//};

	return dzien[31];
}*/



int main() {
	int m, r, d, wynik, iloscDniMiesiaca, wynik_k, dzien[31];	
	printf("Podaj dzien: ");
	scanf_s("%d", &d);
	printf("Podaj miesiac: ");
	scanf_s("%d", &m);
	printf("Podaj rok: ");
	scanf_s("%d", &r);
	wynik = dzienTygodnia(d, m, r);
	wynik_k= Kalendarz(d, m, r);
	iloscDniMiesiaca = dniMiesiaca(m, r);	
	printf("\nDzien %d-%d-%d to %s.\n", d, m, r, tydzien[wynik]);
	printf("Kalendarz na miesiac %d.%d:", r, m);	
	printf("\n-Pn-Wt-Sr-Cz-Pt-So--N\n");
	
	if (wynik_k == 0)
	{
		//pierwszy dzien miesiaca to poniedzialek
		for (int i = 1; i <= liczbaDni[m - 1]; i < i++)
		{
			//poniedzialek to pierwszy dzien miesiaca
			dzien[i - 1] = i;
			if (i == 8 || i == 15 || i == 22 || i == 29)
			{
				printf("\n");
			}
			if (i < 10)
			{
				printf("--%d", dzien[i - 1]);
			}
			else
			{
				printf("-%d", dzien[i - 1]);
			}
		}
	}

	if (wynik_k == 1)
	{
		printf("---");
		//pierwszy dzien miesiaca to wtorek
		for (int i = 1; i <= liczbaDni[m - 1]; i < i++)
		{			
			dzien[i - 1] = i;
			if (i == 7 || i == 14 || i == 21 || i == 28)
			{
				printf("\n");
			}
			if (i < 10)
			{
				printf("--%d", dzien[i - 1]);
			}
			else
			{
				printf("-%d", dzien[i - 1]);
			}
		}
	}

	if (wynik_k == 2)
	{
		printf("------");
		//pierwszy dzien miesiaca to sroda
		for (int i = 1; i <= liczbaDni[m - 1]; i < i++)
		{			
			dzien[i - 1] = i;
			if (i == 6 || i == 13 || i == 20 || i == 27)
			{
				printf("\n");
			}
			if (i < 10)
			{
				printf("--%d", dzien[i - 1]);
			}
			else
			{
				printf("-%d", dzien[i - 1]);
			}
		}
	}

	if (wynik_k == 3)
	{
		printf("---------");
		//pierwszy dzien miesiaca to poniedzialek
		for (int i = 1; i <= liczbaDni[m - 1]; i < i++)
		{
			//poniedzialek to pierwszy dzien miesiaca
			dzien[i - 1] = i;
			if (i == 5 || i == 12 || i == 19 || i == 26)
			{
				printf("\n");
			}
			if (i < 10)
			{
				printf("--%d", dzien[i - 1]);
			}
			else
			{
				printf("-%d", dzien[i - 1]);
			}
		}
	}

	if (wynik_k == 4)
	{
		printf("------------");
		//pierwszy dzien miesiaca to poniedzialek
		for (int i = 1; i <= liczbaDni[m - 1]; i < i++)
		{
			//poniedzialek to pierwszy dzien miesiaca
			dzien[i - 1] = i;
			if (i == 4 || i == 11 || i == 18 || i == 25)
			{
				printf("\n");
			}
			if (i < 10)
			{
				printf("--%d", dzien[i - 1]);
			}
			else
			{
				printf("-%d", dzien[i - 1]);
			}
		}
	}

	if (wynik_k == 5)
	{
		printf("---------------");
		//pierwszy dzien miesiaca to poniedzialek
		for (int i = 1; i <= liczbaDni[m - 1]; i < i++)
		{
			//poniedzialek to pierwszy dzien miesiaca
			dzien[i - 1] = i;
			if (i == 3 || i == 10 || i == 17 || i == 24)
			{
				printf("\n");
			}
			if (i < 10)
			{
				printf("--%d", dzien[i - 1]);
			}
			else
			{
				printf("-%d", dzien[i - 1]);
			}
		}
	}

	if (wynik_k == 6)
	{
		printf("------------------");
		//pierwszy dzien miesiaca to poniedzialek
		for (int i = 1; i <= liczbaDni[m - 1]; i < i++)
		{
			//poniedzialek to pierwszy dzien miesiaca
			dzien[i - 1] = i;
			if (i == 2 || i == 9 || i == 16 || i == 23)
			{
				printf("\n");
			}
			if (i < 10)
			{
				printf("--%d", dzien[i - 1]);

			}
			else
			{
				printf("-%d", dzien[i - 1]);
			}
		}
	}	

	if (przestepny(r) == 1)
	{
		printf("\nRok jest przestepny\n");
	}
	else
	{
		printf("\nRok nie jest przestepny\n");
	}
	
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
