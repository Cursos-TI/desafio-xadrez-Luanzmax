#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

//Usando as recursividades para montar as peças separadamente
//Primeiro a Torre

void moverTorre(int casaTorre) {

    if (casaTorre > 0) {
        printf("Torre: Direita\n", casaTorre);
        moverTorre(casaTorre - 1);
    }
}

//Montando a recursividade da Rainha

void moverRainha(int casaRainha) {

    if (casaRainha > 0) {
        printf("Rainha: Esquerda\n", casaRainha);
        moverRainha(casaRainha - 1);
    }
}

//Montando a Recursividade do Bispo

void moveBispo (int casaBispo) {

    if (casaBispo > 0) {//Usando Ifs mesmo porque foi algo mais simples que teve e funcionando 
        if (casaBispo > 0) {
            printf("Bispo: Cima\n");
        }
        moveBispo(casaBispo - 1);
        printf("Bispo: Direita\n");
    }
}

int main() {

    //Montando as variáveis e alguns com números exatos para a recursividade
   int bispo = 5;
    int torre = 5;
    int rainha = 8;
    int casaCavalo2;
    int casaCavalo1;
    
    //Usando estruturas aninhadas para mover o cavalo em L.
    printf("Movimento do Cavalo!\n");

for ( casaCavalo2 = 0; casaCavalo2 < 1 ; casaCavalo2++) //Preferi fazer em for, e não coloquei muitas variáveis
    {
       for (casaCavalo1 = 0; casaCavalo1 < 2; casaCavalo1++) //Loop Interno
       {
        printf("Cavalo: Cima\n");
       }
       printf("Cavalo: Direita\n");
    }
    
    //Mostrando os resultados da recursividade

    printf("---------------------\n"); //Espaço para os resultados

    printf("Movimento do Bispo!\n");
    moveBispo(bispo);

    printf("---------------------\n");

    printf("Movimento da Torre!\n");
    moverTorre(torre);

    printf("---------------------\n");

    printf("Movimento da Rainha!\n");
    moverRainha(rainha);

    
    return 0;
}
