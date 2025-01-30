#include <stdio.h>

// Desafio de Xadrez - MateCheck

int main() {

    // Variáveis ----------------------------------

    int CasasBispo;
    int CasasTorre;
    int CasasRainha;
    int CasasCavalo;

    // Início do código -----------------------------

 // Movimentos do Bispo ------------------------------

    printf("Digite por favor o número de movimentos do Bispo!\n");
    scanf("%d",&CasasBispo);
    for (int Movimento = 0;Movimento < CasasBispo; Movimento++)
    {
        printf("Direita!\n");
        printf("Cima!\n");

    }
    printf("\n");

    // Movimentos da Torre ------------------------------
   
    printf("Digite por favor o número de movimentos da Torre!\n");
    scanf("%d",&CasasTorre);
    for (int Movimento = 0;Movimento < CasasTorre; Movimento++)
    {
        printf("Direita!\n");
    }
    printf("\n");

    // Movimentos da Rainha ------------------------------
   
    printf("Digite por favor o número de movimentos da Rainha!\n");
    scanf("%d",&CasasRainha);
    for (int Movimento = 0;Movimento < CasasRainha; Movimento++)
    {
        printf("Esquerda!\n");
    }
    printf(" \n");

    // Movimentos do Cavalo ------------------------------
   
    printf("Digite por favor o número de movimentos do Cavalo!\n");
    scanf("%d",&CasasCavalo);
    for (int Movimento = 0;Movimento < CasasCavalo; Movimento++)
    {
        int MovimentoDuplo = 2;
        while (MovimentoDuplo > 0)
        {
          printf("Baixo!\n");
          MovimentoDuplo--;
        }
        printf("Esquerda!\n");
        MovimentoDuplo = 2;
    }
   
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
