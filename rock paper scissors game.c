#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
int usrp=0,compp=0;
void check_ops(int usr,int comp)
{
    // 1=rock 2=paper 3=scissors
    if(usr==comp)
        printf("Its a tie between you and the computer\n");
    else if(usr==1)
    {
        if(comp==2){
            printf("You lose!!\nThe computer's choice was paper!");
            compp++;}
        else
            {printf("You win!!\nThe computer's choice was scissors!");
            usrp++;}

    }
    else if(usr==2)
    {
        if(comp==1)
            {printf("You lose!!\nThe computer's choice was rock!");
            compp++;}
        else
            {printf("You win!!\nThe computer's choice was scissors!");
            usrp++;}
    }
    else if(usr==3)
    {
        if(comp==2)
            {printf("You lose!!\nThe computer's choice was paper!");
            compp++;}
        else
            {printf("You win!!\nThe computer's choice was rock!");
            usrp++;}
    }
}
void menu()
{
    printf("[1]ROCK\n[2]PAPER\n[3]SCISSORS\n[4]QUIT\n");
}
int main()
{
    char ch;
    printf("\t\t\t\t##WELCOME TO THE ROCK PAPER SCISSORS GAME##\n\n\n\n\n\n\n");
    system("color 78");
    int user_choice,comp_choice;
    while(1)
    {
        menu();
        printf("\n\n\nEnter your choice: ");
        scanf("%d",&user_choice);
        if(user_choice==4)
            break;
        srand(time(NULL));
        comp_choice=(rand()%3)+1;
        check_ops(user_choice,comp_choice);
        printf("\n\nPRESS ENTER TO CONTINUE");
        ch=getch();
        if(ch==13)
            system("cls");
            continue;
    }
    printf("\n\nYou quitted!\n\n");
    printf("YOUR POINTS= %d\nCOMPUTER POINTS= %d\n\n",usrp,compp);
    printf("Thank you for playing!!!\n\n");
}
