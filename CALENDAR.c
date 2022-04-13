#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#define ENTER 10
#define ESC 27

int main()
{
    while(1){
    system("cls");
    char ch;
    system("color 5E");
    char *months[]={"JANUARY","FEBRUARY","MARCH","APRIL","MAY","JUNE","JULY","AUGUST","SEPTEMBER","OCTOBER","NOVEMBER","DECEMBER"};
    int days[]={31,28,31,30,31,30,31,31,30,31,30,31};
    int year,i,j,k=0,weekday;
    printf("Enter the year: ");
    scanf("%d",&year);
    if(year%4)
        days[1]=28;
    else if(year%100)
        days[1]=29;
    else if(year%400)
        days[1]=28;
    else
        days[1]=29;
    weekday=(year*365+((year-1)/4)-((year-1)/100)+((year-1)/400))%7;
    printf("\n\n**************** Welcome to %d *******************\n\n\n",year);
    for(i=0;i<12;i++)
    {
        printf("\n\n-------------------- %-8s --------------------\n\n",months[i]);
        printf("   SUN   MON   TUE   WED   THU   FRI   SAT\n\n");
        for(k=1;k<=weekday;k++)
            printf("      ");
        for(j=1;j<=days[i];j++)
        {
            printf("%6d",j);
            weekday++;
            if(weekday>6)
            {
                weekday=0;
                printf("\n");
            }
        }
    }
    printf("\n\nPress any key(except ESC) to  see another calender\nPress ESC to exit\n");
    ch=getch();
    label1:
    if(ch==10){
        continue;
    }
    else if(ch==27)
        exit(0);
    }
}
