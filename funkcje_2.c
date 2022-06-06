#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <time.h>
using namespace std;


const int N = 10;
// Funkcja dzieli podany zbi�r Z na dwie partycje:
// ZL - elementy mniejsze od elementu zwrotnego
// ZP - elementy wi�ksze od elementu zwrotnego
// Zwraca pozycj� elementu zwrotnego
//------------------------------------------------
int Dziel_na_partycje(int * Z, int ip, int ik)
{
	int i, v, x;

	v = Z[ip]; i = ip; ik++;
	while (i < ik)
	{
		while (Z[++i] < v);
		while (Z[--ik] > v);
		if (i < ik)
		{
			x = Z[i]; Z[i] = Z[ik]; Z[ik] = x;
		}
	}
	Z[ip] = Z[ik]; Z[ik] = v;
	return ik;
}

// Procedura sortuje rosn�co podany zbi�r
//---------------------------------------
void Sortuj_szybko(int * Z, int ip, int ik)
{
	int iv;

	iv = Dziel_na_partycje(Z, ip, ik);
	if (ip < iv - 1) Sortuj_szybko(Z, ip, iv - 1);
	if (ik > iv + 1) Sortuj_szybko(Z, iv + 1, ik);
}

void mediana(int R)
{
	int Z[N + 1], i, ip, ik, k, pv;

	srand((unsigned)time(NULL));

	// Przygotowujemy tablic� Z [ ] 

	for (i = 0; i < N; i++) Z[i] = rand() % 10;

	// Na ko�cu Z [ ] umieszczamy wartownika

	Z[N] = 10;

	// Wy�wietlamy Z [ ] przed podzia�em

	for (i = 0; i < N; i++) cout << setw(4) << Z[i];
	cout << endl << endl;

	// Sortujemy szybko tablic� Z [ ] 

	Sortuj_szybko(Z, 0, N - 1);

	// Wy�wietlamy Z [ ] po sortowaniu

	for (i = 0; i < N; i++) cout << setw(4) << Z[i];
	cout << endl << endl;

	// Wy�wietlamy median�

	cout << Z[N >> 1] << endl << endl;

}
int main()
{
	
	mediana(10);
	
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
