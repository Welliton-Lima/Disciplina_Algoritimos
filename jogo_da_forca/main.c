#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <windows.h>
#include <time.h>
#include <string.h>

void gotoxy(int x, int y) // PARA COLOCAR PRINTS NO LOCAL DESEJADO
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void menu()
{
    char continuar;
    do{
    char jogar_novamente='N';


        system("cls");
        jogar_novamente='N';
        inicio();
        int acertou=0;

        int ira=0;
        opcao(&ira);
        do
        {

            continuar= ' ';
        int erros=0;
            int aleatorio;
            char Palavra[26], Dica[26],Dica_MAIOR[26];
            char img[26];

            int i, i2, conterro=0; // contadores
            int len; // total letras
            char chute = ' '; //letra q a pessoa digitar
            char acerto = 'N' , tem = 'N' ;
            int tentativas = 0; //numero de tentativas (erros)
            int prim=1; //se é a primeira vez que o prog executa

     switch(ira){
        case 1:         // JOGAR <==============================================================    OLHAR VARIAVEIS!!

            Aleatorio(&aleatorio);                         //numero aleatorio
            Banco_palavra(Palavra, aleatorio);            //palavra aleatoria
            Banco_dica(Dica, aleatorio);                 //dica da palavra aleatoria
            Banco_dica_melhor(Dica_MAIOR,aleatorio);    // dica melhor da palavra aleatoria

    system("cls");

    len= strlen(Palavra);

    gotoxy(28,20); // local onde vai ter os _ _ _ _ _ ....
    for(i = 0; i < len; i++)//gera os underlines para esconder a palavra
    {
        img[i] = '_';
        printf("%c ",img[i]);
    }
    gotoxy(30+2*len,20); printf("(%d)",len); // printa quantidade de letras
    gotoxy(40,15); printf("DICA = %s",Dica); // printa dica

    forca(erros);


    while( erros < 6 && acerto == 'N') // CONDIÇÃO DE REPETIR ATE A PESSOA ACERTAR A PALAVRA OU ERRAR ATE COMPLETAR O CORPO
    {
       if(prim!= 1){ //para nao executar isso na primeira vez do prog
        tem = 'N';
        gotoxy(28,20);
        for(i = 0 ; i < len ; i++){ // printa o chute no lugar certo

            if(Palavra[i]== chute){ // para descobrir qunado tem a letra digitada
                img[i] = Palavra[i];
                tem = 'S';
            }

            printf("%c ",img[i]);
        }
        gotoxy(30+2*len,20); printf("(%d)",len); // printa quantidade de letras
        gotoxy(40,15); printf("DICA = %s",Dica); // printa a dica

        if(tentativas==4){
        gotoxy(40,16); printf("DICA MELHOR = %s",Dica_MAIOR); // printa uma dica melhor
        }

        if(tem == 'N'){ //quando nao tem a letra digitada
               tentativas++;
                conterro++;
                    switch(conterro){        // LOCAL ONDE É PIRNTADO A LETRA ERRADA
                    case 1:
                    gotoxy(59,13);      printf("%c",chute);
                    break;
                    case 2:
                    gotoxy(61,13);     printf("%c",chute);
                    break;
                    case 3:
                    gotoxy(63,13);     printf("%c",chute);
                    break;
                    case 4:
                    gotoxy(65,13);     printf("%c",chute);
                    break;
                    case 5:
                    gotoxy(67,13);     printf("%c",chute);
                    break;
                    default:
                      gotoxy(69,13);   printf("%c",chute);
                    }

            erros++;
        }
       }
       prim++;
       for(i = 0,i2=0; i < len; i++) // condição para sair do laço quando o jogador acertar a palavra
        {
            if(img[i] != '_')
            {
                i2++;
                if(i2 == len)
                {
                    acerto = 'S';
                }
            }
        }
 if (acerto != 'S' && erros < 6){
        gotoxy(7,22); printf("                     ");
        gotoxy(40,8); printf("PONTOS -> %d",acertou);
        gotoxy(40,5);    printf("Ainda tem %d tentativas\n\n",6-erros);
        gotoxy(40,12);   printf("LETRAS ERRADAS     v v v v v v");
        forca(erros);
        gotoxy(3,20);
        printf("\n\nDigite uma Letra : ");
        fflush(stdin);
        scanf("%c", &chute);

        chute = toupper(chute); // para sempre ficar letra maiuscula

 }

    } // fim do jogo
    if(acerto == 'S') // caso jogador ganhe
    {

        for(i=1; i<=5; i++) //Para animar o boneco quando o jogador ganhou a partida
        {
            boneco1();
            Sleep(250);
            boneco2();
            Sleep(250);
            boneco3();
            Sleep(250);
        }
        acertou++; //CONTADOR DE QUANTIDADE DE PALAVRAS ACERTADAS


    }

    else if (acerto == 'N'){  //caso jogador perca
        system("cls");
        forca(erros);
        gotoxy(30,7); printf("VOCE PERDEU!!");
        gotoxy(30,10); printf("A PALAVRA ERA %s",Palavra);
        gotoxy(30,13); printf("ERROWWWWW HAHAHAHAHAHAHAHAH ");
        gotoxy(30,15); printf("NAO DESANIME! JOGUE NOVAMENTE!");
        acertou--; //CONTADOR DE QUANTIDADE DE PALAVRAS ERRADAS (TIRA NUMERO DOS ACERTOS)

    }
        gotoxy(30,16);
        printf("Deseja jogar novamente <S/N> ");
        fflush(stdin);
        scanf("%c",&jogar_novamente);
        jogar_novamente = toupper(jogar_novamente);


    break;
        case 2:                    // INTRUÇOES <=========================================================================
            system("cls");
            gotoxy(5,5); printf("ORIENTACOES: \n\n 1- O JOGADOR DEVE ACERTAR A PALAVRA ESCONDIDA DIGITANDO UMA LETRA POR VEZ.\n\n 2- UMA DICA SERA DISPONIBILIZADA ACIMA PARA CADA PALAVRA.\n\n 3- ASSIM QUE RESTAR APENAS UMA CHANCE,\n UMA DICA MAIS EXPECIFICA SERA EXIBIDA NA TELA.\n\n 4- O OBJETIVO E ACERTA O MAIOR NUMERO DE PALAVRAS.\n\n 5- DEVEM SER DIGITADOS APENAS LETRAS, QUALQUER OUTRO CARACTER UTILIZADO\n SERA CONTADO COMO ERRO, E O JOGADOR PERDERA UMA   TENTATIVA.");
            gotoxy(18,22);   system("pause");
            break;
        case 3:                    // desenvolvedores <====================================================
            system("cls");
            gotoxy(5,5); printf("Desenvolvido por : \n\t\t\t Lucas Stofella\n\t\t\t\t&\n\t\t\t  Welliton Lima \n\n\n\t\t\tTRABALHO DE PROG 1\n\n\t\t\t       2017\n\n");
             gotoxy(18,18);   system("pause");
            break;

        case 4:                 // sair <============================
            continuar = 'S';
            break;
    default:                    //caso tenha digitado qualquer coisa <==================
    gotoxy(20,20);    printf("errooowww \n\n");
    }

        //system("cls");

        }while(jogar_novamente == 'S'); //CASO O JOGADOR QUEIRA JOGAR NOVAMENTE
    }while(continuar != 'S'); //CASO O JOGADOR QUEIRA SAIR DO PROGRAMA

}                                     //   <============ olhar
void forca(int erros){  // forca quando errar

switch(erros){

        case 0: //printa a forca

        gotoxy(1,5);    printf("\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
        gotoxy(1,6);     printf("\t%c%c\t       %c",219,219,219);
        gotoxy(1,7);    printf("\t%c%c\t     %c%c%c%c%c",219,219,220,219,219,219,220);
        gotoxy(1,8);    printf("\t%c%c",219,219);
        gotoxy(1,9);    printf("\t%c%c",219,219);
        gotoxy(1,10);    printf("\t%c%c",219,219);
        gotoxy(1,11);    printf("\t%c%c",219,219);
        gotoxy(1,12);    printf("\t%c%c",219,219);
        gotoxy(1,13);    printf("\t%c%c",219,219);
        gotoxy(1,14);    printf("\t%c%c",219,219);
        gotoxy(1,15);    printf("\t%c%c",219,219);
        gotoxy(1,16);    printf("\t%c%c",219,219);
        gotoxy(1,17);    printf("\t%c%c",219,219);
        gotoxy(1,18);    printf("\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,220);

        break;
           case 1: //printa a cabeça


        gotoxy(1,8);    printf("\t%c%c\t     %c%c%c%c%c",219,219,218,196,196,196,191);
        gotoxy(1,9);    printf("\t%c%c\t     %cx x%c",219,219,179,179);
        gotoxy(1,10);    printf("\t%c%c\t     %c%c%c%c%c",219,219,192,196,196,196,217);

        break;
            case 2: //printa corpo

        gotoxy(1,11);    printf("\t%c%c\t       %c",219,219,179);
        gotoxy(1,12);    printf("\t%c%c\t       %c",219,219,179);
        gotoxy(1,13);    printf("\t%c%c\t       %c",219,219,179);

        break;
            case 3: //printa braço e corpo


        gotoxy(1,11);    printf("\t%c%c\t      /%c",219,219,179);
        gotoxy(1,12);    printf("\t%c%c\t     / %c",219,219,179);
        gotoxy(1,13);    printf("\t%c%c\t       %c",219,219,179);

        break;
            case 4: // printa braços e corpo


        gotoxy(1,11);    printf("\t%c%c\t      /%c\\",219,219,179);
        gotoxy(1,12);    printf("\t%c%c\t     / %c \\",219,219,179);
        gotoxy(1,13);    printf("\t%c%c\t       %c",219,219,179);

        break;
            case 5:  //printa perna


       gotoxy(1,14);     printf("\t%c%c\t      /",219,219);
       gotoxy(1,15);     printf("\t%c%c\t     /",219,219);

        break;
            case 6: //PRINTA TUDO QUANDO A PESSOA PERDER

      gotoxy(1,5);      printf("\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
      gotoxy(1,6);      printf("\t%c%c\t       %c",219,219,219);
      gotoxy(1,7);      printf("\t%c%c\t     %c%c%c%c%c",219,219,220,219,219,219,220);
      gotoxy(1,8);      printf("\t%c%c\t     %c%c%c%c%c",219,219,218,196,196,196,191);
      gotoxy(1,9);      printf("\t%c%c\t     %cx x%c",219,219,179,179);
      gotoxy(1,10);      printf("\t%c%c\t     %c%c%c%c%c",219,219,192,196,196,196,217);
      gotoxy(1,11);      printf("\t%c%c\t      /%c\\",219,219,179);
      gotoxy(1,12);      printf("\t%c%c\t     / %c \\",219,219,179);
      gotoxy(1,13);      printf("\t%c%c\t       %c",219,219,179);
      gotoxy(1,14);      printf("\t%c%c\t      / \\",219,219);
      gotoxy(1,15);      printf("\t%c%c\t     /   \\",219,219);
      gotoxy(1,16);      printf("\t%c%c",219,219);
      gotoxy(1,17);      printf("\t%c%c",219,219);
      gotoxy(1,18);      printf("\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,220);

        break;
}
}

void Aleatorio(int *aleatorio)            //NUMERO ALEATORIO PARA PEGAR A PALAVRA E A DICA NO BANCO DE DADOS
{
    srand(time(NULL));
    *aleatorio = rand() % 30;
}

int Banco_palavra(char Palavra[26], int aleatorio)   // PEGA A PALAVRA ALEATORIA
{
    char Banco[30][26]=  // BANCO DE PALAVRAS
    {
        "CASA",
        "JABUTICABA",
        "TAMANDUA",
        "TRAFICANTE",
        "ZUMBI",
        "OTORRINOLARINGOLOGISTA",
        "SENTIDO",
        "GULOSEIMA",
        "MICROCHIP",
        "ENGENHARIA",
        "HARDWARE",
        "VAMPIRO",
        "FORJAR",
        "POKEMON",
        "MATRIX",
        "OKTOBERFEST",
        "MAQUIAGEM",
        "RECORD",
        "SMARTPHONE",
        "CICATRIZES",
        "DEMOCRACIA",
        "COLISEU",
        "BORBOLETA",
        "GAMECUBE",
        "DREAMCAST",
        "GABINETE",
        "ANALOGICO",
        "MUTANTE",
        "POLEGADA",
        "BAROMETRO",
        };

    int i;

    for(i=0 ; i<26 ; i++)     //PEGA A PALAVRA ALEATORIA;
    {
        Palavra[i] = Banco[aleatorio][i];
    }
    //printf("\nTO NA FUNCAO %s\n\n", Palavra);

    return Palavra;

}
int Banco_dica(char DICA[26], int aleatorio)     //PEGA A DICA INICIAL ALEATORIAMENTE
{
    char Dicas[30][26]=  //BANDO DE DICAS
    {
        "CONSTRUCAO",
        "FRUTA",
        "ANIMAL",
        "CUIDA DA BOCA",
        "TA MORTO",
        "ESPECIALISTA EM DOENCAS",
        "RUMO",
        "DOCE",
        "MUITO PEQUENO",
        "PROJETO",
        "FISICO",
        "TREVRAS",
        "AQUECER",
        "JOGO",
        "FILME",
        "FESTA",
        "ESCONDE",
        "PERFORMANCE",
        "COMPUTADOR",
        "MARCA",
        "GRECIA",
        "ANFITEATRO",
        "INSETO",
        "CONSOLE",
        "VIDEO GAME",
        "ESCRITORIO",
        "TV",
        "GENE X",
        "UNIDADE DE MEDIDA",
        "INSTRUMENTO DE MEDIDA",
    };

    int i;

    for(i=0 ; i<26 ; i++)     //PEGA A DICA ALEATORIO;
    {
        DICA[i] = Dicas[aleatorio][i];
    }
    //printf("\nTO NA FUNCAO %s\n\n", DICA);

    return DICA;
}
int Banco_dica_melhor(char MELHOR[26],int aleatorio){   // PEGA A DICA MELHOR ALEATORIAMENTE
    char Dicas_melhor[30][26]=  //BANDO DE DICAS MELHORES
    {
        "MORADIA",
        "DAQUI A POUCO ACABA",
        "OLHA O TAMANHO DO >>A",
        "CRIMINOSO",
        "TA VIVO",
        "OUVIDO E GARGANTA",
        "INDICA UMA ROTA",
        "BALINHA",
        "COMPONENTE ELETRONICO",
        "PROGRESSO",
        "MATERIAL",
        "MORCEGO",
        "CONSTRUIR",
        "CAPTURAR",
        "MUNDO VIRTUAL",
        "ORIGINAL DA ALEMANHA",
        "MAQUEIA",
        "GUINNESS BOOK",
        "TELEFONE",
        "CURA COM O TEMPO",
        "FORMA DE GOVERNO",
        "GLADIADORES",
        "POSSUI ASAS",
        "NINTENDO",
        "SEGA",
        "CONTEM A PLACA MAE",
        "CONTROLE DO PLAYSTATION",
        "MARVEL",
        "DEDO",
        "ESTÁ SENTIDO A PRESSAO",
    };

    int i;

    for(i=0 ; i<26 ; i++)     //PEGA A DICA MELHOR ALEATORIA;
    {
        MELHOR[i] = Dicas_melhor[aleatorio][i];
    }

    return MELHOR;

}

void boneco1(){  // --
system("cls");
gotoxy(2,2);    printf("\n\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
gotoxy(2,3);    printf("\n\t%c%c\t       %c",219,219,219);
gotoxy(2,4);    printf("\n\t%c%c\t     %c%c%c%c%c",219,219,220,219,219,219,220);
gotoxy(2,5);    printf("\n\t%c%c",219,219);
gotoxy(2,6);    printf("\n\t%c%c",219,219);
gotoxy(2,7);    printf("\n\t%c%c",219,219);
gotoxy(2,8);    printf("\n\t%c%c\t     %c%c%c%c%c                   VOCE GANHOU O JOGO!!",219,219,218,196,196,196,191);
gotoxy(2,9);    printf("\n\t%c%c\t     %co o%c",219,219,179,179);
gotoxy(2,10);    printf("\n\t%c%c\t     %c%c%c%c%c",219,219,192,196,196,196,217);
gotoxy(2,11);    printf("\n\t%c%c\t      /%c\\",219,219,179);
gotoxy(2,12);    printf("\n\t%c%c\t     / %c \\",219,219,179);
gotoxy(2,13);   printf("\n\t%c%c\t       %c",219,219,179);
gotoxy(2,14);   printf("\n\t%c%c\t      / \\",219,219);
gotoxy(2,15);   printf("\n\t%c%c\t     /   \\",219,219);
gotoxy(2,16);   printf("\n       %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,220);

}

void boneco2(){  // ----
system("cls");
gotoxy(2,2);    printf("\n\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
gotoxy(2,3);    printf("\n\t%c%c\t       %c",219,219,219);
gotoxy(2,4);    printf("\n\t%c%c\t     %c%c%c%c%c",219,219,220,219,219,219,220);
gotoxy(2,5);    printf("\n\t%c%c",219,219);
gotoxy(2,6);    printf("\n\t%c%c",219,219);
gotoxy(2,7);    printf("\n\t%c%c\t     %c%c%c%c%c",219,219,218,196,196,196,191);
gotoxy(2,8);    printf("\n\t%c%c\t     %c- -%c                   VOCE GANHOU O JOGO!!",219,219,179,179);
gotoxy(2,9);    printf("\n\t%c%c\t     %c%c%c%c%c",219,219,192,196,196,196,217);
gotoxy(2,10);    printf("\n\t%c%c\t    ---%c---",219,219,179);
gotoxy(2,11);    printf("\n\t%c%c\t       %c ",219,219,179);
gotoxy(2,12);   printf("\n\t%c%c\t       %c",219,219,179);
gotoxy(2,13);   printf("\n\t%c%c\t      / \\",219,219);
gotoxy(2,14);   printf("\n\t%c%c\t     /   \\",219,219);
gotoxy(2,15);    printf("\n\t%c%c",219,219);
gotoxy(2,16);   printf("\n       %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,220);

}

void boneco3(){  //  ------ caso o jogador ganhar
system("cls");
gotoxy(2,2);    printf("\n\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
gotoxy(2,3);    printf("\n\t%c%c\t       %c",219,219,219);
gotoxy(2,4);    printf("\n\t%c%c\t     %c%c%c%c%c",219,219,220,219,219,219,220);
gotoxy(2,5);   printf("\n\t%c%c",219,219);
gotoxy(2,6);    printf("\n\t%c%c\t     %c%c%c%c%c",219,219,218,196,196,196,191);
gotoxy(2,7);    printf("\n\t%c%c\t     %co o%c",219,219,179,179);
gotoxy(2,8);    printf("\n\t%c%c\t    \\%c%c%c%c%c/                  VOCE GANHOU O JOGO!!",219,219,192,196,196,196,217);
gotoxy(2,9);    printf("\n\t%c%c\t      \\%c/",219,219,179);
gotoxy(2,10);    printf("\n\t%c%c\t       %c ",219,219,179);
gotoxy(2,11);   printf("\n\t%c%c\t       %c",219,219,179);
gotoxy(2,12);   printf("\n\t%c%c\t      / \\",219,219);
gotoxy(2,13);   printf("\n\t%c%c\t     /   \\",219,219);
gotoxy(2,14);   printf("\n\t%c%c",219,219);
gotoxy(2,15);   printf("\n\t%c%c",219,219);
gotoxy(2,16);   printf("\n       %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,220);

}

void inicio(){ // printa forca no inicio do prog
    gotoxy(1,1); printf(" %c%c%c%c  %c%c%c%c  %c%c%c%c  %c%c%c%c",220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220);
    gotoxy(1,2); printf("  %c    %c  %c  %c %c%c  %c  %c",219,219,219,219,220,220,219,219);
    gotoxy(1,3); printf(" %c%c    %c%c%c%c  %c%c%c%c  %c%c%c%c",220,219,219,220,220,219,219,220,220,219,219,220,220,219);

    gotoxy(28,1); printf("%c%c%c   %c%c%c%c",220,220,220,220,220,220,220);
    gotoxy(28,2); printf("%c  %c  %c%c%c%c",219,219,219,220,220,219);
    gotoxy(28,3); printf("%c%c%c%c  %c  %c",219,220,220,223,219,219);

    gotoxy(42,1); printf("%c%c%c%c  %c%c%c%c  %c%c%c   %c%c%c%c  %c%c%c%c",220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220);
    gotoxy(42,2); printf("%c%c%c   %c  %c  %c%c%c%c  %c     %c%c%c%c",219,220,220,219,219,219,220,220,223,219,219,220,220,219);
    gotoxy(42,3); printf("%c     %c%c%c%c  %c  %c  %c%c%c%c  %c  %c",219,219,220,220,219,219,219,219,220,220,220,219,219);

    gotoxy(1,5);    printf("\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219);
    gotoxy(1,6);    printf("\t%c%c\t       %c",219,219,219);
    gotoxy(1,7);    printf("\t%c%c\t     %c%c%c%c%c",219,219,220,219,219,219,220);
    gotoxy(1,8);    printf("\t%c%c\t     %c%c%c%c%c",219,219,218,196,196,196,191);
    gotoxy(1,9);    printf("\t%c%c\t     %cx x%c",219,219,179,179);
    gotoxy(1,10);    printf("\t%c%c\t     %c%c%c%c%c",219,219,192,196,196,196,217);
    gotoxy(1,11);    printf("\t%c%c\t      /%c\\",219,219,179);
    gotoxy(1,12);    printf("\t%c%c\t     / %c \\",219,219,179);
    gotoxy(1,13);    printf("\t%c%c\t       %c",219,219,179);
    gotoxy(1,14);    printf("\t%c%c\t      / \\",219,219);
    gotoxy(1,15);    printf("\t%c%c\t     /   \\",219,219);
    gotoxy(1,16);    printf("\t%c%c",219,219);
    gotoxy(1,17);    printf("\t%c%c",219,219);
    gotoxy(1,18);    printf("\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,219,220);

    gotoxy(38,22); printf("2017");
}

void opcao(int *ir){  //qual opcao o jogador quer entrar
    gotoxy(35,9); printf("  %c OP%cOES %c",175,128,174);
    gotoxy(35,11); printf("1 - JOGAR");
    gotoxy(35,12); printf("2 - INSTRUCOES");
    gotoxy(35,13); printf("3 - DESENVOLVEDORES");
    gotoxy(35,14); printf("4 - SAIR");
    gotoxy(30,16); printf("QUAL SUA ESCOLHA -> ");
    fflush(stdin);
    scanf("%d",ir);
}


int main()
{
    menu();

    return 0;
}
