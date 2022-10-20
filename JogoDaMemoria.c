 #include <stdio.h>
#include <locale.h> //Acentos no codigo;
#include <string.h> //Controle de strings;
#include <conio.h> //utiliza o getch, getche e getchar;
#include <stdlib.h> //auxiliar em cores
#include <time.h> //Para usar o sleep e funcao clock

//PROTOTIPOS*******
void EsperaEnter();
void MenuRegras();
void MenuInicio(); //DECLARAÇÃO DOS PROTOTIPOS;
void jogar();
void pontuacoes();
void jogodamemoria();
void fimjogo();
void nomes();

//***************************
int acertos=6, pontuacao[50], cont2=0, totpartidas=0;
char jogador[50][10]; //variavel guarda nomes;
int i, j; //controlar na funcao jogo da memoria;


int main() {

setlocale(LC_ALL, "Portuguese");

system("Color 3"); //utilizacao de cores
system("cls");

    printf("\n\n");
    printf("****************************************************************************************************************\n");
    printf("                               _________   __________   _________   __________                                  \n");
    printf("                              |______   | |   ____   | |   ______| |   ____   |                                 \n");
    printf("                                     |  | |  |    |  | |  |        |  |    |  |                                 \n");
    printf("                              _____  |  | |  |    |  | |  |  _____ |  |    |  |                                 \n");
    printf("                              |  |   |  | |  |    |  | |  |  |_  | |  |    |  |                                 \n");
    printf("                              |  |___|  | |  |____|  | |  |___|  | |  |____|  |                                 \n");
    printf("                              |_________| |__________| |_________| |__________|                                 \n");
    printf("                                         ____________    ____________                                           \n");
    printf("                                        |   ______   |  |    ____    |                                          \n");
    printf("                                        |  |      |   | |   |    |   |                                          \n");
    printf("                                        |  |       |  | |   |____|   |                                          \n");
    printf("                                        |  |       |  | |    ____    |                                          \n");
    printf("                                        |  |______/   | |   |    |   |                                          \n");
    printf("                                        |____________/  |___|    |___|                                          \n");
    printf(" ______________    __________    ______________    __________    _____________     ____________    ____________ \n");
    printf("|   __    __   |  |   _______|  |   __    __   |  |   ____   |  |   _______   |   |____    ____|  |    ____    |\n");
    printf("|  |  |  |  |  |  |  |          |  |  |  |  |  |  |  |    |  |  |  |       |  |        |  |       |   |    |   |\n");
    printf("|  |  |  |  |  |  |  |______    |  |  |  |  |  |  |  |    |  |  |  |_______| /         |  |       |   |____|   |\n");
    printf("|  |  |__|  |  |  |   ______|   |  |  |__|  |  |  |  |    |  |  |   ______   |         |  |       |    ____    |\n");
    printf("|  |        |  |  |  |          |  |        |  |  |  |    |  |  |  |      |   |        |  |       |   |    |   |\n");
    printf("|  |        |  |  |  |_______   |  |        |  |  |  |____|  |  |  |       |   |   ____|  |____   |   |    |   |\n");
    printf("|__|        |__|  |__________|  |__|        |__|  |__________|  |__|        |___| |____________|  |___|    |___|\n");
    printf("****************************************************************************************************************\n");
    printf("\n\n");

Sleep(2000); //espera uma pause de 2 segundos
MenuRegras(); //depois de enter, aparece aa regras do jogo
MenuInicio(); //depois de regras executa menu inicio;


system("pause"); //Usado para esperar o enter do usuario.
return 0;

}

void EsperaEnter(){ //Espera enter do usuario*/

    char  tecla; //declara para esperar a tecla ENTER
    printf("    PRESSIONE ENTER PARA CONTINUAR    \n");

    do{
        tecla = getch(); // Para coletar alguma tecla, é preferencialmente melhor usar "char", ao inves de "int"
        if (tecla !=13) // Se nao for ENTER
        {
            printf("DIGITE ENTER\n");
            tecla = getchar;
        }
    } while(tecla != 13); // 13 e' o codigo ASCII do ENTER

}

