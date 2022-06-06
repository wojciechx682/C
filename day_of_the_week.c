#include <stdio.h>
#include <stdlib.h>

int main()
{    
    int day = 0;
    int month = 0;
    int week = 0;
    int year = 2019;

    printf("Podaj dzien: ");
    scanf("%d",&day);

    printf("Podaj miesiac: ");
    scanf("%d",&month);    

    switch (month)
{
    case 1:
    {
        switch(day)
        {
            case 1: case 8: case 15: case 22: case 29:
                printf("\nDzien ");
                printf("%d", day);
                printf(".01.2019 to wtorek\n");
            break;

            case 2: case 9: case 16: case 23: case 30:
                printf("\nDzien ");
                printf("%d", day);
                printf(".01.2019 to sroda\n");
            break;

            case 3: case 10: case 17: case 24: case 31:
                printf("\nDzien ");
                printf("%d", day);
                printf(".01.2019 to czwartek\n");
            break;

            case 4: case 11: case 18: case 25:
                printf("\nDzien ");
                printf("%d", day);
                printf(".01.2019 to piatek\n");
            break;

            case 5: case 12: case 19: case 26:
                printf("\nDzien ");
                printf("%d", day);
                printf(".01.2019 to sobota\n");
            break;

            case 6: case 13: case 20: case 27:
                printf("\nDzien ");
                printf("%d", day);
                printf(".01.2019 to niedziela\n");
            break;

            case 7: case 14: case 21: case 28:
                printf("\nDzien ");
                printf("%d", day);
                printf(".01.2019 to poniedzialek\n");
            break;
                default: printf("Nie ma takiego dnia w miesiacu! \n");
        }
        week = day/7;
        printf("Tygodni - %d",week);
    }
    break;

    case 2:
    {
        switch(day)
        {
            case 1: case 8: case 15: case 22:
                printf("\nDzien ");
                printf("%d", day);
                printf(".02.2019 to piatek.\n");
            break;

            case 2: case 9: case 16: case 23:
                printf("\nDzien ");
                printf("%d", day);
                printf(".02.2019 to sobota.\n");
            break;

            case 3: case 10: case 17: case 24:
                printf("\nDzien ");
                printf("%d", day);
                printf(".02.2019 to niedziela.\n");
            break;

            case 4: case 11: case 18: case 25:
                printf("\nDzien ");
                printf("%d", day);
                printf(".02.2019 to poniedzialek.\n");
            break;

            case 5: case 12: case 19: case 26:
                printf("\nDzien ");
                printf("%d", day);
                printf(".02.2019 to wtorek.\n");
            break;

            case 6: case 13: case 20: case 27:
                printf("\nDzien ");
                printf("%d", day);
                printf(".02.2019 to sroda.\n");
            break;

            case 7: case 14: case 21: case 28:
                printf("\nDzien ");
                printf("%d", day);
                printf(".02.2019 to czwartek.\n");
            break;
                default: printf("Nie ma takiego dnia w miesiacu! \n");
        }
        week = (day+31)/7;
        printf("Tygodni - %d",week);
    }
    break;

    case 3:
    {
        switch(day)
        {
            case 1: case 8: case 15: case 22: case 29:
                printf("\nDzien ");
                printf("%d", day);
                printf(".03.2019 to piatek.\n");
            break;

            case 2: case 9: case 16: case 23: case 30:
                printf("\nDzien ");
                printf("%d", day);
                printf(".03.2019 to sobota.\n");
            break;

            case 3: case 10: case 17: case 24: case 31:
                printf("\nDzien ");
                printf("%d", day);
                printf(".03.2019 to niedziela.\n");
            break;

            case 4: case 11: case 18: case 25:
                printf("\nDzien ");
                printf("%d", day);
                printf(".03.2019 to poniedzialek.\n");
            break;

            case 5: case 12: case 19: case 26:
                printf("\nDzien ");
                printf("%d", day);
                printf(".03.2019 to wtorek.\n");
            break;

            case 6: case 13: case 20: case 27:
                printf("\nDzien ");
                printf("%d", day);
                printf(".03.2019 to sroda.\n");
            break;

            case 7: case 14: case 21: case 28:
                printf("\nDzien ");
                printf("%d", day);
                printf(".03.2019 to czwartek.\n");
            break;
                default: printf("Nie ma takiego dnia w miesiacu! \n");
        }

        week = (day+59)/7;
        printf("Tygodni - %d",week);
    }
    break;

    case 4:
    {
        switch(day)
        {
            case 1: case 8: case 15: case 22: case 29:
                printf("\nDzien ");
                printf("%d", day);
                printf(".04.2019 to poniedzialek.\n");
            break;

            case 2: case 9: case 16: case 23: case 30:
                printf("\nDzien ");
                printf("%d", day);
                printf(".04.2019 to wtorek.\n");
            break;

            case 3: case 10: case 17: case 24:
                printf("\nDzien ");
                printf("%d", day);
                printf(".04.2019 to sroda.\n");
            break;

            case 4: case 11: case 18: case 25:
                printf("\nDzien ");
                printf("%d", day);
                printf(".04.2019 to czwartek.\n");
            break;

            case 5: case 12: case 19: case 26:
                printf("\nDzien ");
                printf("%d", day);
                printf(".04.2019 to piatek.\n");
            break;

            case 6: case 13: case 20: case 27:
                printf("\nDzien ");
                printf("%d", day);
                printf(".04.2019 to sobota.\n");
            break;

            case 7: case 14: case 21: case 28:
                printf("\nDzien ");
                printf("%d", day);
                printf(".04.2019 to niedziela.\n");
            break;
                default: printf("Nie ma takiego dnia w miesiacu! \n");
        }
        week = (day+90)/7;
        printf("Tygodni - %d",week);
    }
    break;

    case 5:
    {
        switch(day)
        {
            case 1: case 8: case 15: case 22: case 29:
                printf("\nDzien ");
                printf("%d", day);
                printf(".05.2019 to sroda.\n");
            break;

            case 2: case 9: case 16: case 23: case 30:
                printf("\nDzien ");
                printf("%d", day);
                printf(".05.2019 to czwartek.\n");
            break;

            case 3: case 10: case 17: case 24: case 31:
                printf("\nDzien ");
                printf("%d", day);
                printf(".05.2019 to piatek.\n");
            break;

            case 4: case 11: case 18: case 25:
                printf("\nDzien ");
                printf("%d", day);
                printf(".05.2019 to sobota.\n");
            break;

            case 5: case 12: case 19: case 26:
                printf("\nDzien ");
                printf("%d", day);
                printf(".05.2019 to niedziela.\n");
            break;

            case 6: case 13: case 20: case 27:
                printf("\nDzien ");
                printf("%d", day);
                printf(".05.2019 to poniedzialek.\n");
            break;

            case 7: case 14: case 21: case 28:
                printf("\nDzien ");
                printf("%d", day);
                printf(".05.2019 to wtorek.\n");
            break;
                default: printf("Nie ma takiego dnia w miesiacu! \n");
        }


        week = (day+120)/7;
        printf("Tygodni - %d",week);

    }
    break;

    case 6:
    {
        switch(day)
        {
            case 1: case 8: case 15: case 22: case 29:
                printf("\nDzien ");
                printf("%d", day);
                printf(".06.2019 to sobota.\n");
            break;

            case 2: case 9: case 16: case 23: case 30:
                printf("\nDzien ");
                printf("%d", day);
                printf(".06.2019 to niedziela.\n");
            break;

            case 3: case 10: case 17: case 24:
                printf("\nDzien ");
                printf("%d", day);
                printf(".06.2019 to poniedzialek.\n");
            break;

            case 4: case 11: case 18: case 25:
                printf("\nDzien ");
                printf("%d", day);
                printf(".06.2019 to wtorek.\n");
            break;

            case 5: case 12: case 19: case 26:
                printf("\nDzien ");
                printf("%d", day);
                printf(".06.2019 to sroda.\n");
            break;

            case 6: case 13: case 20: case 27:
                printf("\nDzien ");
                printf("%d", day);
                printf(".06.2019 to czwartek.\n");
            break;

            case 7: case 14: case 21: case 28:
                printf("\nDzien ");
                printf("%d", day);
                printf(".06.2019 to piatek.\n");
            break;
                default: printf("Nie ma takiego dnia w miesiacu! \n");
        }

        week = (day+151)/7;
        printf("Tygodni - %d",week);
    }
    break;

    case 7:
    {
        switch(day)
        {
            case 1: case 8: case 15: case 22: case 29:
                printf("\nDzien ");
                printf("%d", day);
                printf(".07.2019 to poniedzialek.\n");
            break;

            case 2: case 9: case 16: case 23: case 30:
                printf("\nDzien ");
                printf("%d", day);
                printf(".07.2019 to wtorek.\n");
            break;

            case 3: case 10: case 17: case 24: case 31:
                printf("\nDzien ");
                printf("%d", day);
                printf(".07.2019 to sroda.\n");
            break;

            case 4: case 11: case 18: case 25:
                printf("\nDzien ");
                printf("%d", day);
                printf(".07.2019 to czwartek.\n");
            break;

            case 5: case 12: case 19: case 26:
                printf("\nDzien ");
                printf("%d", day);
                printf(".07.2019 to piatek.\n");
            break;

            case 6: case 13: case 20: case 27:
                printf("\nDzien ");
                printf("%d", day);
                printf(".07.2019 to sobota.\n");
            break;

            case 7: case 14: case 21: case 28:
                printf("\nDzien ");
                printf("%d", day);
                printf(".07.2019 to niedziela.\n");
            break;
                default: printf("Nie ma takiego dnia w miesiacu! \n");
        }

        week = (day+181)/7;
        printf("Tygodni - %d",week);
    }
    break;

    case 8:
    {
        switch(day)
        {
            case 1: case 8: case 15: case 22: case 29:
                printf("\nDzien ");
                printf("%d", day);
                printf(".08.2019 to czwartek.\n");
            break;

            case 2: case 9: case 16: case 23: case 30:
                printf("\nDzien ");
                printf("%d", day);
                printf(".08.2019 to piatek.\n");
            break;

            case 3: case 10: case 17: case 24: case 31:
                printf("\nDzien ");
                printf("%d", day);
                printf(".08.2019 to sobota.\n");
            break;

            case 4: case 11: case 18: case 25:
                printf("\nDzien ");
                printf("%d", day);
                printf(".08.2019 to niedizela.\n");
            break;

            case 5: case 12: case 19: case 26:
                printf("\nDzien ");
                printf("%d", day);
                printf(".08.2019 to poniedzialek.\n");
            break;

            case 6: case 13: case 20: case 27:
                printf("\nDzien ");
                printf("%d", day);
                printf(".08.2019 to wtorek.\n");
            break;

            case 7: case 14: case 21: case 28:
                printf("\nDzien ");
                printf("%d", day);
                printf(".08.2019 to sroda.\n");
            break;
                default: printf("Nie ma takiego dnia w miesiacu! \n");
        }

        week = (day+212)/7;
        printf("Tygodni - %d",week);
    }
    break;

    case 9:
    {
        switch(day)
        {
            case 1: case 8: case 15: case 22: case 29:
                printf("\nDzien ");
                printf("%d", day);
                printf(".09.2019 to niedziela.\n");
            break;

            case 2: case 9: case 16: case 23: case 30:
                printf("\nDzien ");
                printf("%d", day);
                printf(".09.2019 to poniedzialek.\n");
            break;

            case 3: case 10: case 17: case 24:
                printf("\nDzien ");
                printf("%d", day);
                printf(".09.2019 to wtorek.\n");
            break;

            case 4: case 11: case 18: case 25:
                printf("\nDzien ");
                printf("%d", day);
                printf(".09.2019 to sroda.\n");
            break;

            case 5: case 12: case 19: case 26:
                printf("\nDzien ");
                printf("%d", day);
                printf(".09.2019 to czwartek.\n");
            break;

            case 6: case 13: case 20: case 27:
                printf("\nDzien ");
                printf("%d", day);
                printf(".09.2019 to piatek.\n");
            break;

            case 7: case 14: case 21: case 28:
                printf("\nDzien ");
                printf("%d", day);
                printf(".09.2019 to sobota.\n");
            break;
                default: printf("Nie ma takiego dnia w miesiacu! \n");
        }

        week = (day+243)/7;
        printf("Tygodni - %d",week);
    }
    break;

    case 10:
    {
        switch(day)
        {
            case 1: case 8: case 15: case 22: case 29:
                printf("\nDzien ");
                printf("%d", day);
                printf(".10.2019 to wtorek.\n");
            break;

            case 2: case 9: case 16: case 23: case 30:
                printf("\nDzien ");
                printf("%d", day);
                printf(".10.2019 to sroda.\n");
            break;

            case 3: case 10: case 17: case 24: case 31:
                printf("\nDzien ");
                printf("%d", day);
                printf(".10.2019 to czwartek.\n");
            break;

            case 4: case 11: case 18: case 25:
                printf("\nDzien ");
                printf("%d", day);
                printf(".10.2019 to piatek.\n");
            break;

            case 5: case 12: case 19: case 26:
                printf("\nDzien ");
                printf("%d", day);
                printf(".10.2019 to sobota.\n");
            break;

            case 6: case 13: case 20: case 27:
                printf("\nDzien ");
                printf("%d", day);
                printf(" to niedziela.\n");
            break;

            case 7: case 14: case 21: case 28:
                printf("\nDzien ");
                printf("%d", day);
                printf(".10.2019 to poniedzialek.\n");
            break;
                default: printf("Nie ma takiego dnia w miesiacu! \n");
        }

        week = (day+273)/7;
        printf("Tygodni - %d",week);
    }
    break;

    case 11:
    {
         switch(day)
         {
            case 1: case 8: case 15: case 22: case 29:
                printf("\nDzien ");
                printf("%d", day);
                printf(".11.2019 to piatek.\n");
            break;

            case 2: case 9: case 16: case 23: case 30:
                printf("\nDzien ");
                printf("%d", day);
                printf(".11.2019 to sobota.\n");
            break;

            case 3: case 10: case 17: case 24:
                printf("\nDzien ");
                printf("%d", day);
                printf(".11.2019 to niedziela.\n");
            break;

            case 4: case 11: case 18: case 25:
                printf("\nDzien ");
                printf("%d", day);
                printf(".11.2019 to poniedzialek.\n");
            break;

            case 5: case 12: case 19: case 26:
                printf("\nDzien ");
                printf("%d", day);
                printf(".11.2019 to wtorek.\n");
            break;

            case 6: case 13: case 20: case 27:
                printf("\nDzien ");
                printf("%d", day);
                printf(".11.2019 to sroda.\n");
            break;

            case 7: case 14: case 21: case 28:
                printf("\nDzien ");
                printf("%d", day);
                printf(".11.2019 to czwartek.\n");
            break;
                default: printf("Nie ma takiego dnia w miesiacu! \n");
         }


        week = (day+304)/7;
        printf("Tygodni - %d",week);
    }
    break;

    case 12:
    {
        switch(day)
         {
            case 1: case 8: case 15: case 22: case 29:
                printf("\nDzien ");
                printf("%d", day);
                printf(".11.2019 to niedziela.\n");
            break;

            case 2: case 9: case 16: case 23: case 30:
                printf("\nDzien ");
                printf("%d", day);
                printf(".11.2019 to poniedzialek.\n");
            break;

            case 3: case 10: case 17: case 24: case 31:
                printf("\nDzien ");
                printf("%d", day);
                printf(".11.2019 to wtorek.\n");
            break;

            case 4: case 11: case 18: case 25:
                printf("\nDzien ");
                printf("%d", day);
                printf(".11.2019 to sroda.\n");
            break;

            case 5: case 12: case 19: case 26:
                printf("\nDzien ");
                printf("%d", day);
                printf(".11.2019 to czwartek.\n");
            break;

            case 6: case 13: case 20: case 27:
                printf("\nDzien ");
                printf("%d", day);
                printf(".11.2019 to piatek.\n");
            break;

            case 7: case 14: case 21: case 28:
                printf("\nDzien ");
                printf("%d", day);
                printf(".11.2019 to sobota.\n");
            break;
                default: printf("Nie ma takiego dnia w miesiacu! \n");
        }


        week = (day+334)/7;
        printf("Tygodni - %d",week);
    }
    break;
    default: printf("Podaj poprawny dzien miesiaca! ");return 0;
}
    return 0;
}
