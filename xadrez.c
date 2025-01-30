#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int CasasBispo;
    int CasasTorre;
    int CasasRainha;

    printf("Digite por favor o número de movimentos do Bispo!\n");
    scanf("%d",&CasasBispo);
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    for (int Movimento = 0;Movimento < CasasBispo; Movimento++)
    {
        printf("Direita!\n");
        printf("Cima!\n");

    }
   
    printf("\n");

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("Digite por favor o número de movimentos da Torre!\n");
    scanf("%d",&CasasTorre);
    for (int Movimento = 0;Movimento < CasasTorre; Movimento++)
    {
        printf("Direita!\n");
    }
        printf("\n");

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("Digite por favor o número de movimentos da Rainha!\n");
    scanf("%d",&CasasRainha);
    for (int Movimento = 0;Movimento < CasasRainha; Movimento++)
    {
        printf("Esquerda!\n");
    }
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
