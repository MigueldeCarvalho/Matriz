#include <stdio.h>

int main() {
    int matriz[2][3];
    int i, j, soma = 0;

    printf("Digite os valores da matriz 2x3:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            soma += matriz[i][j];
        }
    }


    printf("A soma de todos os elementos da matriz é: %d\n", soma);

    return 0;
}