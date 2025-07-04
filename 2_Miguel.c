#include <stdio.h>

int main() {
    int matriz[3][3];
    int i, j, linha;

    printf("Digite os valores da matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

 
    printf("\nDigite o número da linha que deseja ver (0, 1 ou 2): ");
    scanf("%d", &linha);


    if (linha >= 0 && linha < 3) {
        printf("Valores da linha %d: ", linha);
        for (j = 0; j < 3; j++) {
            printf("%d ", matriz[linha][j]);
        }
        printf("\n");
    } else {
        printf("Linha inválida! Digite um número entre 0 e 2.\n");
    }

    return 0;
}