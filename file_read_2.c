// l9_2.cpp : Ten plik zawiera funkcje ?main?. W nim rozpoczyna sie i konczy wykonywanie programu.//

#include "pch.h"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
//#define MAXCHAR 1000

using namespace std;

void fileWrite()
{
	int i;
	for (i = 0; i < 10; i++)
	{
		char fileName[100];
		sprintf_s(fileName, "outfile %d.txt", i);
		FILE * outputFile;
		fopen_s(&outputFile, fileName, "w");
		for (int i = 0; i < 100; i++)
		{
			int x = rand() % 11;
			fprintf_s(outputFile, "%d\n", x);
		}

		fclose(outputFile);
	}
}

void fileRead()
{
	FILE * outputFile;
	char fileName[100];
	sprintf_s(fileName, "outfile 0.txt");
	fopen_s(&outputFile, fileName, "r");

	while (fgets(fileName, 100, outputFile)) {
		printf("%s", fileName);
	}
	fclose(outputFile);
}

void Counter()
{
	int cyfry[11] = { 0 };

	FILE * outputFile;
	char fileName[100];
	sprintf_s(fileName, "outfile 0.txt");
	fopen_s(&outputFile, fileName, "r");



	if (outputFile)
	{
		char znak;
		do
		{
			znak = fgetc(outputFile);
			int cyfra = znak - '0';

			if (cyfra >= 0 && cyfra < 11)
			{
				++cyfry[cyfra];
			}

		} while (znak != EOF);

		int i;
		for (i = 0; i < 11; ++i)
		{
			printf("cyfra %d wystapila %d razy\n", i, cyfry[i]);
		}

	}
	else
	{
		printf("plik nie odpowiada\n");
	}



	fclose(outputFile);
}


int main()
{

	srand(time(0));
	//fileWrite();

	fileRead();

	Counter();

	return 0;


	//odczytanie wartosci z plikow
	//results.txt
}


