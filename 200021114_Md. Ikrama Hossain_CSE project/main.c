#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i,dice,cur_pos1=0,cur_pos2=0;
    int optn=0;
    char pl1[50],pl2[50];
    printf("enter player 1 name:");
    gets(pl1);
    printf("enter player 2 name:");
    gets(pl2);
    while(1)
    {
        printf("		** SNAKE AND LADDER GAME** \n		CSE 4271\n		Final Project\n");
        printf("Snakes:-97 to  12, 89 to 53, 73 to 47, 70 to 25, 32 to 13, 63 to 3.\nLadder:- 50 to  83, 60 to 84, 14 to 42, 6 to 16, 8 to 41, 26 to 29.\n");

        if (optn==0)
        {
            printf("who plays first?\n");
            printf("1. Player 1: %s plays first\n",pl1);
            printf("2. Player 2: %s plays first\n",pl2);
            printf("3. quit game\n");
            printf("4. rules\n");
            scanf("%d",&optn);
        }
        else if(optn==1 && dice!=6)
        {
            printf("ready Player 2: %s?\n",pl2);
            printf("Choose your option\n");
            printf("1. Throw Dice\n");
            printf("2. quit game\n");
            scanf("%d",&optn);
            if (optn==1)
            {
                optn=2;
            }
            else
            {
                optn=3;
            }
        }
        else if(optn==1 && dice==6)
        {
            printf("ready Player 1: %s?\n",pl1);
            printf("Choose your option\n");
            printf("1. Throw Dice again\n");
            printf("2. quit game\n");
            scanf("%d",&optn);
            if (optn==2)
            {
                optn=3;
            }
        }
        else if(optn==2 && dice!=6)
        {
            printf("ready Player 1: %s?\n",pl1);
            printf("Choose your option\n");
            printf("1. Throw Dice\n");
            printf("2. quit game\n");
            scanf("%d",&optn);
            if (optn==2)
            {
                optn=3;
            }
        }
        else if(optn==2 && dice==6)
        {
            printf("ready Player 2: %s?\n",pl2);
            printf("Choose your option\n");
            printf("1. Throw Dice again\n");
            printf("2. quit game\n");
            scanf("%d",&optn);
            if (optn==1)
            {
                optn=2;
            }
            else
            {
                optn=3;
            }
        }

        switch(optn)
        {

        case 1:
            dice=rd();
            system("cls");
            printf("\t\t\t%s thrown Dice = %d\n\n",pl1,dice);
            if(dice==6)
            {
                printf("Dice=6: You have earned a chance to play one more time.\n");
                cur_pos1=dice+cur_pos1;
            }
            if(cur_pos1<101)
            {
                cur_pos1=dice+cur_pos1;
                if(cur_pos1==97)//snake
                {
                    cur_pos1=12;
                    if (cur_pos1!=cur_pos2)
                    {
                        displaychart(cur_pos1,"$P1$");
                        displaychart(cur_pos2,"$P2$");
                    }
                    else
                    {
                        displaychart(cur_pos2,"$PP$");
                    }

                }
                else if(cur_pos1==89)//snake
                {
                    cur_pos1=53;
                    if (cur_pos1!=cur_pos2)
                    {
                        displaychart(cur_pos1,"$P1$");
                        displaychart(cur_pos2,"$P2$");
                    }
                    else
                    {
                        displaychart(cur_pos2,"$PP$");
                    }

                }
                else if(cur_pos1==73)//snake
                {
                    cur_pos1=47;
                    if (cur_pos1!=cur_pos2)
                    {
                        displaychart(cur_pos1,"$P1$");
                        displaychart(cur_pos2,"$P2$");
                    }
                    else
                    {
                        displaychart(cur_pos2,"$PP$");
                    }

                }
                else if(cur_pos1==70)//snake
                {
                    cur_pos1=25;
                    if (cur_pos1!=cur_pos2)
                    {
                        displaychart(cur_pos1,"$P1$");
                        displaychart(cur_pos2,"$P2$");
                    }
                    else
                    {
                        displaychart(cur_pos2,"$PP$");
                    }

                }
                else if(cur_pos1==32)//snake
                {
                    cur_pos1=13;
                    if (cur_pos1!=cur_pos2)
                    {
                        displaychart(cur_pos1,"$P1$");
                        displaychart(cur_pos2,"$P2$");
                    }
                    else
                    {
                        displaychart(cur_pos2,"$PP$");
                    }

                }
                else if(cur_pos1==63)//snake
                {
                    cur_pos1=3;
                    if (cur_pos1!=cur_pos2)
                    {
                        displaychart(cur_pos1,"$P1$");
                        displaychart(cur_pos2,"$P2$");
                    }
                    else
                    {
                        displaychart(cur_pos2,"$PP$");
                    }

                }
                else if(cur_pos1==50)//ladder
                {
                    cur_pos1=83;
                    if (cur_pos1!=cur_pos2)
                    {
                        displaychart(cur_pos1,"$P1$");
                        displaychart(cur_pos2,"$P2$");
                    }
                    else
                    {
                        displaychart(cur_pos2,"$PP$");
                    }

                }
                else if(cur_pos1==60)//ladder
                {
                    cur_pos1=83;
                    if (cur_pos1!=cur_pos2)
                    {
                        displaychart(cur_pos1,"$P1$");
                        displaychart(cur_pos2,"$P2$");
                    }
                    else
                    {
                        displaychart(cur_pos2,"$PP$");
                    }

                }
                else if(cur_pos1==14)//ladder
                {
                    cur_pos1=42;
                    if (cur_pos1!=cur_pos2)
                    {
                        displaychart(cur_pos1,"$P1$");
                        displaychart(cur_pos2,"$P2$");
                    }
                    else
                    {
                        displaychart(cur_pos2,"$PP$");
                    }

                }
                else if(cur_pos1==6)//ladder
                {
                    cur_pos1=16;
                    if (cur_pos1!=cur_pos2)
                    {
                        displaychart(cur_pos1,"$P1$");
                        displaychart(cur_pos2,"$P2$");
                    }
                    else
                    {
                        displaychart(cur_pos2,"$PP$");
                    }

                }
                else if(cur_pos1==8)//ladder
                {
                    cur_pos1=41;
                    if (cur_pos1!=cur_pos2)
                    {
                        displaychart(cur_pos1,"$P1$");
                        displaychart(cur_pos2,"$P2$");
                    }
                    else
                    {
                        displaychart(cur_pos2,"$PP$");
                    }

                }
                else if(cur_pos1==26)//ladder
                {
                    cur_pos1=29;
                    if (cur_pos1!=cur_pos2)
                    {
                        displaychart(cur_pos1,"$P1$");
                        displaychart(cur_pos2,"$P2$");
                    }
                    else
                    {
                        displaychart(cur_pos2,"$PP$");
                    }

                }
                else
                {
                    if (cur_pos1!=cur_pos2)
                    {
                        displaychart(cur_pos1,"$P1$");
                        displaychart(cur_pos2,"$P2$");
                    }
                    else
                    {
                        displaychart(cur_pos2,"$PP$");
                    }
                }

            }
            else
            {
                cur_pos1=cur_pos1-dice;
                printf("Range exceeded of Player 1.\n");
                if (cur_pos1!=cur_pos2)
                {
                    displaychart(cur_pos1,"$P1$");
                    displaychart(cur_pos2,"$P2$");
                }
                else
                {
                    displaychart(cur_pos2,"$PP$");
                }
            }
            printf("Player 1 : %s position is %d\n",pl1,cur_pos1);
            printf("Player 2 : %s position is %d\n",pl2,cur_pos2);

            break;
        case 2:
            dice=rd();
            system("cls");
            printf("\t\t\t%s thrown Dice = %d\n\n",pl2,dice);
            if(dice==6)
            {
                printf("Dice=6: You have earned a chance to play one more time.\n");
                cur_pos2=dice+cur_pos2;
            }
            if(cur_pos2<101)
            {
                cur_pos2=dice+cur_pos2;
                if(cur_pos2==97)//snake
                {
                    cur_pos2=12;
                    if (cur_pos1!=cur_pos2)
                    {
                        displaychart(cur_pos1,"$P1$");
                        displaychart(cur_pos2,"$P2$");
                    }
                    else
                    {
                        displaychart(cur_pos2,"$PP$");
                    }

                }
                else if(cur_pos2==89)//snake
                {
                    cur_pos2=53;
                    if (cur_pos1!=cur_pos2)
                    {
                        displaychart(cur_pos1,"$P1$");
                        displaychart(cur_pos2,"$P2$");
                    }
                    else
                    {
                        displaychart(cur_pos2,"$PP$");
                    }

                }
                else if(cur_pos2==73)//snake
                {
                    cur_pos2=47;
                    if (cur_pos1!=cur_pos2)
                    {
                        displaychart(cur_pos1,"$P1$");
                        displaychart(cur_pos2,"$P2$");
                    }
                    else
                    {
                        displaychart(cur_pos2,"$PP$");
                    }

                }
                else if(cur_pos2==70)//snake
                {
                    cur_pos2=25;
                    if (cur_pos1!=cur_pos2)
                    {
                        displaychart(cur_pos1,"$P1$");
                        displaychart(cur_pos2,"$P2$");
                    }
                    else
                    {
                        displaychart(cur_pos2,"$PP$");
                    }

                }
                else if(cur_pos2==32)//snake
                {
                    cur_pos2=13;
                    if (cur_pos1!=cur_pos2)
                    {
                        displaychart(cur_pos1,"$P1$");
                        displaychart(cur_pos2,"$P2$");
                    }
                    else
                    {
                        displaychart(cur_pos2,"$PP$");
                    }

                }
                else if(cur_pos2==63)//snake
                {
                    cur_pos2=3;
                    if (cur_pos1!=cur_pos2)
                    {
                        displaychart(cur_pos1,"$P1$");
                        displaychart(cur_pos2,"$P2$");
                    }
                    else
                    {
                        displaychart(cur_pos2,"$PP$");
                    }

                }
                else if(cur_pos2==50)//ladder
                {
                    cur_pos2=83;
                    if (cur_pos1!=cur_pos2)
                    {
                        displaychart(cur_pos1,"$P1$");
                        displaychart(cur_pos2,"$P2$");
                    }
                    else
                    {
                        displaychart(cur_pos2,"$PP$");
                    }

                }
                else if(cur_pos2==60)//ladder
                {
                    cur_pos2=83;
                    if (cur_pos1!=cur_pos2)
                    {
                        displaychart(cur_pos1,"$P1$");
                        displaychart(cur_pos2,"$P2$");
                    }
                    else
                    {
                        displaychart(cur_pos2,"$PP$");
                    }

                }
                else if(cur_pos2==14)//ladder
                {
                    cur_pos2=42;
                    if (cur_pos1!=cur_pos2)
                    {
                        displaychart(cur_pos1,"$P1$");
                        displaychart(cur_pos2,"$P2$");
                    }
                    else
                    {
                        displaychart(cur_pos2,"$PP$");
                    }

                }
                else if(cur_pos2==6)//ladder
                {
                    cur_pos2=16;
                    if (cur_pos1!=cur_pos2)
                    {
                        displaychart(cur_pos1,"$P1$");
                        displaychart(cur_pos2,"$P2$");
                    }
                    else
                    {
                        displaychart(cur_pos2,"$PP$");
                    }

                }
                else if(cur_pos2==8)//ladder
                {
                    cur_pos2=41;
                    if (cur_pos1!=cur_pos2)
                    {
                        displaychart(cur_pos1,"$P1$");
                        displaychart(cur_pos2,"$P2$");
                    }
                    else
                    {
                        displaychart(cur_pos2,"$PP$");
                    }

                }
                else if(cur_pos2==26)//ladder
                {
                    cur_pos2=29;
                    if (cur_pos1!=cur_pos2)
                    {
                        displaychart(cur_pos1,"$P1$");
                        displaychart(cur_pos2,"$P2$");
                    }
                    else
                    {
                        displaychart(cur_pos2,"$PP$");
                    }

                }
                else
                {
                    if (cur_pos1!=cur_pos2)
                    {
                        displaychart(cur_pos1,"$P1$");
                        displaychart(cur_pos2,"$P2$");
                    }
                    else
                    {
                        displaychart(cur_pos2,"$PP$");
                    }
                }
            }

            else
            {
                cur_pos2=cur_pos2-dice;
                printf("Range exceeded of Player 2: %s.\n",pl2);
                displaychart(cur_pos2,"$P2$");
            }
            printf("Player 1 : %s position is %d\n",pl1,cur_pos1);
            printf("Player 2 : %s position is %d\n",pl2,cur_pos2);
            break;
        case 3:
            exit(0);
            break;
        case 4:
            rules();
            exit(0);
            break;
        default:
            printf("Incorrect choice.Try Again\n");

        }

    }

}
