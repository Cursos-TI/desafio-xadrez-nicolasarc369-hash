#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Funções recursivas para movimentação das peças
void moverTorre(int casas, int direcao) {
    if (casas > 0) {
        switch(direcao) {
            case 1:
                printf("Passo %d: Torre moveu para a DIREITA\n", 6 - casas);
                break;
            case 2:
                printf("Passo %d: Torre moveu para a ESQUERDA\n", 6 - casas);
                break;
            case 3:
                printf("Passo %d: Torre moveu para a CIMA\n", 6 - casas);
                break;
            case 4:
                printf("Passo %d: Torre moveu para a BAIXO\n", 6 - casas);
                break;
        }
        moverTorre(casas - 1, direcao);
    }
}

void moverBispo(int casas, int direcao) {
    if (casas > 0) {
        switch(direcao) {
            case 1:
                printf("Passo %d: Bispo moveu para DIAGONAL SUPERIOR DIREITA\n", 6 - casas);
                break;
            case 2:
                printf("Passo %d: Bispo moveu para DIAGONAL SUPERIOR ESQUERDA\n", 6 - casas);
                break;
            case 3:
                printf("Passo %d: Bispo moveu para DIAGONAL INFERIOR DIREITA\n", 6 - casas);
                break;
            case 4:
                printf("Passo %d: Bispo moveu para DIAGONAL INFERIOR ESQUERDA\n", 6 - casas);
                break;
        }
        moverBispo(casas - 1, direcao);
    }
}

void moverRainha(int casas, int direcao) {
    if (casas > 0) {
        switch(direcao) {
            case 1:
                printf("Passo %d: Rainha moveu para a DIREITA\n", 6 - casas);
                break;
            case 2:
                printf("Passo %d: Rainha moveu para a ESQUERDA\n", 6 - casas);
                break;
            case 3:
                printf("Passo %d: Rainha moveu para a CIMA\n", 6 - casas);
                break;
            case 4:
                printf("Passo %d: Rainha moveu para a BAIXO\n", 6 - casas);
                break;
            case 5:
                printf("Passo %d: Rainha moveu para DIAGONAL SUPERIOR DIREITA\n", 6 - casas);
                break;
            case 6:
                printf("Passo %d: Rainha moveu para DIAGONAL SUPERIOR ESQUERDA\n", 6 - casas);
                break;
            case 7:
                printf("Passo %d: Rainha moveu para DIAGONAL INFERIOR DIREITA\n", 6 - casas);
                break;
            case 8:
                printf("Passo %d: Rainha moveu para DIAGONAL INFERIOR ESQUERDA\n", 6 - casas);
                break;
        }
        moverRainha(casas - 1, direcao);
    }
}

void moverCavaloRecursivo(int passos, int direcao1, int direcao2, int contador) {
    if (passos > 0) {
        if (contador <= 2) {
            switch(direcao1) {
                case 1:
                    printf("Passo %d: Cavalo moveu para Cima\n", contador);
                    break;
                case 2:
                    printf("Passo %d: Cavalo moveu para Baixo\n", contador);
                    break;
                case 3:
                    printf("Passo %d: Cavalo moveu para Direita\n", contador);
                    break;
                case 4:
                    printf("Passo %d: Cavalo moveu para Esquerda\n", contador);
                    break;
            }
            moverCavaloRecursivo(passos, direcao1, direcao2, contador + 1);
        } else {
            switch(direcao2) {
                case 1:
                    printf("Passo %d: Cavalo moveu para Cima\n", contador);
                    break;
                case 2:
                    printf("Passo %d: Cavalo moveu para Baixo\n", contador);
                    break;
                case 3:
                    printf("Passo %d: Cavalo moveu para Direita\n", contador);
                    break;
                case 4:
                    printf("Passo %d: Cavalo moveu para Esquerda\n", contador);
                    break;
            }
        }
    }
}

