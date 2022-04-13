#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>

char square[10]={'0','1','2','3','4','5','6','7','8','9'};
void DrawBoard();
int CheckWin();

int main()
{
    system("color 49");
    int player=1,i,choice;
    char mark;
    do
    {
        DrawBoard();
        player=(player % 2) ? 1 : 2;
        printf("\n\tPlayer %d, enter your choice: ",player);
        scanf("%d",&choice);
        mark = (player == 1) ? 'X' : 'O';
        if(choice==1 && square[1]=='1')
            square[1]=mark;
        else if(choice==2 && square[2]=='2')
            square[2]=mark;
        else if(choice==3 && square[3]=='3')
            square[3]=mark;
        else if(choice==4 && square[4]=='4')
            square[4]=mark;
        else if(choice==5 && square[5]=='5')
            square[5]=mark;
        else if(choice==6 && square[6]=='6')
            square[6]=mark;
        else if(choice==7 && square[7]=='7')
            square[7]=mark;
        else if(choice==8 && square[8]=='8')
            square[8]=mark;
        else if(choice==9 && square[9]=='9')
            square[9]=mark;
        else
        {
            printf("INVALID CHOICE !!!");
            player--;
            getch();
        }
        i=CheckWin();
        player++;
    }while(i==-1);
    DrawBoard();
    if(i==1)
        printf("\n\n\t\tPlayer %d has won !!!",--player);
    else
        printf("\n\n\t\tThe match is draw !!!");
    getch();
    return 0;
}
int CheckWin()
{
    if(square[1]==square[2]&&square[2]==square[3])
        return 1;
    if(square[4]==square[5]&&square[5]==square[6])
        return 1;
    if(square[7]==square[8]&&square[8]==square[9])
        return 1;
    if(square[1]==square[4]&&square[4]==square[7])
        return 1;
    if(square[2]==square[5]&&square[5]==square[8])
        return 1;
    if(square[3]==square[6]&&square[6]==square[9])
        return 1;
    if(square[1]==square[5]&&square[5]==square[9])
        return 1;
    if(square[3]==square[5]&&square[5]==square[7])
        return 1;
    else if(square[1]!= '1'&&square[2]!='2'&&square[3]!='3'&&square[4]!='4'&&square[5]!='5'&&square[6]!='6'&&square[7]!='7'&&square[8]!='8'&&square[9]!='9')
        return 0;
    else
        return -1;
}
void DrawBoard()
{
    system("cls");
    printf("\n\t TIC TAC TOE GAME !!!\n\n");
    printf("\tPLAYER 1 ==> X and PLAYER 2 ==> O\n\n\n");
    printf("\t\t   |   |   \n");
    printf("\t\t %c | %c | %c \n",square[1],square[2],square[3]);
    printf("\t\t___|___|___\n");
    printf("\t\t   |   |   \n");
    printf("\t\t %c | %c | %c \n",square[4],square[5],square[6]);
    printf("\t\t___|___|___\n");
    printf("\t\t   |   |   \n");
    printf("\t\t %c | %c | %c \n",square[7],square[8],square[9]);
    printf("\t\t   |   |   ");
}
