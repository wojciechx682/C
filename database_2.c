
#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
#include <string.h>
#define numer 3
int counter=0;
using namespace std;
/*
Baza kontakt�w: przygotowac program przechowujacy kontakty

Program ma posiadac menu reagujace na wcisniecie klawiszy,
na podstawie wybranych pozycji ma sie odbywac:

(C) tworzenie nowych wpis�w,
(R) przegl!danie danych,
(U) aktualizacja istniejacych wpis�w,
(D) kasowanie istniej!cych wpis�w (z potwierdzeniem),

Dane maja byc zapisywane do jednego pliku lub wielu plik�w
(wg indywidualnego uznania Autora programu).

Dane maja byc dostepne do uzycia po ponownym uruchomieniu programu.
*/

struct Kontakt {
	char name[100];
	char surname[100];
	char phone_number[20];
};

Kontakt A[100];

void nowy()
{		
	char fileName[100];
	FILE * outputFile;
	sprintf_s(fileName, "baza.txt");	
	fopen_s(&outputFile, fileName, "w");	

	int j = 1;
	printf("Ilu dodac uzytkownikow ? ");
	scanf_s("%d", &j);
	for (int i=0; i<j; i++)
	{
		cout << "Podaj imie: ";
		cin >> A[counter].name;
		cout << "Podaj nazwisko: ";
		cin >> A[counter].surname;
		cout << "Podaj numer telefonu: ";
		cin >> A[counter].phone_number;
		counter++;
	}
		
	
	for (int i = 0; i <= j; i++)
	{
		fprintf_s(outputFile, "%s\n", A[i].name);
		fprintf_s(outputFile, "%s\n", A[i].surname);
		fprintf_s(outputFile, "%s\n", A[i].phone_number);
	}
	//counter++
	fclose(outputFile);	
}


void odczyt()
{
	char fileName[100];
	FILE * outputFile;	
	sprintf_s(fileName, "baza.txt");
	fopen_s(&outputFile, fileName, "r");

	int j = 1;
	printf("Podaj rekord: ");
	scanf_s("%d", &counter); char value[100];
	
	//odczytac wszystkie wpisy

	//for (int i = 0; i < counter; i++)
	//{
		fgets(A[counter].name, 100, outputFile);
		printf("%s", A[counter].name);
		fgets(A[counter].surname, 100, outputFile);
		printf("%s", A[counter].surname);
		fgets(A[counter].phone_number, 100, outputFile);
		printf("%s", A[counter].phone_number); printf("\n");
	//}
		


		
	
	fclose(outputFile);
}

int main()
{
	 //stworzenie tablicy 5 student�w, tutaj okrelenie ile kontaktow bedzie

	//wczytanie kolejnych student�w oraz ich ocen 
	
	char wybor;
	

	while (true)
	{
		printf("-----------Baza kontaktow-----------\n");
		printf("(C) tworzenie nowych wpisow\n");
		printf("(R) przegladanie danych,\n");
		printf("(U) aktualizacja istniejacych wpisow\n");
		printf("(D)kasowanie istniejacych wpisow\n");
		scanf_s("%c", &wybor);
		switch (wybor)
		{
		case 'c':
			nowy();
			scanf_s("%c", &wybor);
			break;
		case 'r':
			odczyt();
			scanf_s("%c", &wybor);
			break;
		case 'u':
			printf("asd\n");
			break;
		case 'd':
			printf("asd\n");
			break;



		default:
			printf("zly przycisk");
			break;
		}
		system("pause");
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
