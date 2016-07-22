#include <iostream>
#include <sstream>
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


using namespace std;

void Intro_Primera(char c[3][3])
{
    char aux = '1';
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            c[i][j] = aux++;
        }//for anidado
    }//for

}//intro primera

void Tablero(char c[3][3])
{
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(j<2)
            {
               printf(" %c |",c[i][j]);
            }//if
            else
            {
               printf(" %c ",c[i][j]);
            }
        }//for anidado
        if(i<2)
        {
        printf("\n-----------\n");
        }//
    }//for
    printf("\n\n");
}//tablero

void Valores(char c[3][3])
{
    int i,j,k;
    char aux;
    do
    {
        do
        {
            printf("Coloca una ficha ");
            fflush(stdin);
            scanf("%c",&aux);
        }while(aux < '1' || aux > '9');  //do-anidado

        k = 0;

        switch(aux)
        {
        case '1':
            i = 0;
            j = 0;

            if(c[i][j] == 'X' || c[i][j] == 'O')
            {
                k = 1;
                printf("La casilla esta ocupada!\n\n ");
            }//if
        break;

        case '2':
            i = 0;
            j = 1;

            if(c[i][j] == 'X' || c[i][j] == 'O')
            {
                k = 1;
                printf("La casilla esta ocupada!\n\n ");
            }//if
        break;

        case '3':
            i = 0;
            j = 2;

            if(c[i][j] == 'X' || c[i][j] == 'O')
            {
                k = 1;
                printf("La casilla esta ocupada!\n\n ");
            }//if
        break;

        case '4':
            i = 1;
            j = 0;

            if(c[i][j] == 'X' || c[i][j] == 'O')
            {
                k = 1;
                printf("La casilla esta ocupada!\n\n ");
            }//if
        break;

        case '5':
            i = 1;
            j = 1;

            if(c[i][j] == 'X' || c[i][j] == 'O')
            {
                k = 1;
                printf("La casilla esta ocupada!\n\n ");
            }//if
        break;

        case '6':
            i = 1;
            j = 2;

            if(c[i][j] == 'X' || c[i][j] == 'O')
            {
                k = 1;
                printf("La casilla esta ocupada!\n\n ");
            }//if
        break;

        case '7':
            i = 2;
            j = 0;

            if(c[i][j] == 'X' || c[i][j] == 'O')
            {
                k = 1;
                printf("La casilla esta ocupada!\n\n ");
            }//if
        break;

        case '8':
            i = 2;
            j = 1;

            if(c[i][j] == 'X' || c[i][j] == 'O')
            {
                k = 1;
                printf("La casilla esta ocupada!\n\n ");
            }//if
        break;

        case '9':
            i = 2;
            j = 2;

            if(c[i][j] == 'X' || c[i][j] == 'O')
            {
                k = 1;
                printf("La casilla esta ocupada!\n\n ");
            }//if
        break;

        }//switch
    }while(k == 1);//do-principal

    c[i][j] = 'X';
}//valores

void Maquina(char c[3][3])
{
    int  i,j,k;
    char aux;

    srand(time(NULL));

    do
    {
      i = rand()%3;
      j = rand()%3;

      k = 0;

      if(c[i][j] == 'X' || c[i][j] == 'O')
      {
          k = 1;
      }//if
    }while(k == 1); //
   c[i][j] = 'O';
}//maquina

int Ganador(char c[3][3])
{
    if(c[0][0]=='X' || c[3][3]=='O')
    {
       if(c[0][0] == c[0][1] && c[0][0]==c[0][2])
       {
           if(c[0][0]=='X')
           {
               return 0; //player
           }//if
           else
           {
               return 1; //maquina
           }//else
       }//if anidado
       if(c[0][0] == c[1][0] && c[0][0]==c[2][0])
       {
           if(c[0][0]=='X')
           {
               return 0; //player
           }//if
           else
           {
               return 1; //maquina
           }//else
       }//if
    }//if

    if(c[1][1]=='X' || c[1][1]=='O')
    {
        if(c[1][1]==c[0][0] && c[1][1]==c[2][2])
        {
           if(c[1][1]=='X')
           {
               return 0; //player
           }//if
           else
           {
               return 1; //maquina
           }//else
        }//if anidado
      if(c[1][1]==c[1][0] && c[1][1]==c[1][2])
      {
          if(c[1][1]=='X')
           {
               return 0; //player
           }//if
           else
           {
               return 1; //maquina
           }//else
      }//if
      if(c[1][1]==c[2][0] && c[1][1]==c[0][2])
      {
          if(c[1][1]=='X')
           {
               return 0; //player
           }//if
           else
           {
               return 1; //maquina
           }//else
      }//if
      if(c[1][1]==c[0][1] && c[1][1]==c[2][1])
      {
          if(c[1][1]=='X')
           {
               return 0; //player
           }//if
           else
           {
               return 1; //maquina
           }//else
      }//if
    }//if

    if(c[2][2]=='X' || c[2][2]=='O')
    {
        if(c[2][2]==c[2][0] && c[2][2]==c[2][1])
        {
           if(c[2][2]=='X')
           {
               return 0; //player
           }//if
           else
           {
               return 1; //maquina
           }//else
        }//if
        if(c[2][2]==c[0][2] && c[2][2]==c[1][2])
        {
           if(c[2][2]=='X')
           {
               return 0; //player
           }//if
           else
           {
               return 1; //maquina
           }//else
        }//if
    }//if
    return 2;
}//Ganador


void Loop(char c[3][3])
{
   int co,j;
   co = 0;

   Intro_Primera(c);
   Tablero(c);
   do
   {
       system("cls");
       Tablero(c);

       if(co % 2 == 0)
       {
           Valores(c);
       }//if
       else
       {
           Maquina(c);
       }//else
       //Tablero(c);
       j = Ganador(c);
       co++;

   }while(co <= 9 && j == 2);

   system("cls");
   Tablero(c);

   if(j == 0)
   {
       printf("Bien! Ganaste! \n\n");
   }//if
   else if(j == 1)
   {
       printf("Lo siento, Perdiste! vuelve a intentarlo \n\n");
   }//else-if
   else
   {
       printf("Es un empate, trata otra vez");
   }//else
}//loop

int main ()
{
    system("color 3");
    char c [3][3];
    Loop(c); //lama a todas las funciones fundamentales y hace un refresco en la pantalla
    return  0;
}//main
