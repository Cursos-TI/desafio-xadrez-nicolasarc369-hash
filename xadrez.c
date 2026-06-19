#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int Torre = 1; int Bispo = 1; int Rainha = 1; int opcao;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Inicio do Menu
    printf(" *** Xadrez ***\n\n");
    printf("1. Iniciar\n");
    printf("2. Leia-me!\n");
    scanf("%d", &opcao);
    //fim do Menu

    //Inicio do Menu de peças
    switch (opcao){
    case 1:
        printf("*** Escolha Um Peça para iniciar o Movimento ***\n");
        printf("1. Torre\n");
        printf("2. Bispo\n");
        printf("3. Rainha\n");
        scanf("%d", &opcao);
    //fim do menu de peças

    //Menu de Direções
        switch (opcao){
            case 1: //Torre
                printf("Para onde quer mover sua torre?\n");
                printf("1. Direita\n");
                printf("2. Esquerda\n");
                printf("3. Cima\n");
                printf("4. Baixo\n");
                scanf("%d", &opcao);

                    //Direções
                    switch (opcao) {
                        case 1: //direita
                        printf("\nVocê moveu a Torre 5 casas para a Direita:\n");
                        for (Torre = 1; Torre <= 5; Torre++) {
                            printf("Passo %d: Torre moveu para a DIREITA\n", Torre);
                        }
                        printf("\nTorre completou 5 movimentos para a Direita!\n");
                        break;

                        case 2: //esquerda
                        printf("\nVocê moveu a Torre 5 casas para a Esquerda:\n");
                        for (Torre = 1; Torre <= 5; Torre++) {
                            printf("Passo %d: Torre moveu para a ESQUERDA\n", Torre);
                        }
                        printf("\nTorre completou 5 movimentos para a ESQUERDA!\n");
                        break;

                        case 3: //Cima
                        printf("\nVocê moveu a Torre 5 casas para a Cima:\n");
                        for (Torre = 1; Torre <= 5; Torre++) {
                            printf("Passo %d: Torre moveu para a CIMA\n", Torre);
                        }
                        printf("\nTorre completou 5 movimentos para a Cima!\n");
                        break;

                        case 4: //Baixo
                        printf("\nVocê moveu a Torre 5 casas para a Baixo:\n");
                        for (Torre = 1; Torre <= 5; Torre++) {
                            printf("Passo %d: Torre moveu para a Baixo\n", Torre);
                        }
                        printf("\nTorre completou 5 movimentos para a Baixo!\n");
                        break;

                        default:
                        printf("Opção inválida para direção da Torre!\n");
                        break;
                    }
                break;

            case 2: //Bispo
                printf("Para onde quer mover seu bispo?\n");
                printf("1. Diagonal Superior Direita\n");
                printf("2. Diagonal Superior Esquerda\n");
                printf("3. Diagonal Inferior Direita\n");
                printf("4. Diagonal Inferior Esquerda\n");
                scanf("%d", &opcao);

                    //Direções do Bispo
                    switch (opcao) {
                        case 1: //Diagonal Superior Direita
                        printf("\nVocê moveu o Bispo 5 casas na Diagonal Superior Direita:\n");
                        for (Bispo = 1; Bispo <= 5; Bispo++) {
                            printf("Passo %d: Bispo moveu para DIAGONAL SUPERIOR DIREITA\n", Bispo);
                        }
                        printf("\nBispo completou 5 movimentos na Diagonal Superior Direita!\n");
                        break;

                        case 2: //Diagonal Superior Esquerda
                        printf("\nVocê moveu o Bispo 5 casas na Diagonal Superior Esquerda:\n");
                        for (Bispo = 1; Bispo <= 5; Bispo++) {
                            printf("Passo %d: Bispo moveu para DIAGONAL SUPERIOR ESQUERDA\n", Bispo);
                        }
                        printf("\nBispo completou 5 movimentos na Diagonal Superior Esquerda!\n");
                        break;

                        case 3: //Diagonal Inferior Direita
                        printf("\nVocê moveu o Bispo 5 casas na Diagonal Inferior Direita:\n");
                        for (Bispo = 1; Bispo <= 5; Bispo++) {
                            printf("Passo %d: Bispo moveu para DIAGONAL INFERIOR DIREITA\n", Bispo);
                        }
                        printf("\nBispo completou 5 movimentos na Diagonal Inferior Direita!\n");
                        break;

                        case 4: //Diagonal Inferior Esquerda
                        printf("\nVocê moveu o Bispo 5 casas na Diagonal Inferior Esquerda:\n");
                        for (Bispo = 1; Bispo <= 5; Bispo++) {
                            printf("Passo %d: Bispo moveu para DIAGONAL INFERIOR ESQUERDA\n", Bispo);
                        }
                        printf("\nBispo completou 5 movimentos na Diagonal Inferior Esquerda!\n");
                        break;

                        default:
                        printf("Opção inválida para direção do Bispo!\n");
                        break;
                    }
                break;

            case 3: //Rainha
                printf("Para onde quer mover sua rainha?\n");
                printf("1. Direita\n");
                printf("2. Esquerda\n");
                printf("3. Cima\n");
                printf("4. Baixo\n");
                printf("5. Diagonal Superior Direita\n");
                printf("6. Diagonal Superior Esquerda\n");
                printf("7. Diagonal Inferior Direita\n");
                printf("8. Diagonal Inferior Esquerda\n");
                scanf("%d", &opcao);

                    //Direções da Rainha
                    switch (opcao) {
                        case 1: //Direita
                        printf("\nVocê moveu a Rainha 5 casas para a Direita:\n");
                        for (Rainha = 1; Rainha <= 5; Rainha++) {
                            printf("Passo %d: Rainha moveu para a DIREITA\n", Rainha);
                        }
                        printf("\nRainha completou 5 movimentos para a Direita!\n");
                        break;

                        case 2: //Esquerda
                        printf("\nVocê moveu a Rainha 5 casas para a Esquerda:\n");
                        for (Rainha = 1; Rainha <= 5; Rainha++) {
                            printf("Passo %d: Rainha moveu para a ESQUERDA\n", Rainha);
                        }
                        printf("\nRainha completou 5 movimentos para a Esquerda!\n");
                        break;

                        case 3: //Cima
                        printf("\nVocê moveu a Rainha 5 casas para a Cima:\n");
                        for (Rainha = 1; Rainha <= 5; Rainha++) {
                            printf("Passo %d: Rainha moveu para a CIMA\n", Rainha);
                        }
                        printf("\nRainha completou 5 movimentos para a Cima!\n");
                        break;

                        case 4: //Baixo
                        printf("\nVocê moveu a Rainha 5 casas para a Baixo:\n");
                        for (Rainha = 1; Rainha <= 5; Rainha++) {
                            printf("Passo %d: Rainha moveu para a BAIXO\n", Rainha);
                        }
                        printf("\nRainha completou 5 movimentos para a Baixo!\n");
                        break;

                        case 5: //Diagonal Superior Direita
                        printf("\nVocê moveu a Rainha 5 casas na Diagonal Superior Direita:\n");
                        for (Rainha = 1; Rainha <= 5; Rainha++) {
                            printf("Passo %d: Rainha moveu para DIAGONAL SUPERIOR DIREITA\n", Rainha);
                        }
                        printf("\nRainha completou 5 movimentos na Diagonal Superior Direita!\n");
                        break;

                        case 6: //Diagonal Superior Esquerda
                        printf("\nVocê moveu a Rainha 5 casas na Diagonal Superior Esquerda:\n");
                        for (Rainha = 1; Rainha <= 5; Rainha++) {
                            printf("Passo %d: Rainha moveu para DIAGONAL SUPERIOR ESQUERDA\n", Rainha);
                        }
                        printf("\nRainha completou 5 movimentos na Diagonal Superior Esquerda!\n");
                        break;

                        case 7: //Diagonal Inferior Direita
                        printf("\nVocê moveu a Rainha 5 casas na Diagonal Inferior Direita:\n");
                        for (Rainha = 1; Rainha <= 5; Rainha++) {
                            printf("Passo %d: Rainha moveu para DIAGONAL INFERIOR DIREITA\n", Rainha);
                        }
                        printf("\nRainha completou 5 movimentos na Diagonal Inferior Direita!\n");
                        break;

                        case 8: //Diagonal Inferior Esquerda
                        printf("\nVocê moveu a Rainha 5 casas na Diagonal Inferior Esquerda:\n");
                        for (Rainha = 1; Rainha <= 5; Rainha++) {
                            printf("Passo %d: Rainha moveu para DIAGONAL INFERIOR ESQUERDA\n", Rainha);
                        }
                        printf("\nRainha completou 5 movimentos na Diagonal Inferior Esquerda!\n");
                        break;

                        default:
                        printf("Opção inválida para direção da Rainha!\n");
                        break;
                    }
                break;

            default:
                printf("Opção inválida para peça!\n");
                break;
        }
        break;

    case 2:
            printf("***ATENÇÃO***\n\n");
            printf("Isso e um tutorial de como funciona o programa de movimento das 3 peças de xadrez:\n\n");
            printf("Ao iniciar, escolha uma das peças conforme\no programa orienta, e após isso selecione\numa das direções e então o programa vai simular quantas casas suas peça se movimentou\n\n");

    default:
        printf("Por favor escolha uma opção válida!");
        break;
    }

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

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