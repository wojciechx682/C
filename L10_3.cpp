
#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
#include <string.h>
#define numer 3

using namespace std;
/*
Baza kontaktów: przygotowac program przechowujacy kontakty

Program ma posiadac menu reagujace na wcisniecie klawiszy,
na podstawie wybranych pozycji ma sie odbywac:

(C) tworzenie nowych wpisów,
(R) przegl!danie danych,
(U) aktualizacja istniejacych wpisów,
(D) kasowanie istniej!cych wpisów (z potwierdzeniem),

Dane maja byc zapisywane do jednego pliku lub wielu plików
(wg indywidualnego uznania Autora programu).

Dane maja byc dostepne do uzycia po ponownym uruchomieniu programu.
*/


struct Kontakt {
	char name[100];
	char surname[100];
	char phone_number[20];
};

Kontakt A[numer];

void nowy()
{
		
	char fileName[100];
	FILE * outputFile;
	sprintf_s(fileName, "baza.txt");	
	fopen_s(&outputFile, fileName, "w");
	

	int j = 1;
	printf("Ilu dodac uzytkownikow ? ");
	scanf_s("%d", &j);
	for (int i = 0; i < j; i++)
	{
		cout << "Podaj imie: ";
		cin >> A[i].name;
		cout << "Podaj nazwisko: ";
		cin >> A[i].surname;
		cout << "Podaj numer telefonu: ";
		cin >> A[i].phone_number;

		//int x = rand() % 11;
		fprintf_s(outputFile, "%s\n", A[i].name);
		fprintf_s(outputFile, "%s\n", A[i].surname);
		fprintf_s(outputFile, "%s\n", A[i].phone_number);
	}
	fclose(outputFile);	
}

void odczyt()
{
	char fileName[100];
	FILE * outputFile;	
	sprintf_s(fileName, "baza.txt");
	fopen_s(&outputFile, fileName, "r");

	int j = 1;
	printf("Ile kontaktow wyswietlic ? ");
	scanf_s("%d", &j);
	for (int i = 0; i < j*(numer); i++)
	{
		fgets(fileName, 100, outputFile);
		printf("%s", fileName);
	}
	fclose(outputFile);
}

int main()
{
	 //stworzenie tablicy 5 studentów, tutaj okrelenie ile kontaktow bedzie

	//wczytanie kolejnych studentów oraz ich ocen 
	
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

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
