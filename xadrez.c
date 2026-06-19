#include <stdio.h>

int main() {

    int Torre = 1; int Bispo = 1; int Rainha = 1; int Cavalo; int CavaloD; int CavaloE; int opcao;

    printf(" *** Xadrez ***\n\n");
    printf("1. Iniciar\n");
    printf("2. Leia-me!\n");
    scanf("%d", &opcao);

    switch (opcao){
    case 1:
        printf("*** Escolha Um Peça para iniciar o Movimento ***\n");
        printf("1. Torre\n");
        printf("2. Bispo\n");
        printf("3. Rainha\n");
        printf("4. Cavalo\n");
        scanf("%d", &opcao);

        switch (opcao){
            case 1:
                printf("Para onde quer mover sua torre?\n");
                printf("1. Direita\n");
                printf("2. Esquerda\n");
                printf("3. Cima\n");
                printf("4. Baixo\n");
                scanf("%d", &opcao);

                    switch (opcao) {
                        case 1:
                        printf("\nVocê moveu a Torre 5 casas para a Direita:\n");
                        for (Torre = 1; Torre <= 5; Torre++) {
                            printf("Passo %d: Torre moveu para a DIREITA\n", Torre);
                        }
                        printf("\nTorre completou 5 movimentos para a Direita!\n");
                        break;

                        case 2:
                        printf("\nVocê moveu a Torre 5 casas para a Esquerda:\n");
                        for (Torre = 1; Torre <= 5; Torre++) {
                            printf("Passo %d: Torre moveu para a ESQUERDA\n", Torre);
                        }
                        printf("\nTorre completou 5 movimentos para a ESQUERDA!\n");
                        break;

                        case 3:
                        printf("\nVocê moveu a Torre 5 casas para a Cima:\n");
                        for (Torre = 1; Torre <= 5; Torre++) {
                            printf("Passo %d: Torre moveu para a CIMA\n", Torre);
                        }
                        printf("\nTorre completou 5 movimentos para a Cima!\n");
                        break;

                        case 4:
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

            case 2:
                printf("Para onde quer mover seu bispo?\n");
                printf("1. Diagonal Superior Direita\n");
                printf("2. Diagonal Superior Esquerda\n");
                printf("3. Diagonal Inferior Direita\n");
                printf("4. Diagonal Inferior Esquerda\n");
                scanf("%d", &opcao);

                    switch (opcao) {
                        case 1:
                        printf("\nVocê moveu o Bispo 5 casas na Diagonal Superior Direita:\n");
                        for (Bispo = 1; Bispo <= 5; Bispo++) {
                            printf("Passo %d: Bispo moveu para DIAGONAL SUPERIOR DIREITA\n", Bispo);
                        }
                        printf("\nBispo completou 5 movimentos na Diagonal Superior Direita!\n");
                        break;

                        case 2:
                        printf("\nVocê moveu o Bispo 5 casas na Diagonal Superior Esquerda:\n");
                        for (Bispo = 1; Bispo <= 5; Bispo++) {
                            printf("Passo %d: Bispo moveu para DIAGONAL SUPERIOR ESQUERDA\n", Bispo);
                        }
                        printf("\nBispo completou 5 movimentos na Diagonal Superior Esquerda!\n");
                        break;

                        case 3:
                        printf("\nVocê moveu o Bispo 5 casas na Diagonal Inferior Direita:\n");
                        for (Bispo = 1; Bispo <= 5; Bispo++) {
                            printf("Passo %d: Bispo moveu para DIAGONAL INFERIOR DIREITA\n", Bispo);
                        }
                        printf("\nBispo completou 5 movimentos na Diagonal Inferior Direita!\n");
                        break;

                        case 4:
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

            case 3:
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

                    switch (opcao) {
                        case 1:
                        printf("\nVocê moveu a Rainha 5 casas para a Direita:\n");
                        for (Rainha = 1; Rainha <= 5; Rainha++) {
                            printf("Passo %d: Rainha moveu para a DIREITA\n", Rainha);
                        }
                        printf("\nRainha completou 5 movimentos para a Direita!\n");
                        break;

                        case 2:
                        printf("\nVocê moveu a Rainha 5 casas para a Esquerda:\n");
                        for (Rainha = 1; Rainha <= 5; Rainha++) {
                            printf("Passo %d: Rainha moveu para a ESQUERDA\n", Rainha);
                        }
                        printf("\nRainha completou 5 movimentos para a Esquerda!\n");
                        break;

                        case 3:
                        printf("\nVocê moveu a Rainha 5 casas para a Cima:\n");
                        for (Rainha = 1; Rainha <= 5; Rainha++) {
                            printf("Passo %d: Rainha moveu para a CIMA\n", Rainha);
                        }
                        printf("\nRainha completou 5 movimentos para a Cima!\n");
                        break;

                        case 4:
                        printf("\nVocê moveu a Rainha 5 casas para a Baixo:\n");
                        for (Rainha = 1; Rainha <= 5; Rainha++) {
                            printf("Passo %d: Rainha moveu para a BAIXO\n", Rainha);
                        }
                        printf("\nRainha completou 5 movimentos para a Baixo!\n");
                        break;

                        case 5:
                        printf("\nVocê moveu a Rainha 5 casas na Diagonal Superior Direita:\n");
                        for (Rainha = 1; Rainha <= 5; Rainha++) {
                            printf("Passo %d: Rainha moveu para DIAGONAL SUPERIOR DIREITA\n", Rainha);
                        }
                        printf("\nRainha completou 5 movimentos na Diagonal Superior Direita!\n");
                        break;

                        case 6:
                        printf("\nVocê moveu a Rainha 5 casas na Diagonal Superior Esquerda:\n");
                        for (Rainha = 1; Rainha <= 5; Rainha++) {
                            printf("Passo %d: Rainha moveu para DIAGONAL SUPERIOR ESQUERDA\n", Rainha);
                        }
                        printf("\nRainha completou 5 movimentos na Diagonal Superior Esquerda!\n");
                        break;

                        case 7:
                        printf("\nVocê moveu a Rainha 5 casas na Diagonal Inferior Direita:\n");
                        for (Rainha = 1; Rainha <= 5; Rainha++) {
                            printf("Passo %d: Rainha moveu para DIAGONAL INFERIOR DIREITA\n", Rainha);
                        }
                        printf("\nRainha completou 5 movimentos na Diagonal Inferior Direita!\n");
                        break;

                        case 8:
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

                case 4:
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

                    switch (opcao) {
                        case 1:
                        printf("\nVocê moveu o cavalo 2 casas cima cima e 1 casa Direita:\n");
                        for (Cavalo = 1; Cavalo <= 2; Cavalo++) {
                            printf("Passo %d: Cavalo moveu para Cima\n", Cavalo);
                            if (Cavalo == 2) {
                                for (CavaloD = 1; CavaloD <= 1; CavaloD++) {
                                    printf("Passo %d: Cavalo moveu para Direita\n", CavaloD);
                                }
                            }
                        }
                        printf("\nCavalo completou 2 movimentos Cima Cima e 1 movimento a Direita!\n");
                        break;

                        case 2:
                        printf("\nVocê moveu o cavalo 2 casas cima cima e 1 casa Esquerda:\n");
                        for (Cavalo = 1; Cavalo <= 2; Cavalo++) {
                            printf("Passo %d: Cavalo moveu para Cima\n", Cavalo);
                            if (Cavalo == 2) {
                                for (CavaloE = 1; CavaloE <= 1; CavaloE++) {
                                    printf("Passo %d: Cavalo moveu para Esquerda\n", CavaloE);
                                }
                            }
                        }
                        printf("\nCavalo completou 2 movimentos Cima Cima e 1 movimento a Esquerda!\n");
                        break;

                        case 3:
                        printf("\nVocê moveu o cavalo 2 casas baixo baixo e 1 casa Direita:\n");
                        for (Cavalo = 1; Cavalo <= 2; Cavalo++) {
                            printf("Passo %d: Cavalo moveu para Baixo\n", Cavalo);
                            if (Cavalo == 2) {
                                for (CavaloD = 1; CavaloD <= 1; CavaloD++) {
                                    printf("Passo %d: Cavalo moveu para Direita\n", CavaloD);
                                }
                            }
                        }
                        printf("\nCavalo completou 2 movimentos Baixo Baixo e 1 movimento a Direita!\n");
                        break;

                        case 4:
                        printf("\nVocê moveu o cavalo 2 casas baixo baixo e 1 casa Esquerda:\n");
                        for (Cavalo = 1; Cavalo <= 2; Cavalo++) {
                            printf("Passo %d: Cavalo moveu para Baixo\n", Cavalo);
                            if (Cavalo == 2) {
                                for (CavaloE = 1; CavaloE <= 1; CavaloE++) {
                                    printf("Passo %d: Cavalo moveu para Esquerda\n", CavaloE);
                                }
                            }
                        }
                        printf("\nCavalo completou 2 movimentos Baixo Baixo e 1 movimento a Esquerda!\n");
                        break;

                        case 5:
                        printf("\nVocê moveu o cavalo 2 casas direita direita e 1 casa Cima:\n");
                        for (CavaloD = 1; CavaloD <= 2; CavaloD++) {
                            printf("Passo %d: Cavalo moveu para Direita\n", CavaloD);
                            if (CavaloD == 2) {
                                for (Cavalo = 1; Cavalo <= 1; Cavalo++) {
                                    printf("Passo %d: Cavalo moveu para Cima\n", Cavalo);
                                }
                            }
                        }
                        printf("\nCavalo completou 2 movimentos Direita Direita e 1 movimento a Cima!\n");
                        break;

                        case 6:
                        printf("\nVocê moveu o cavalo 2 casas direita direita e 1 casa Baixo:\n");
                        for (CavaloD = 1; CavaloD <= 2; CavaloD++) {
                            printf("Passo %d: Cavalo moveu para Direita\n", CavaloD);
                            if (CavaloD == 2) {
                                for (Cavalo = 1; Cavalo <= 1; Cavalo++) {
                                    printf("Passo %d: Cavalo moveu para Baixo\n", Cavalo);
                                }
                            }
                        }
                        printf("\nCavalo completou 2 movimentos Direita Direita e 1 movimento a Baixo!\n");
                        break;

                        case 7:
                        printf("\nVocê moveu o cavalo 2 casas esquerda esquerda e 1 casa Cima:\n");
                        for (CavaloE = 1; CavaloE <= 2; CavaloE++) {
                            printf("Passo %d: Cavalo moveu para Esquerda\n", CavaloE);
                            if (CavaloE == 2) {
                                for (Cavalo = 1; Cavalo <= 1; Cavalo++) {
                                    printf("Passo %d: Cavalo moveu para Cima\n", Cavalo);
                                }
                            }
                        }
                        printf("\nCavalo completou 2 movimentos Esquerda Esquerda e 1 movimento a Cima!\n");
                        break;

                        case 8:
                        printf("\nVocê moveu o cavalo 2 casas esquerda esquerda e 1 casa Baixo:\n");
                        for (CavaloE = 1; CavaloE <= 2; CavaloE++) {
                            printf("Passo %d: Cavalo moveu para Esquerda\n", CavaloE);
                            if (CavaloE == 2) {
                                for (Cavalo = 1; Cavalo <= 1; Cavalo++) {
                                    printf("Passo %d: Cavalo moveu para Baixo\n", Cavalo);
                                }
                            }
                        }
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

    return 0;
}