void MenuRegras(){ //Mostra as regras do jogo
    system("cls"); //limpa tela

int x; double y; //controlar for
    system("color 0B");
   char text1[]=    "\n\t\t\tO SISTEMA IRÁ GERAR 6 NUMEROS ALEATORIOS ATÉ 99\n";
   char text2[]=    "\n\t\t\tO JOGADOR TERÁ DE COLOCAR OS 6 NUMEROS EM ORDEM NO QUAL FORAM GERADOS\n";
   char text3[]=    "\n\t\t\tIRA SER CONCEBIDO AO JOGADOR 8 SEGUNDOS PARA MEMORIZAR OS NUMEROS\n";
   char text4[]=    "\n\t\t\tJOGADOR IRA COMEÇAR COM 6 PONTOS, A CADA ERRO PERDE 1 PONTO\n";
   char text5[]=    "\n\t\t\tJOGADOR PODERÁ JOGAR ATÉ 100 PARTIDAS SEGUIDAS, DEPOIS SUA PONTUACAO SERÁ REINICIADA\n";

    printf("\n\n");
    for(x=0; text1[x]!=NULL; x++)  //GERANDO A SEQUENCIA DE PALAVRAS PARA APARECER SUCESSIVAMENTE, MESMA OPERACAO ABAIXO.
   {
     printf("%c",text1[x]);
      for(y=0; y<=8888888; y++)
      {
      }
   }
   printf("\n\n");
    for(x=0; text2[x]!=NULL; x++)
   {
     printf("%c",text2[x]);
      for(y=0; y<=8888888; y++)
      {
      }
   }
   printf("\n\n");
    for(x=0; text3[x]!=NULL; x++)
   {
     printf("%c",text3[x]);
      for(y=0; y<=8888888; y++)
      {
      }
   }

   printf("\n\n");
    for(x=0; text4[x]!=NULL; x++)
   {
    printf("%c",text4[x]);
      for(y=0; y<=8888888; y++)
      {

      }
   }

   printf("\n\n");

   EsperaEnter();
}

void MenuInicio(){

 int menu_jogo, a;
 int x; double y; //controlar for
char text1[]=    "\n\t\t\tJOGO DESENVOLVIDO POR GUSTAVO SOZZI\n";

    system("color 0B"); //declaração de cor
    system("cls");
    printf("\n\n\n");
    printf("\n\t\t\t            ---------------------------------------------");
    printf("\n\t\t\t           |                                             |");
    printf("\n\t\t\t           |    [1]JOGAR  [2]PONTUAÇÕES   [3] ENCERRAR   |");
    printf("\n\t\t\t           |                                             |");
    printf("\n\t\t\t            ---------------------------------------------");
    printf("\n\t\t\t------------->>>ESCOLHA SUA OPÇÃO: ");
    scanf("%d", &menu_jogo);

    printf("\n");

    switch(menu_jogo) //verificando os desejos do jogador
{

case 1:
    system("cls");
    nomes(); //chama de volta
    break;
case 2:
    system("cls");
    pontuacoes(); //mostra as pontuacoes ate o momento jogado
    break;
case 3:    //encerra o programa e mostra as pontuacoes feitas ate o ultimo jogador
     system("cls");

    system("color 06");

    printf("<<<PROGRAMA ENCERRADO>>>");

        printf("\n");
        printf("-----------------------------\n");
        printf("|                            |\n");
        printf("|  |||OBRIGADO POR JOGAR!!|  |\n");
        printf("|                            |\n");
        printf("-----------------------------\n");
        Sleep(3000);
        system("cls");
        for(x=0; text1[x]!=NULL; x++)  //GERANDO A SEQUENCIA DE PALAVRAS PARA APARECER SUCESSIVAMENTE, MESMA OPERACAO ABAIXO.
        {
       printf("%c",text1[x]);
        for(y=0; y<=8888888; y++)
           {
           }
         }

        Sleep(3000);
        system("cls");
           if(totpartidas > 0){ //apenas executa se for > 0
            printf("\t\t\tAS PONTUAÇÕES FORAM DE------>>>\n\n");
            Sleep(1000);

            for(a=0; a<totpartidas; a++){
            printf("------------------------------------------\n");
            printf("|   JOGADOR: %s   | PONTUAÇÃO:  %d     |\n", jogador[a], pontuacao[a]);
            printf("----=-------------------------------------\n");
            }
        }
        else{
            printf("\n\n\t\t\tVOCÊ NAO JOGOU NENHUMA PARTIDA = (");
        }
        printf("\n\n");


    break;
default:
    printf("POR FAVOR INSIRA UMA OPÇÃO VÁLIDA!!");
    Sleep(2000); //aguarda 2 segundos para executar a proxima função
    system("cls");
    MenuInicio(); //chama de volta
}

}

