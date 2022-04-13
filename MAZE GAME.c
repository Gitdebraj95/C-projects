#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77
int m,n,x,y;
char square[27]={' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '};
void setup()
{
    system("color 2F");
    label1:
    srand(time(NULL));
    m=rand()%25;
    if(m==0)
        goto label1;
    label2:
    srand(time(NULL));
    n=rand()%25;
    if(n==0||n==m)
        goto label2;
    square[m]='A';
    square[n]='B';
}
void draw()
{
    int i=1;
    system("cls");
    printf("WELCOME TO MAZE GAME!!!\n\n\n");
    printf(" ____________________________________________\n");
    while(i)
    {
        printf("|        |        |        |        |        |\n");
        printf("|    %c        %c        %c        %c        %c   |\n",square[i],square[i+1],square[i+2],square[i+3],square[i+4]);
        i=i+5;
        if(i<=21)
            printf("|___  ___|___  ___|___  ___|___  ___|___  ___|\n");
        else
            printf("|________|________|________|________|________|\n");
        if(i==26)
            break;

    }

}
void direction()
{
    char ch;
    ch=getch();
    switch(ch)
    {
        case UP:
            square[n-5]='*';
            n=n-5;
            break;
        case DOWN:
            square[n+5]='*';
            n=n+5;
            break;
        case LEFT:
            square[n-1]='*';
            n=n-1;
            break;
        case RIGHT:
            square[n+1]='*';
            n=n+1;
            break;
    }
}
void checkwin()
{
    if(m==n)
    {
        printf("\n\nYOU REACHED YOUR DESTINATION!!!\n\nYOU WON!!!\n");
        exit(0);
    }
}
int main()
{
    setup();
    while(1)
    {
         draw();
         direction();
         checkwin();
    }
    return 0;
}
