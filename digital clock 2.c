#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>

void main()
{
    system("color 4b");
    int h,m,s,d,mo,y;
    label1:
    printf("SET TIME IN HH:MM:SS FORMAT: ");
    scanf("%d%d%d",&h,&m,&s);
    if(h>24 || m>60 || s>60)
    {
        printf("\nINVALID TIME SET!!");
        goto label1;
    }
    label2:
    printf("\n\nSET THE DATE IN DD/MM/YY FORMAT: ");
    scanf("%d%d%d",&d,&mo,&y);
    if(d>31 || mo>12)
    {
        printf("\nINVALID DATE SET!!");
        goto label2;
    }
    while(1)
    {
        s++;
        if(s>59)
        {
            m++;
            s=0;
        }
        if(m>59)
        {
            h++;
            m=0;
        }
        if(h>24)
        {
            d++;
            h=1;
        }
        {if(mo%2==1)
        {
            if(d>31)
            {
                mo++;
                d=1;
            }
        }
        else
        {
            if(mo==2)
            {
                if(d>28)
                {
                    mo++;
                    d=1;
                }
            }
            else
            {
                if(d>30)
                {
                    mo++;
                    d=1;
                }
            }
        }}
        /*if(mo>11)
        {
            mo=1;
        }*/
        printf("\n\n\n\t\t\t%02d:%02d:%02d",h,m,s);
        if(h<12)
            printf("  AM");
        else if(h>=12 && m>=0 && s>=0)
            printf("  PM");
        printf("\n\n\t\t\tDATE: %02d/%02d/%02d",d,mo,y);
        printf("\t FRIDAY");
        sleep(1);
        system("cls");
    }
}