void nomes() //entrada de nomes
{
    system("color 0B");

    printf("\n\n\t\t\t\tINFORME O SEU NOME: ");   // "\t serve para centralizar melhor a frase
    scanf("%s", &jogador[totpartidas]);

jogar(); //executa a proxima funcao com as escolhas do jogador

}

void jogar(){ //se jogador escolher "JOGAR", void jogodamemoria sera exibido;

    int num_gera[6]; //vetor para gerar os 6 numeros aleatorios;
    int op;

    system("cls");
    printf("\n\n\n");
    printf("\n\t\t\t------------------------------------------|");
    printf("\n\t\t\t|       |PRONTO PARA COMEÇAR?!            |");
    printf("\n\t\t\t|     [C] PARA COMEÇAR   [V] PARA VOLTAR  |");
    printf("\n\t\t\t-------------------------------------------");
    printf("\n\n");

op = getch(); //convertendo char para inteiro, e utilizando tabela ascii para verificar letras

if (op==67 || op== 99){  //se a opcao for C ou c, começa o jogo
    system("cls");
    printf("\n\n\n\t\t\tINICIANDO>>>");
    Sleep(2000);
    system("cls");
    jogodamemoria(); //jogo
}

else{
    if(op== 118 || op==86){ //se a opçao for V ou v volta para o menu incio
        system("cls");
        printf("VOLTANDO...");
        Sleep(2000);
        system("cls");
        MenuInicio();
    }
    else
        printf("<<<OPÇÃO INVÁLIDA, DIGITE UM COMANDO VÁLIDO>>>");
        Sleep(3000);
        system("cls");
        jogar();
}

}//TERMINA A FUNCAO DA ESCOLHA JOGAR

void jogodamemoria(){
    int  c=8, num[6], num2[6]; //variaveis para controlar o for e J para gerar numeros aleatorios para vetor

    srand(time(NULL)); //Gera numeros aleatorios;

    for(j=0; j<6; j++)
        {
            num[j] =  rand() % 99;
        }

for(i=8; i >= 0; i--)
{
                                       system("color 0B");
        printf("                      ------------------------------------------------\n");
        printf("                      |                                              |  \n");
        printf("                      |          MEMORIZE OS NUMEROS ABAIXO          |  \n");
        printf("                      |        -----------------------------         |  \n");
        printf("                      |                  TEMPO: [%d]                 |  \n", c);
        printf("                      |                                              |  \n");
        printf("                      ------------------------------------------------  \n");
        printf("\n");
        printf("                      ------------------------------------------------ ---\n");
        printf("                      | 1°[%d]   2°{%d}   3°{%d}   4°[%d]   5°[%d]  6°[%d]|\n", num[0], num[1], num[2], num[3], num[4], num[5]);
        printf("                      ----------------------------------------------- ----|\n");
        Sleep(1000);
        c--; //MOSTRA A CONTAGEM DO TEMPO

system("cls");

}

        printf("-----------------------------------------\n");
        printf("|                                        |\n");
        printf("|           DIGITE OS NUMEROS:           |\n");
        printf("|                                        |\n");
        printf("------------------------------------------\n");

        for(j=0; j<6; j++) //entrada dos numeros na sequencia
        {
            cont2++; //variavel para o numero nao ser comecado como 0 nao posicao printf//

            printf("DIGITE O %d° NUMERO: ", cont2);
            scanf("%d", &num2[j]); //guarda numeros em um vetor nas posições "aux";

           if(num2[j] != num[j]){
            acertos--; //sempre que errar, retira 1 ponto
        }

        }
pontuacao[totpartidas]=acertos; //armazena a pontuacao na partida jogada
totpartidas++; //incrementa partidas


if(acertos == 6){  //se acertar todas
    system("cls");
    printf("\t\t\t------------------------------------\n");
    printf("\t\t\t|          <<<ACERTOU>>>            |\n");
    printf("\t\t\t|                                   |\n");
    printf("\t\t\t|   [%d] [%d] [%d] [%d] [%d] [%d]   |\n",num[0], num[1], num[2], num[3], num[4], num[5]);
    printf("\t\t\t|                                   |\n");
    printf("\t\t\t-------------------------------------\n");
    printf("\t\t\t>>>PONTUAÇÃO LANÇADA AO PERFIL DE: %d PONTOS>>>\n", acertos);
    Sleep(2500);
    fimjogo();
}
else{ //se nao acertar todas
    system("cls");
    system("color 09");
    printf("\t\t\t------------------------------------\n");
    printf("\t\t\t|          <<<ERROU>>>              |\n");
    printf("\t\t\t|         OS NUMEROS ERAM:          |\n");
    printf("\t\t\t|   [%d] [%d] [%d] [%d] [%d] [%d]    |\n",num[0], num[1], num[2], num[3], num[4], num[5]);
    printf("\t\t\t|                                   |\n");
    printf("\t\t\t-------------------------------------\n");
    printf("\t\t\t>>>PONTUAÇÃO: %d", acertos);
    Sleep(3000);
    fimjogo(); //CHAMA A FUNÇÃO FIM JOGO
}

}


