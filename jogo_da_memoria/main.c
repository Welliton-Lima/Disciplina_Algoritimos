#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <windows.h>
#include <time.h>

//PROTÓTIPOS DE FUNÇÕES //KLEBER
void menu();
void desenvolvedores();
void game();
void caixamenu(int x,int y);

void ConsoleColor(int x, int y)//COLORIR TELA DE FUNDO E O TEXTO /WELLITON
{

    SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), x << 4 | y);
}
void gotoxy(int x, int y)// PARA COLOCAR PRINTS NAS COORDENADAS DESEJADAS //WELLITON
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void menu()//IMPRIME AS OPCOES DO JOGO//KLEBER
{
    int opcao=0,ok=0;
    PlaySound("ruins_loop.wav", NULL, SND_FILENAME | SND_NODEFAULT | SND_ASYNC | SND_LOOP);
    while(ok==0){
    system("color 1F");
    system("cls");
    printf("\n\n");
    printf("                                                                        %c%c%c       %c%c%c%c%c%c%c%c%c%c%c%c         %c%c%c%c%c%c%c%c%c%c%c%c         %c%c%c%c%c%c%c%c%c%c%c%c\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
    printf("                                                                        %c%c%c     %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c     %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c     %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
    printf("                                                                        %c%c%c     %c%c%c          %c%c%c     %c%c%c           %c%c     %c%c%c          %c%c%c\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
    printf("                                                                        %c%c%c     %c%c%c          %c%c%c     %c%c%c                  %c%c%c          %c%c%c\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
    printf("                                                                        %c%c%c     %c%c%c          %c%c%c     %c%c%c                  %c%c%c          %c%c%c\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
    printf("                                                                        %c%c%c     %c%c%c          %c%c%c     %c%c%c                  %c%c%c          %c%c%c\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
    printf("                                                                        %c%c%c     %c%c%c          %c%c%c     %c%c%c     %c%c%c%c%c%c%c%c     %c%c%c          %c%c%c\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
    printf("                                                                        %c%c%c     %c%c%c          %c%c%c     %c%c%c     %c%c%c%c%c%c%c%c     %c%c%c          %c%c%c\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
    printf("                                                                        %c%c%c     %c%c%c          %c%c%c     %c%c%c           %c%c     %c%c%c          %c%c%c\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
    printf("                                                           %c%c%c          %c%c%c     %c%c%c          %c%c%c     %c%c%c           %c%c     %c%c%c          %c%c%c\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
    printf("                                                            %c%c%c%c%c%c%c%c%c%c%c%c%c%c      %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c      %c%c%c%c%c%c%c%c%c%c%c%c%c%c       %c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
    printf("                                                             %c%c%c%c%c%c%c%c%c%c%c%c         %c%c%c%c%c%c%c%c%c%c%c%c         %c%c%c%c%c%c%c%c%c%c%c%c         %c%c%c%c%c%c%c%c%c%c%c%c\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
    printf("\n\n");
    printf("                                                                               %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c        %c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
    printf("                                                                               %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c      %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
    printf("                                                                               %c%c%c          %c%c%c      %c%c%c%c%c      %c%c%c%c%c\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
    printf("                                                                               %c%c%c          %c%c%c      %c%c%c%c%c      %c%c%c%c%c\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
    printf("                                                                               %c%c%c          %c%c%c      %c%c%c%c%c      %c%c%c%c%c\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
    printf("                                                                               %c%c%c          %c%c%c      %c%c%c%c%c      %c%c%c%c%c\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
    printf("                                                                               %c%c%c          %c%c%c      %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
    printf("                                                                               %c%c%c          %c%c%c      %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
    printf("                                                                               %c%c%c          %c%c%c      %c%c%c%c%c      %c%c%c%c%c\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
    printf("                                                                               %c%c%c          %c%c%c      %c%c%c%c%c      %c%c%c%c%c\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
    printf("                                                                               %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c      %c%c%c%c%c      %c%c%c%c%c\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
    printf("                                                                               %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c       %c%c%c%c%c      %c%c%c%c%c\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
    printf("\n");
    printf("                                                                                                             %c%c%c                                                                                             \n",178,178,178);
    printf("                                                                                                            %c%c%c                                                                                              \n",178,178,178);
    printf("                                                                                                                                                                                                                                                                         \n");
    printf("                                       %c%c%c          %c%c%c     %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c     %c%c%c          %c%c%c       %c%c%c%c%c%c%c%c%c%c%c%c       %c%c%c%c%c%c%c%c%c%c%c%c       %c%c%c%c       %c%c%c%c%c%c%c%c%c%c%c%c                                         \n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
    printf("                                       %c%c%c%c        %c%c%c%c     %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c     %c%c%c%c        %c%c%c%c     %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c     %c%c%c%c%c%c%c%c%c%c%c%c%c%c     %c%c%c%c     %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c                                       \n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
    printf("                                       %c%c%c%c%c      %c%c%c%c%c     %c%c%c                  %c%c%c%c%c      %c%c%c%c%c     %c%c%c          %c%c%c     %c%c%c        %c%c%c     %c%c%c%c     %c%c%c%c%c      %c%c%c%c%c                                       \n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
    printf("                                       %c%c%c%c%c%c%c  %c%c%c%c%c%c%c     %c%c%c                  %c%c%c%c%c%c%c  %c%c%c%c%c%c%c     %c%c%c          %c%c%c     %c%c%c        %c%c%c     %c%c%c%c     %c%c%c%c%c      %c%c%c%c%c                                       \n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
    printf("                                       %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c     %c%c%c                  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c     %c%c%c          %c%c%c     %c%c%c        %c%c%c     %c%c%c%c     %c%c%c%c%c      %c%c%c%c%c                                       \n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
    printf("                                       %c%c%c  %c%c%c%c%c%c  %c%c%c     %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c     %c%c%c  %c%c%c%c%c%c  %c%c%c     %c%c%c          %c%c%c     %c%c%c%c%c%c%c%c%c%c%c%c%c      %c%c%c%c     %c%c%c%c%c      %c%c%c%c%c                                       \n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
    printf("                                       %c%c%c    %c%c    %c%c%c     %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c     %c%c%c    %c%c    %c%c%c     %c%c%c          %c%c%c     %c%c%c%c%c%c%c%c%c%c%c%c       %c%c%c%c     %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c                                       \n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
    printf("                                       %c%c%c          %c%c%c     %c%c%c                  %c%c%c          %c%c%c     %c%c%c          %c%c%c     %c%c%c        %c%c%c     %c%c%c%c     %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c                                       \n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
    printf("                                       %c%c%c          %c%c%c     %c%c%c                  %c%c%c          %c%c%c     %c%c%c          %c%c%c     %c%c%c        %c%c%c     %c%c%c%c     %c%c%c%c%c      %c%c%c%c%c                                       \n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
    printf("                                       %c%c%c          %c%c%c     %c%c%c                  %c%c%c          %c%c%c     %c%c%c          %c%c%c     %c%c%c        %c%c%c     %c%c%c%c     %c%c%c%c%c      %c%c%c%c%c                                       \n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
    printf("                                       %c%c%c          %c%c%c     %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c     %c%c%c          %c%c%c      %c%c%c%c%c%c%c%c%c%c%c%c%c%c      %c%c%c        %c%c%c     %c%c%c%c     %c%c%c%c%c      %c%c%c%c%c                                       \n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
    printf("                                       %c%c%c          %c%c%c     %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c     %c%c%c          %c%c%c       %c%c%c%c%c%c%c%c%c%c%c%c       %c%c%c        %c%c%c     %c%c%c%c     %c%c%c%c%c      %c%c%c%c%c                                       \n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
    printf("\n");
    printf(" _________________________________________________________________________________________________________________________________________________________________________________\n");
    printf("|                                                                              1- JOGAR                                                                                           |\n");
    printf("|                                                                              2- DESENVOLVEDORES                                                                                 |\n");
    printf("|                                                                              3- COMO JOGAR                                                                                      |\n");
    printf("|                                                                              4- SAIR                                                                                            |\n");
    printf("|                                                                              >>                                                                                                 |\n");
    printf("|_________________________________________________________________________________________________________________________________________________________________________________|\n");

    gotoxy(82,50);scanf("%d", &opcao);
    switch(opcao)
    {
    case 1:
        system("cls");
        game();
        break;
    case 2:
        system("cls");
        desenvolvedores();
        break;
    case 3:
        system("cls");
        ConsoleColor(1,15);
        gotoxy(75,21);printf("REGRAS:");
        gotoxy(50,23);printf("1- PARA GANHAR O JOGO, O JOGADOR DEVE DESCOBRIR OS 15 PARES DE CARTAS.");
        gotoxy(50,24);printf("2- O JOGADOR DEVE ESCOLHER UM N%cMERO QUE REPRESENTE UMA CARTA E APERTAR 'ENTER' PARA CONFIRMAR.",233);
        gotoxy(50,25);printf("3- A CADA ERRO O JOGADOR PERDE 1 PONTO, CADA ACERTO GANHA 3.");
        gotoxy(50,26);printf("4- PARA SAIR O JOGADOR DEVE DIGITAR 'ZERO', NA ESCOLHA DA PRIMEIRA OU DA SEGUNDA CARTA,CONFIRMANDDO COM UM 'ENTER'.\n.");
        gotoxy(50,50);
        system("pause");
        ok=0;
        break;
    case 4:
        system("cls");
        gotoxy(75,31);
        printf("OBRIGADO POR JOGAR!\n");
        gotoxy(70,50);
        system("pause");
        ok=1;
        break;

        default:gotoxy(88,51);printf("\nOP%c%cO N%cO ENCONTRADA!\n",128,199,199);
    Sleep(2000);
        }
    }
}
void desenvolvedores()//IMPRIME INFORMACOES DO JOGO //KLEBER
{
        system("color 1F");

        gotoxy(45,10);
        printf("JOGO DESENVOLVIDOS PELOS ACAD%cMICOS DE ENGENHARIA DE COMPUTA%c%cO: KLEBER OLIVEIRA && WELLITON LIMA",210,128,199);
        gotoxy(45,11);
        printf("PARA A M1 DE ALGORITIMOS DE PROGRAMA%c%cO II, COM O PROF. RAFAEL BALLOTIN MARTINS.",128,199);
        gotoxy(60,23);
        printf("AGRADECIMENTO ESPECIAL:");
        gotoxy(80,25);
        printf("MATHIAS HEMMER.");
        gotoxy(70,50);
        printf("UNIVERSIDADE DO VALE DO ITAJA%c - 2018",214);
        gotoxy(70,52);
        system("pause");

        }
void cardverso(int X, int Y,int k)//IMPRIME A CARTA COM FACE INVVERTIDA //WELLITON
{
    ConsoleColor(12,15);
    gotoxy(X,Y);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219);
    gotoxy(X,Y+1);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,178,178,178,178,178,178,178,178,178,178,219,219);
    gotoxy(X,Y+2);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,178,178,178,178,178,178,178,178,178,178,219,219);
    gotoxy(X,Y+3);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,178,178,178,178,178,178,178,178,178,178,219,219);
    gotoxy(X,Y+4);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,178,178,178,178,178,178,178,178,178,178,219,219);
    gotoxy(X,Y+5);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,178,178,178,178,178,178,178,178,178,178,219,219);
    gotoxy(X,Y+6);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,178,178,178,178,178,178,178,178,178,178,219,219);
    gotoxy(X,Y+7);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,178,178,178,178,178,178,178,178,178,178,219,219);
    gotoxy(X,Y+8);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%d",219,219,219,219,219,219,219,219,219,219,219,219,k);
}
void deck (int X,int Y,int posicao)//COORDENADAS PARA IMPPRIMIR A CARTA COM A FACE PARA CIMA //WELLITON
{
    ConsoleColor(4,15);
    switch(posicao)
    {
    case 1:
        gotoxy(X,Y);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219);
        gotoxy(X,Y+1);
        printf("%c%c          %c%c",219,219,219,219);
        gotoxy(X,Y+2);
        printf("%c%c  %c%c%c%c%c   %c%c",219,219,205,205,203,205,205,219,219);
        gotoxy(X,Y+3);
        printf("%c%c    %c     %c%c",219,219,186,219,219);
        gotoxy(X,Y+4);
        printf("%c%c    %c     %c%c",219,219,186,219,219);
        gotoxy(X,Y+5);
        printf("%c%c    %c     %c%c",219,219,186,219,219);
        gotoxy(X,Y+6);
        printf("%c%c  %c%c%c%c%c   %c%c",219,219,205,205,202,205,205,219,219);
        gotoxy(X,Y+7);
        printf("%c%c          %c%c",219,219,219,219);
        gotoxy(X,Y+8);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219);

        break;

    case 2:
        gotoxy(X,Y);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219);
        gotoxy(X,Y+1);
        printf("%c%c          %c%c",219,219,219,219);
        gotoxy(X,Y+2);
        printf("%c%c %c%c%c%c%c%c%c%c %c%c",219,219,205,205,203,205,205,203,205,205,219,219);
        gotoxy(X,Y+3);
        printf("%c%c   %c  %c   %c%c",219,219,186,186,219,219);
        gotoxy(X,Y+4);
        printf("%c%c   %c  %c   %c%c",219,219,186,186,219,219);
        gotoxy(X,Y+5);
        printf("%c%c   %c  %c   %c%c",219,219,186,186,219,219);
        gotoxy(X,Y+6);
        printf("%c%c %c%c%c%c%c%c%c%c %c%c",219,219,205,205,202,205,205,202,205,205,219,219);
        gotoxy(X,Y+7);
        printf("%c%c          %c%c",219,219,219,219);
        gotoxy(X,Y+8);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219);

        break;

    case 3:
        gotoxy(X,Y);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219);
        gotoxy(X,Y+1);
        printf("%c%c          %c%c",219,219,219,219);
        gotoxy(X,Y+2);
        printf("%c%c  %c%c%c%c%c%c%c %c%c",219,219,205,203,205,203,205,203,205,219,219);
        gotoxy(X,Y+3);
        printf("%c%c   %c %c %c  %c%c",219,219,186,186,186,219,219);
        gotoxy(X,Y+4);
        printf("%c%c   %c %c %c  %c%c",219,219,186,186,186,219,219);
        gotoxy(X,Y+5);
        printf("%c%c   %c %c %c  %c%c",219,219,186,186,186,219,219);
        gotoxy(X,Y+6);
        printf("%c%c  %c%c%c%c%c%c%c %c%c",219,219,205,202,205,202,205,202,205,219,219);
        gotoxy(X,Y+7);
        printf("%c%c          %c%c",219,219,219,219);
        gotoxy(X,Y+8);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219);

        break;

    case 4:
        gotoxy(X,Y);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219);
        gotoxy(X,Y+1);
        printf("%c%c          %c%c",219,219,219,219);
        gotoxy(X,Y+2);
        printf("%c%c %c%c     %c %c%c",219,219,186,205,205,219,219);
        gotoxy(X,Y+3);
        printf("%c%c %c %c   %c  %c%c",219,219,186,205,205,219,219);
        gotoxy(X,Y+4);
        printf("%c%c %c  %c %c   %c%c",219,219,186,205,205,219,219);
        gotoxy(X,Y+5);
        printf("%c%c %c   %c    %c%c",219,219,186,205,219,219);
        gotoxy(X,Y+6);
        printf("%c%c          %c%c",219,219,219,219);
        gotoxy(X,Y+7);
        printf("%c%c          %c%c",219,219,219,219);
        gotoxy(X,Y+8);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219);

        break;

    case 5:
        gotoxy(X,Y);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219);
        gotoxy(X,Y+1);
        printf("%c%c          %c%c",219,219,219,219);
        gotoxy(X,Y+2);
        printf("%c%c %c      %c %c%c",219,219,205,205,219,219);
        gotoxy(X,Y+3);
        printf("%c%c  %c    %c  %c%c",219,219,205,205,219,219);
        gotoxy(X,Y+4);
        printf("%c%c   %c  %c   %c%c",219,219,205,205,219,219);
        gotoxy(X,Y+5);
        printf("%c%c    %c%c    %c%c",219,219,205,205,219,219);
        gotoxy(X,Y+6);
        printf("%c%c    %c%c    %c%c",219,219,205,205,219,219);
        gotoxy(X,Y+7);
        printf("%c%c          %c%c",219,219,219,219);
        gotoxy(X,Y+8);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219);

        break;

    case 6:
        gotoxy(X,Y);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219);
        gotoxy(X,Y+1);
        printf("%c%c          %c%c",219,219,219,219);
        gotoxy(X,Y+2);
        printf("%c%c          %c%c",219,219,219,219);
        gotoxy(X,Y+3);
        printf("%c%c  %c%c%c%c%c   %c%c",219,219,201,205,205,205,187,219,219);
        gotoxy(X,Y+4);
        printf("%c%c  %c   %c   %c%c",219,219,186,186,219,219);
        gotoxy(X,Y+5);
        printf("%c%c  %c%c%c%c%c   %c%c",219,219,200,205,205,205,188,219,219);
        gotoxy(X,Y+6);
        printf("%c%c          %c%c",219,219,219,219);
        gotoxy(X,Y+7);
        printf("%c%c          %c%c",219,219,219,219);
        gotoxy(X,Y+8);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219);

        break;

    case 7:
        gotoxy(X,Y);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219);
        gotoxy(X,Y+1);
        printf("%c%c          %c%c",219,219,219,219);
        gotoxy(X,Y+2);
        printf("%c%c  %c%c%c     %c%c",219,219,201,205,187,219,219);
        gotoxy(X,Y+3);
        printf("%c%c  %c%c%c     %c%c",219,219,200,205,188,219,219);
        gotoxy(X,Y+4);
        printf("%c%c          %c%c",219,219,219,219);
        gotoxy(X,Y+5);
        printf("%c%c     %c%c%c  %c%c",219,219,201,205,187,219,219);
        gotoxy(X,Y+6);
        printf("%c%c     %c%c%c  %c%c",219,219,200,205,188,219,219);
        gotoxy(X,Y+7);
        printf("%c%c          %c%c",219,219,219,219);
        gotoxy(X,Y+8);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219);

        break;

    case 8:
        gotoxy(X,Y);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219);
        gotoxy(X,Y+1);
        printf("%c%c          %c%c",219,219,219,219);
        gotoxy(X,Y+2);
        printf("%c%c %c%c%c      %c%c",219,219,201,205,187,219,219);
        gotoxy(X,Y+3);
        printf("%c%c %c%c%c  %c%c%c %c%c",219,219,200,205,188,201,205,187,219,219);
        gotoxy(X,Y+4);
        printf("%c%c      %c%c%c %c%c",219,219,200,205,188,219,219);
        gotoxy(X,Y+5);
        printf("%c%c %c%c%c      %c%c",219,219,201,205,187,219,219);
        gotoxy(X,Y+6);
        printf("%c%c %c%c%c      %c%c",219,219,200,205,188,219,219);
        gotoxy(X,Y+7);
        printf("%c%c          %c%c",219,219,219,219);
        gotoxy(X,Y+8);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219);

        break;

    case 9:
        gotoxy(X,Y);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219);
        gotoxy(X,Y+1);
        printf("%c%c          %c%c",219,219,219,219);
        gotoxy(X,Y+2);
        printf("%c%c %c%c%c  %c%c%c %c%c",219,219,201,205,187,201,205,187,219,219);
        gotoxy(X,Y+3);
        printf("%c%c %c%c%c  %c%c%c %c%c",219,219,200,205,188,200,205,188,219,219);
        gotoxy(X,Y+4);
        printf("%c%c          %c%c",219,219,219,219);
        gotoxy(X,Y+5);
        printf("%c%c %c%c%c  %c%c%c %c%c",219,219,201,205,187,201,205,187,219,219);
        gotoxy(X,Y+6);
        printf("%c%c %c%c%c  %c%c%c %c%c",219,219,200,205,188,200,205,188,219,219);
        gotoxy(X,Y+7);
        printf("%c%c          %c%c",219,219,219,219);
        gotoxy(X,Y+8);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219);

        break;

    case 10:
        gotoxy(X,Y);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219);
        gotoxy(X,Y+1);
        printf("%c%c          %c%c",219,219,219,219);
        gotoxy(X,Y+2);
        printf("%c%c %c%c%c  %c%c%c %c%c",219,219,201,205,187,201,205,187,219,219);
        gotoxy(X,Y+3);
        printf("%c%c %c%c%c  %c%c%c %c%c",219,219,200,205,188,200,205,188,219,219);
        gotoxy(X,Y+4);
        printf("%c%c   %c%c%c%c   %c%c",219,219,205,205,205,205,219,219);
        gotoxy(X,Y+5);
        printf("%c%c %c%c%c  %c%c%c %c%c",219,219,201,205,187,201,205,187,219,219);
        gotoxy(X,Y+6);
        printf("%c%c %c%c%c  %c%c%c %c%c",219,219,200,205,188,200,205,188,219,219);
        gotoxy(X,Y+7);
        printf("%c%c          %c%c",219,219,219,219);
        gotoxy(X,Y+8);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219);

        break;

    case 11:
        gotoxy(X,Y);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219);
        gotoxy(X,Y+1);
        printf("%c%c          %c%c",219,219,219,219);
        gotoxy(X,Y+2);
        printf("%c%c     %c    %c%c",219,219,186,219,219);
        gotoxy(X,Y+3);
        printf("%c%c  %c%c%c%c    %c%c",219,219,205,205,205,185,219,219);
        gotoxy(X,Y+4);
        printf("%c%c     %c    %c%c",219,219,186,219,219);
        gotoxy(X,Y+5);
        printf("%c%c     %c    %c%c",219,219,186,219,219);
        gotoxy(X,Y+6);
        printf("%c%c %c%c%c%c%c%c%c%c %c%c",219,219,205,205,205,205,202,205,205,205,219,219);
        gotoxy(X,Y+7);
        printf("%c%c          %c%c",219,219,219,219);
        gotoxy(X,Y+8);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219);

        break;

    case 12:
        gotoxy(X,Y);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219);
        gotoxy(X,Y+1);
        printf("%c%c          %c%c",219,219,219,219);
        gotoxy(X,Y+2);
        printf("%c%c %c%c%c%c%c%c%c  %c%c",219,219,201,205,205,205,205,205,187,219,219);
        gotoxy(X,Y+3);
        printf("%c%c       %c  %c%c",219,219,186,219,219);
        gotoxy(X,Y+4);
        printf("%c%c %c%c%c%c%c%c%c  %c%c",219,219,201,205,205,205,205,205,188,219,219);
        gotoxy(X,Y+5);
        printf("%c%c %c        %c%c",219,219,186,219,219);
        gotoxy(X,Y+6);
        printf("%c%c %c%c%c%c%c%c%c  %c%c",219,219,200,205,205,205,205,205,188,219,219);
        gotoxy(X,Y+7);
        printf("%c%c          %c%c",219,219,219,219);
        gotoxy(X,Y+8);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219);

        break;

    case 13:
        gotoxy(X,Y);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219);
        gotoxy(X,Y+1);
        printf("%c%c          %c%c",219,219,219,219);
        gotoxy(X,Y+2);
        printf("%c%c %c%c%c%c%c%c%c  %c%c",219,219,205,205,205,205,205,205,187,219,219);
        gotoxy(X,Y+3);
        printf("%c%c       %c  %c%c",219,219,186,219,219);
        gotoxy(X,Y+4);
        printf("%c%c %c%c%c%c%c%c%c  %c%c",219,219,205,205,205,205,205,205,185,219,219);
        gotoxy(X,Y+5);
        printf("%c%c       %c  %c%c",219,219,186,219,219);
        gotoxy(X,Y+6);
        printf("%c%c %c%c%c%c%c%c%c  %c%c",219,219,205,205,205,205,205,205,188,219,219);
        gotoxy(X,Y+7);
        printf("%c%c          %c%c",219,219,219,219);
        gotoxy(X,Y+8);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219);

        break;

    case 14:
        gotoxy(X,Y);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219);
        gotoxy(X,Y+1);
        printf("%c%c          %c%c",219,219,219,219);
        gotoxy(X,Y+2);
        printf("%c%c          %c%c",219,219,219,219);
        gotoxy(X,Y+3);
        printf("%c%c %c   %c    %c%c",219,219,186,186,219,219);
        gotoxy(X,Y+4);
        printf("%c%c %c   %c    %c%c",219,219,186,186,219,219);
        gotoxy(X,Y+5);
        printf("%c%c %c%c%c%c%c%c   %c%c",219,219,200,205,205,205,206,205,219,219);
        gotoxy(X,Y+6);
        printf("%c%c     %c    %c%c",219,219,186,219,219);
        gotoxy(X,Y+7);
        printf("%c%c          %c%c",219,219,219,219);
        gotoxy(X,Y+8);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219);

        break;

    case 15:
        gotoxy(X,Y);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219);
        gotoxy(X,Y+1);
        printf("%c%c          %c%c",219,219,219,219);
        gotoxy(X,Y+2);
        printf("%c%c %c%c%c%c%c%c%c  %c%c",219,219,201,205,205,205,205,205,205,219,219);
        gotoxy(X,Y+3);
        printf("%c%c %c        %c%c",219,219,186,219,219);
        gotoxy(X,Y+4);
        printf("%c%c %c%c%c%c%c%c%c  %c%c",219,219,200,205,205,205,205,205,187,219,219);
        gotoxy(X,Y+5);
        printf("%c%c       %c  %c%c",219,219,186,219,219);
        gotoxy(X,Y+6);
        printf("%c%c %c%c%c%c%c%c%c  %c%c",219,219,205,205,205,205,205,205,188,219,219);
        gotoxy(X,Y+7);
        printf("%c%c          %c%c",219,219,219,219);
        gotoxy(X,Y+8);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219);

        break;

    }
}
int embaralhar(int vet[30])//MODIFICA A POSICAO DAS CARTAS //WELLITON
{
    int i,r,temp=0;

    srand(time(NULL));
    for (i = 0; i < 30; i++)
    {
        r = rand() % 30;

        temp = vet[i];
        vet[i] = vet[r];
        vet[r] = temp;
    }
    return vet[30];
}
void caixamenu(int x, int y)//CAIXA DO MENU DE PONTUACAO //WELLITON
{
    ConsoleColor(3,15);
    gotoxy(x,y);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
    gotoxy(x,y+1);
    printf("%c                           %c",219,219);
    gotoxy(x,y+2);
    printf("%c                           %c",219,219);
    gotoxy(x,y+3);
    printf("%c                           %c",219,219);
    gotoxy(x,y+4);
    printf("%c                           %c",219,219);
    gotoxy(x,y+5);
    printf("%c                           %c",219,219);
    gotoxy(x,y+6);
    printf("%c                           %c",219,219);
    gotoxy(x,y+7);
    printf("%c                           %c",219,219);
    gotoxy(x,y+8);
    printf("%c                           %c",219,219);
    gotoxy(x,y+9);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);

}
void caixamenu2(int x,int y)//CAIXA DO MENU DE ESCOLHA //WELLITON
{
    ConsoleColor(3,15);
    gotoxy(x,y);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
    gotoxy(x,y+1);
    printf("%c                                      %c",219,219);
    gotoxy(x,y+2);
    printf("%c                                      %c",219,219);
    gotoxy(x,y+3);
    printf("%c                                      %c",219,219);
    gotoxy(x,y+4);
    printf("%c                                      %c",219,219);
    gotoxy(x,y+5);
    printf("%c                                      %c",219,219);
    gotoxy(x,y+6);
    printf("%c                                      %c",219,219);
    gotoxy(x,y+7);
    printf("%c                                      %c",219,219);
    gotoxy(x,y+8);
    printf("%c                                      %c",219,219);
    gotoxy(x,y+9);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);

}
void facedown(int chute)//FUNCAO PARA VIRAR A FACE DA CARTA PARA INVERTIDA NA COORDENADA INDICADA //WELLITON
{
    switch(chute)
    {
    case 1:
        cardverso(75,2,1);
        break;

    case 2:
        cardverso(92,2,2);
        break;

    case 3:
        cardverso(109,2,3);
        break;

    case 4:
        cardverso(126,2,4);
        break;

    case 5:
        cardverso (143,2,5);
        break;

    case 6:
        cardverso(160,2,6);
        break;

    case 7:
        cardverso(75,12,7);
        break;

    case 8:
        cardverso(92,12,8);
        break;

    case 9:
        cardverso (109,12,9);
        break;

    case 10:
        cardverso(126,12,10);
        break;

    case 11:
        cardverso(143,12,11);
        break;

    case 12:
        cardverso(160,12,12);
        break;

    case 13:
        cardverso(75,22,13);
        break;

    case 14:
        cardverso(92,22,14);
        break;

    case 15:
        cardverso(109,22,15);
        break;

    case 16:
        cardverso(126,22,16);
        break;

    case 17:
        cardverso(143,22,17);
        break;

    case 18:
        cardverso(160,22,18);
        break;

    case 19:
        cardverso(75,32,19);
        break;

    case 20:
        cardverso (92,32,20);
        break;

    case 21:
        cardverso (109,32,21);
        break;

    case 22:
        cardverso(126,32,22);
        break;

    case 23:
        cardverso (143,32,23);
        break;

    case 24:
        cardverso (160,32,24);
        break;

    case 25:
        cardverso (75,42,25);
        break;

    case 26:
        cardverso(92,42,26);
        break;

    case 27:
        cardverso (109,42,27);
        break;

    case 28:
        cardverso(126,42,28);
        break;

    case 29:
        cardverso(143,42,29);
        break;

    case 30:
        cardverso(160,42,30);
        break;
    }
}
void faceup(int chute,int vet[15])//FUNCAO PARA VIRAR A FACE DA CARTA PARA CIMA //WELLITON
{
    switch(chute)
    {
    case 1:
        deck (75,2,vet[0]);
        PlaySound(TEXT("cardflip.wav"), NULL, SND_SYNC);//COMANDO PARA INICIAR UM AUDIO QUANDO A CARTA ESTIVER COM A FACE PARA CIMA //KLEBER
        break;

    case 2:
        deck (92,2,vet[1]);
        PlaySound(TEXT("cardflip.wav"), NULL, SND_SYNC);
        break;

    case 3:
        deck (109,2,vet[2]);
        PlaySound(TEXT("cardflip.wav"), NULL, SND_SYNC);
        break;

    case 4:
        deck (126,2,vet[3]);
        PlaySound(TEXT("cardflip.wav"), NULL, SND_SYNC);
        break;

    case 5:
        deck (143,2,vet[4]);
        PlaySound(TEXT("cardflip.wav"), NULL, SND_SYNC);
        break;

    case 6:
        deck (160,2,vet[5]);
        PlaySound(TEXT("cardflip.wav"), NULL, SND_SYNC);
        break;

    case 7:
        deck (75,12,vet[6]);
        PlaySound(TEXT("cardflip.wav"), NULL, SND_SYNC);
        break;

    case 8:
        deck (92,12,vet[7]);
        PlaySound(TEXT("cardflip.wav"), NULL, SND_SYNC);
        break;

    case 9:
        deck (109,12,vet[8]);
        PlaySound(TEXT("cardflip.wav"), NULL, SND_SYNC);
        break;

    case 10:
        deck (126,12,vet[9]);
        PlaySound(TEXT("cardflip.wav"), NULL, SND_SYNC);
        break;

    case 11:
        deck (143,12,vet[10]);
        PlaySound(TEXT("cardflip.wav"), NULL, SND_SYNC);
        break;

    case 12:
        deck (160,12,vet[11]);
        PlaySound(TEXT("cardflip.wav"), NULL, SND_SYNC);
        break;

    case 13:
        deck (75,22,vet[12]);
        PlaySound(TEXT("cardflip.wav"), NULL, SND_SYNC);
        break;

    case 14:
        deck (92,22,vet[13]);
        PlaySound(TEXT("cardflip.wav"), NULL, SND_SYNC);
        break;

    case 15:
        deck (109,22,vet[14]);
        PlaySound(TEXT("cardflip.wav"), NULL, SND_SYNC);
        break;

    case 16:
        deck (126,22,vet[15]);
        PlaySound(TEXT("cardflip.wav"), NULL, SND_SYNC);
        break;

    case 17:
        deck (143,22,vet[16]);
        PlaySound(TEXT("cardflip.wav"), NULL, SND_SYNC);
        break;

    case 18:
        deck (160,22,vet[17]);
        PlaySound(TEXT("cardflip.wav"), NULL, SND_SYNC);
        break;

    case 19:
        deck (75,32,vet[18]);
        PlaySound(TEXT("cardflip.wav"), NULL, SND_SYNC);
        break;

    case 20:
        deck (92,32,vet[19]);
        PlaySound(TEXT("cardflip.wav"), NULL, SND_SYNC);
        break;

    case 21:
        deck (109,32,vet[20]);
        PlaySound(TEXT("cardflip.wav"), NULL, SND_SYNC);
        break;

    case 22:
        deck (126,32,vet[21]);
        PlaySound(TEXT("cardflip.wav"), NULL, SND_SYNC);
        break;

    case 23:
        deck (143,32,vet[22]);
        PlaySound(TEXT("cardflip.wav"), NULL, SND_SYNC);
        break;

    case 24:
        deck (160,32,vet[23]);
        PlaySound(TEXT("cardflip.wav"), NULL, SND_SYNC);
        break;

    case 25:
        deck (75,42,vet[24]);
        PlaySound(TEXT("cardflip.wav"), NULL, SND_SYNC);
        break;

    case 26:
        deck (92,42,vet[25]);
        PlaySound(TEXT("cardflip.wav"), NULL, SND_SYNC);
        break;

    case 27:
        deck (109,42,vet[26]);
        PlaySound(TEXT("cardflip.wav"), NULL, SND_SYNC);
        break;

    case 28:
        deck (126,42,vet[27]);
        PlaySound(TEXT("cardflip.wav"), NULL, SND_SYNC);
        break;

    case 29:
        deck (143,42,vet[28]);
        PlaySound(TEXT("cardflip.wav"), NULL, SND_SYNC);
        break;

    case 30:
        PlaySound(TEXT("cardflip.wav"), NULL, SND_SYNC);
        deck (160,42,vet[29]);
        break;

    }
}
void printcard()//FUNCAO PARA IMPRIMIR 30 CARTAS COM FACE INVERTIDA //WELLITON
{
    int i,j,k;
    k=1;

    for(j=0; j < 5; j++)
    {
        for(i=0; i <  6; i++,k++)
        {
            cardverso(75+i*17,10*j+2,k);
            Sleep(100);
        }
    }
}
void game() //FUNCAO DE MONTAGEM DO JOGO //WELLITON
{
    int ok,pontos,card1,card2,certo,erros,tentativa;
    char sair;

    do
    {
        int vet[30]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
        system("color 1F");
        printcard();
        gotoxy(1,23);
        printf("INICIANDO...");
        Sleep(4000);
        vet[30]=embaralhar(vet);
        pontos=0;
        card1=-1;
        card2=0;
        certo=0;
        erros=0;
        tentativa=0;
        ok=0;

        while(ok!=3)//INICIO DO JOGO
        {
            caixamenu(1,1);
            ConsoleColor(3,15);
            gotoxy(1,24);
            printf("PARA SAIR DIGITE 'ZERO'");
            gotoxy(3,3);
            printf("DADOS DA PARTIDA");
            gotoxy(3,6);
            printf("TENTATIVAS   | %d",tentativa);
            gotoxy(3,5);
            printf("ACERTOS      | %d",certo);
            gotoxy(3,7);
            printf("ERROS        | %d",erros);
            gotoxy(3,8);
            printf("PONTU%c%cO     | %d",128,199,pontos);
            gotoxy(3,16);
            printf("         ");
            gotoxy(3,17);
            printf("         ");
            gotoxy(3,17);
            printf("         ");
            ok=0;

            while(ok==0)
            {
                caixamenu2(1,14);
                ConsoleColor(3,15);
                gotoxy(3,16);
                printf("PRIMEIRA CARTA >>");//ESCOLHE A PRIMEIRA CARTA
                gotoxy(3,18);
                printf("DIGITE O N%cMERO DA CARTA:    ",233);
                gotoxy(3,19);
                fflush(stdin);
                scanf("%d",&card1);
                if(card1 >=1  && card1 <=30)//VALIDA O CARACTER DIGITADO
                {
                    if(vet[card1-1] !=0)
                    {
                        faceup(card1,vet);
                        ok=1;
                    }
                    else
                        {
                            ConsoleColor(4,15);
                            gotoxy(3,21);
                            printf("CARTA INVALIDA!");
                            PlaySound(TEXT("incorrect.wav"), NULL, SND_SYNC);
                            Sleep(3000);
                            gotoxy(4,15);
                            printf("                                     ");
                            ok=0;
                            }
                }
                else if(card1==0) //CASO O USUARIO QUEIRA SAIR NO MEIO DA PARTIDA
                {
                    ok=3;
                }
                else
                {
                    ConsoleColor(4,15);
                    gotoxy(3,21);
                    printf("CARTA INVALIDA!");
                    PlaySound(TEXT("incorrect.wav"), NULL, SND_SYNC);
                    Sleep(3000);
                    gotoxy(4,15);
                    printf("                                     ");
                    ok=0;
                }
            }
            if(ok==1)//VALIDA A ENTRADA DA CARTA 2  CASO O CARACTER DA CARTA1 1 FOR CONFIRMADO;
            {
                card2 = card1;
                while(card2 == card1) //VALIDA A ENTRADA PARA QUE A COORRDENADA SEJA DIFERENTE
                {

                    caixamenu2(1,14);
                    ConsoleColor(3,15);
                    gotoxy(3,16);
                    printf("                               ");
                    gotoxy(3,16);
                    printf("SEGUNDA CARTA >> ");//ESCOLHE A SEGUNDA CARTA
                    gotoxy(3,18);
                    printf("DIGITE O N%cMERO DA CARTA:    ",233);
                    gotoxy(3,19);
                    fflush(stdin);
                    scanf("%d",&card2);
                    if(card2 != card1 && card2 >=1 && card2 <=30)//VALIDA O CARACTER DIGITADO
                    {
                        if (vet[card2-1] !=0)
                        {
                            faceup(card2,vet);
                        }
                        else if (vet[card2-1] == 0)
                        {
                            ConsoleColor(4,15);
                            gotoxy(3,21);
                            printf("CARTA INVALIDA!");
                            PlaySound(TEXT("incorrect.wav"), NULL, SND_SYNC);
                            Sleep(3000);
                            gotoxy(4,15);
                            printf("                                     ");
                            card2 = card1;
                            }
                    }
                    else if(card2 == 0) //CASO O USUARIO QUEIRA SAIR NO MEIO DA PARTIDA
                    {
                        ok=3;
                    }
                    else
                    {
                        ConsoleColor(4,15);
                        gotoxy(3,21);
                        printf("DIGITE UMA CARTA DIFERENTE: ");
                        PlaySound(TEXT("incorrect.wav"), NULL, SND_SYNC);
                        Sleep(3000);
                        gotoxy(3,17);
                        printf("                                     ");
                        card2 = card1;
                    }
                }
                if(vet[card1-1] == vet[card2-1])//VALIDA OS ACERTOS
                {
                    ConsoleColor(1,15);
                    gotoxy(3,21);
                    printf("PAR ENCONTRADO");
                    PlaySound(TEXT("correct.wav"), NULL, SND_SYNC);
                    Sleep(1000);
                    gotoxy(4,16);
                    printf("                                  ");
                    pontos=pontos+3;
                    certo++;
                    tentativa++;
                    vet[card1-1]=0;
                    vet[card2-1]=0;
                }
                else if(vet[card1-1] != vet[card2-1])
                {
                    ConsoleColor(4,15);
                    gotoxy(3,21);
                    printf("PAR N%cO ENCONTRADO",199);
                    PlaySound(TEXT("incorrect.wav"), NULL, SND_SYNC);
                    Sleep(1000);
                    gotoxy(3,16);
                    printf("                           ");
                    erros++;
                    tentativa++;
                    pontos=pontos-1;
                    facedown(card1);
                    facedown(card2);
                }
            }
            if(certo == 15)
            {
                ok=3;
            }
        }//FIM DO JOGO
        system("cls");
        system("color 1F");
        printf("\n");
        printf("                                                       %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c   %c%c%c%c   %c%c%c         %c%c%c           %c%c%c%c%c%c%c%c%c%c%c%c%c%c     %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c              \n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
        printf("                                                       %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c   %c%c%c%c   %c%c%c%c       %c%c%c%c           %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c    %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c              \n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
        printf("                                                       %c%c%c                %c%c%c%c   %c%c%c%c%c%c   %c%c%c%c%c%c           %c%c%c          %c%c%c   %c%c%c                                     \n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
        printf("                                                       %c%c%c                %c%c%c%c   %c%c%c%c%c%c%c %c%c%c%c%c%c%c           %c%c%c          %c%c%c   %c%c%c                           \n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
        printf("                                                       %c%c%c                %c%c%c%c   %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c           %c%c%c          %c%c%c   %c%c%c                           \n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
        printf("                                                       %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c    %c%c%c%c   %c%c%c  %c%c%c%c%c  %c%c%c           %c%c%c          %c%c%c   %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c              \n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
        printf("                                                       %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c    %c%c%c%c   %c%c%c   %c%c%c   %c%c%c           %c%c%c          %c%c%c   %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c              \n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
        printf("                                                       %c%c%c                %c%c%c%c   %c%c%c         %c%c%c           %c%c%c          %c%c%c   %c%c%c                              \n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
        printf("                                                       %c%c%c                %c%c%c%c   %c%c%c         %c%c%c           %c%c%c          %c%c%c   %c%c%c                           \n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
        printf("                                                       %c%c%c                %c%c%c%c   %c%c%c         %c%c%c           %c%c%c          %c%c%c   %c%c%c                           \n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
        printf("                                                       %c%c%c                %c%c%c%c   %c%c%c         %c%c%c           %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c    %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c              \n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
        printf("                                                       %c%c%c                %c%c%c%c   %c%c%c         %c%c%c           %c%c%c%c%c%c%c%c%c%c%c%c%c%c     %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c              \n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
        printf("\n");

        printf("                                                                           %c%c%c     %c%c%c%c%c%c%c%c%c%c%c%c       %c%c%c%c%c%c%c%c%c%c%c%c       %c%c%c%c%c%c%c%c%c%c%c                                \n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
        printf("                                                                           %c%c%c   %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c   %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c   %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c                             \n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
        printf("                                                                           %c%c%c   %c%c%c          %c%c%c   %c%c%c                %c%c%c          %c%c%c                             \n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
        printf("                                                                           %c%c%c   %c%c%c          %c%c%c   %c%c%c                %c%c%c          %c%c%c                             \n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
        printf("                                                                           %c%c%c   %c%c%c          %c%c%c   %c%c%c                %c%c%c          %c%c%c                             \n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
        printf("                                                                           %c%c%c   %c%c%c          %c%c%c   %c%c%c                %c%c%c          %c%c%c                             \n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
        printf("                                                                           %c%c%c   %c%c%c          %c%c%c   %c%c%c    %c%c%c%c%c%c%c%c%c   %c%c%c          %c%c%c                             \n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
        printf("                                                                           %c%c%c   %c%c%c          %c%c%c   %c%c%c    %c%c%c%c%c%c%c%c%c   %c%c%c          %c%c%c                             \n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
        printf("                                                                           %c%c%c   %c%c%c          %c%c%c   %c%c%c          %c%c%c   %c%c%c          %c%c%c                             \n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
        printf("                                                              %c%c%c          %c%c%c   %c%c%c          %c%c%c   %c%c%c          %c%c%c   %c%c%c          %c%c%c                             \n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
        printf("                                                               %c%c%c%c%c%c%c%c%c%c%c%c%c%c    %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c   %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c   %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c                             \n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
        printf("                                                                 %c%c%c%c%c%c%c%c%c%c%c%c       %c%c%c%c%c%c%c%c%c%c%c%c       %c%c%c%c%c%c%c%c%c%c%c%c       %c%c%c%c%c%c%c%c%c%c%c%c                               \n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
        printf("\n\n");

        caixamenu(83,30);
        gotoxy(88,32);
        printf("TENTATIVAS | %d",tentativa);
        gotoxy(88,34);
        printf("ACERTOS    | %d",certo);
        gotoxy(88,36);
        printf("ERROS      | %d",erros);
        gotoxy(88,38);
        printf("PONTU%c%cO   | %d",128,199,pontos);

        ok=0;
        while(ok==0)
        {
            printf("\n");
            gotoxy(83,41);
            ConsoleColor(1,15);
            printf("DESEJA JOGAR NOVAMENTE? S/N: ");//OPCAO PARA CONTINUAR OU SAIR
            fflush(stdin);
            scanf("%c",&sair);
            sair=toupper(sair);
            if(sair =='S' || sair =='N')
            {
                system("cls");
                ok=1;
            }
            else
            {
                system("cls");
                ok=0;
            }
        }
    }
    while(sair !='N' );//CONDICAO PARA ENCERRAR A PARTIDA
     PlaySound("ruins_loop.wav", NULL, SND_FILENAME | SND_NODEFAULT | SND_ASYNC | SND_LOOP);
}
int main()
{
    //ABRE O JOGO EM TELA CHEIA //KLEBER
    keybd_event(VK_MENU  , 0x36, 0, 0);
    keybd_event(VK_RETURN, 0x1C, 0, 0);
    keybd_event(VK_RETURN, 0x1C, KEYEVENTF_KEYUP, 0);
    keybd_event(VK_MENU  , 0x38, KEYEVENTF_KEYUP, 0);

    menu();

    return 0;
}