int main() {

    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int opcao;

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
        printf("4. Cavalo\n");
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
                        moverTorre(5, 1);
                        printf("\nTorre completou 5 movimentos para a Direita!\n");
                        break;

                        case 2: //esquerda
                        printf("\nVocê moveu a Torre 5 casas para a Esquerda:\n");
                        moverTorre(5, 2);
                        printf("\nTorre completou 5 movimentos para a ESQUERDA!\n");
                        break;

                        case 3: //Cima
                        printf("\nVocê moveu a Torre 5 casas para a Cima:\n");
                        moverTorre(5, 3);
                        printf("\nTorre completou 5 movimentos para a Cima!\n");
                        break;

                        case 4: //Baixo
                        printf("\nVocê moveu a Torre 5 casas para a Baixo:\n");
                        moverTorre(5, 4);
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
                        moverBispo(5, 1);
                        printf("\nBispo completou 5 movimentos na Diagonal Superior Direita!\n");
                        break;

                        case 2: //Diagonal Superior Esquerda
                        printf("\nVocê moveu o Bispo 5 casas na Diagonal Superior Esquerda:\n");
                        moverBispo(5, 2);
                        printf("\nBispo completou 5 movimentos na Diagonal Superior Esquerda!\n");
                        break;

                        case 3: //Diagonal Inferior Direita
                        printf("\nVocê moveu o Bispo 5 casas na Diagonal Inferior Direita:\n");
                        moverBispo(5, 3);
                        printf("\nBispo completou 5 movimentos na Diagonal Inferior Direita!\n");
                        break;

                        case 4: //Diagonal Inferior Esquerda
                        printf("\nVocê moveu o Bispo 5 casas na Diagonal Inferior Esquerda:\n");
                        moverBispo(5, 4);
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
                        moverRainha(5, 1);
                        printf("\nRainha completou 5 movimentos para a Direita!\n");
                        break;

                        case 2: //Esquerda
                        printf("\nVocê moveu a Rainha 5 casas para a Esquerda:\n");
                        moverRainha(5, 2);
                        printf("\nRainha completou 5 movimentos para a Esquerda!\n");
                        break;

                        case 3: //Cima
                        printf("\nVocê moveu a Rainha 5 casas para a Cima:\n");
                        moverRainha(5, 3);
                        printf("\nRainha completou 5 movimentos para a Cima!\n");
                        break;

                        case 4: //Baixo
                        printf("\nVocê moveu a Rainha 5 casas para a Baixo:\n");
                        moverRainha(5, 4);
                        printf("\nRainha completou 5 movimentos para a Baixo!\n");
                        break;

                        case 5: //Diagonal Superior Direita
                        printf("\nVocê moveu a Rainha 5 casas na Diagonal Superior Direita:\n");
                        moverRainha(5, 5);
                        printf("\nRainha completou 5 movimentos na Diagonal Superior Direita!\n");
                        break;

                        case 6: //Diagonal Superior Esquerda
                        printf("\nVocê moveu a Rainha 5 casas na Diagonal Superior Esquerda:\n");
                        moverRainha(5, 6);
                        printf("\nRainha completou 5 movimentos na Diagonal Superior Esquerda!\n");
                        break;

                        case 7: //Diagonal Inferior Direita
                        printf("\nVocê moveu a Rainha 5 casas na Diagonal Inferior Direita:\n");
                        moverRainha(5, 7);
                        printf("\nRainha completou 5 movimentos na Diagonal Inferior Direita!\n");
                        break;

                        case 8: //Diagonal Inferior Esquerda
                        printf("\nVocê moveu a Rainha 5 casas na Diagonal Inferior Esquerda:\n");
                        moverRainha(5, 8);
                        printf("\nRainha completou 5 movimentos na Diagonal Inferior Esquerda!\n");
                        break;

                        default:
                        printf("Opção inválida para direção da Rainha!\n");
                        break;
                    }
                break;

                case 4: //Cavalo
                printf("Para onde quer mover seu cavalo?\n");
                printf("1. Cima Cima Direita\n");
                printf("2. Cima Cima Esquerda\n");
                printf("3. Baixo Baixo Direita\n");
                printf("4. Baixo Baixo Esquerda\n");
                printf("5. Direita Direita Cima\n");
                printf("6. Direita Direita Baixo\n");
                printf("7. Esquerda Esquerda Cima\n");
                printf("8. Esquerda Esquerda Baixo\n");
                scanf("%d", &opcao);

                    //Direções do Cavalo
                    switch (opcao) {
                        case 1: //Cima cima Direita
                        printf("\nVocê moveu o cavalo 2 casas cima cima e 1 casa Direita:\n");
                        moverCavaloRecursivo(3, 1, 3, 1);
                        printf("\nCavalo completou 2 movimentos Cima Cima e 1 movimento a Direita!\n");
                        break;

                        case 2: //Cima cima Esquerda
                        printf("\nVocê moveu o cavalo 2 casas cima cima e 1 casa Esquerda:\n");
                        moverCavaloRecursivo(3, 1, 4, 1);
                        printf("\nCavalo completou 2 movimentos Cima Cima e 1 movimento a Esquerda!\n");
                        break;

                        case 3: //Baixo Baixo Direita
                        printf("\nVocê moveu o cavalo 2 casas baixo baixo e 1 casa Direita:\n");
                        moverCavaloRecursivo(3, 2, 3, 1);
                        printf("\nCavalo completou 2 movimentos Baixo Baixo e 1 movimento a Direita!\n");
                        break;

                        case 4: //Baixo Baixo Esquerda
                        printf("\nVocê moveu o cavalo 2 casas baixo baixo e 1 casa Esquerda:\n");
                        moverCavaloRecursivo(3, 2, 4, 1);
                        printf("\nCavalo completou 2 movimentos Baixo Baixo e 1 movimento a Esquerda!\n");
                        break;

                        case 5: //Direita Direita Cima
                        printf("\nVocê moveu o cavalo 2 casas direita direita e 1 casa Cima:\n");
                        moverCavaloRecursivo(3, 3, 1, 1);
                        printf("\nCavalo completou 2 movimentos Direita Direita e 1 movimento a Cima!\n");
                        break;

                        case 6: //Direita Direita Baixo
                        printf("\nVocê moveu o cavalo 2 casas direita direita e 1 casa Baixo:\n");
                        moverCavaloRecursivo(3, 3, 2, 1);
                        printf("\nCavalo completou 2 movimentos Direita Direita e 1 movimento a Baixo!\n");
                        break;

                        case 7: //Esquerda Esquerda Cima
                        printf("\nVocê moveu o cavalo 2 casas esquerda esquerda e 1 casa Cima:\n");
                        moverCavaloRecursivo(3, 4, 1, 1);
                        printf("\nCavalo completou 2 movimentos Esquerda Esquerda e 1 movimento a Cima!\n");
                        break;

                        case 8: //Esquerda Esquerda Baixo
                        printf("\nVocê moveu o cavalo 2 casas esquerda esquerda e 1 casa Baixo:\n");
                        moverCavaloRecursivo(3, 4, 2, 1);
                        printf("\nCavalo completou 2 movimentos Esquerda Esquerda e 1 movimento a Baixo!\n");
                        break;

                        default:
                        printf("Opção inválida para direção do Cavalo!\n");
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
            break;

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