void fimjogo(){
    int a;
    int menu;
    int x; double y; //controlar for
    char text1[]=    "\n\t\t\tJOGO DESENVOLVIDO POR GUSTAVO SOZZI\n";

    system("cls");
    system("color 0B");

            printf(" ----------------------------------------------\n");
            printf("|                                             |\n");
            printf("| [1] JOGAR NOVAMENTE  [2] MENU  [3] ENCERRAR |\n");
            printf("|                                             |\n");
            printf(" ----------------------------------------------");
            printf("\nOPÇÃO: ");
            scanf("%d", &menu);

switch(menu)
{
case 1:
    system("cls");
    j=0; acertos=6; i=0; cont2=0;  //zera as respectivas variaveis globais para nao dar interferencia e erro no jogo, o mesmo abaixo
    nomes();
    break;

    case 2:
     system("cls");
     j=0; acertos=6; i=0; cont2=0;
     MenuInicio();
     break;
    case 3: //encerra programa
        system("cls");

    system("color 06");

    printf("<<<PROGRAMA ENCERRADO>>>");

        printf("\n");
        printf("-----------------------------\n");
        printf("|                            |\n");
        printf("|  |||OBRIGADO POR JOGAR!!|  |\n");
        printf("|                            |\n");
        printf("-----------------------------\n");
        Sleep(3000);
        system("cls");
        for(x=0; text1[x]!=NULL; x++)  //GERANDO A SEQUENCIA DE PALAVRAS PARA APARECER SUCESSIVAMENTE, MESMA OPERACAO ABAIXO.
        {
       printf("%c",text1[x]);
        for(y=0; y<=8888888; y++)
           {
           }
         }

        Sleep(3000);
        system("cls");
           if(totpartidas > 0){ //apenas executa se for > 0
            printf("\t\t\tAS PONTUAÇÕES FORAM DE------>>>\n\n");
            Sleep(1000);

            for(a=0; a<totpartidas; a++){
            printf("------------------------------------------\n");
            printf("|   JOGADOR: %s   | PONTUAÇÃO:  %d     |\n", jogador[a], pontuacao[a]);
            printf("----=-------------------------------------\n");
            }
        }
        else{
            printf("\n\n\t\t\tVOCÊ NAO JOGOU NENHUMA PARTIDA = (");
        }
        printf("\n\n");
        break;

    default:
        printf("<<POR FAVOR INSIRA UMA OPÇÃO VÁLIDA>>");
        Sleep(3000);
        j=0; acertos=6; i=0; cont2=0;
        system("cls");
        fimjogo();

}



}

void pontuacoes(){ //void pontuacoes


    int a, b;
    int x; double y;

    char text1[]=    "\n\t\t\t<<<VOCÊ AINDA NÃO JOGOU NENHUMA PARTIDA>>>\n";

    system("cls");

    printf("\n");
        if(totpartidas > 0){
            for(a=0; a<totpartidas; a++){
            printf("------------------------------------------\n");
            printf("| JOGADOR: %s   | PONTUAÇÃO:  %d     |\n", jogador[a], pontuacao[a]);
            printf("----=-------------------------------------\n");
        }
    }
            else{

                 for(x=0; text1[x]!=NULL; x++)  //GERANDO A SEQUENCIA DE PALAVRAS PARA APARECER SUCESSIVAMENTE, MESMA OPERACAO ABAIXO.
                {
                 printf("%c",text1[x]);
                 for(y=0; y<=8888888; y++)
                {
                }
                }

            }
            printf("\n\n");

    EsperaEnter();
    system("cls");
    MenuInicio();

}





