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
	for (i = 0; i < 11; i++)
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
	for (int i = 0; i < 1; i++)
	{
		int cyfry[11] = { 0 };

		FILE * outputFile;
		char fileName[100];			

		sprintf_s(fileName, "results.txt");
		FILE * results;
		fopen_s(&results, fileName, "w");
		int max_lengths[11] = { 0,0,0,0,0,0,0,0,0,0,0 };
			for (int i = 0; i < 11; ++i)
			{
				sprintf_s(fileName, "outfile %d.txt", i);
				fopen_s(&outputFile, fileName, "r");

				if (outputFile)
				{
					int tab[100];
					int last_value=-1;
					int length_in_row=1;
					for (int i = 0;  i < 100;  i++)
					{						
						int x;
						fscanf_s(outputFile, "%d", &x);
						tab[i] = x; 

						if (x >= 0 && x < 11)
						{
							++cyfry[x];
						}
						//printf("%d \n", tab[i]);										
					}				
						
						for (int i = 0; i < 100; i++)
						{		
							int k = tab[i];					
							if(last_value==k)
							{								
								length_in_row++;
							}
							else
							{
								last_value = k;
								length_in_row = 1;
							}
							if (max_lengths[k] < length_in_row)
								max_lengths[k] = length_in_row;
						}		
				}
				
				else
				{
					printf("plik nie odpowiada\n");
				}

				fprintf_s(results, "outfile %d.txt\n",i);
				
				for (int j = 0; j < 11; ++j)
				{
					fprintf_s(results, "cyfra %d wystapila %d razy", j, cyfry[j]);
					fprintf_s(results, " i %d razy pod rzad\n", max_lengths[j]); 				
				}
				fprintf_s(results, "\n");

				for (int i = 0; i < 11; i++)
				{
					cyfry[i] = { 0 };
				}				
			}			
			fclose(outputFile);				
	}	
}

void fileRead_test()
{
	FILE * outputFile;
	char fileName[100];
	sprintf_s(fileName, "outfile 0.txt");
	fopen_s(&outputFile, fileName, "r");

	int cyfry[11] = { 0 };

	for (int i = 0; i < 100; i++)
	{
		fgets(fileName, 100, outputFile);
		printf("%s", fileName);
	}
	fclose(outputFile);
}

int main()
{
	srand(time(0));

	fileWrite();

	fileRead();

	return 0;
}



