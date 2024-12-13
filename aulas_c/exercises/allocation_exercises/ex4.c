#include<stdio.h>
#include<stdlib.h>

int main (void){

    int *p;

    p = (int *)calloc(5, sizeof(int));

    for (int i = 0; i < 5; i++){
        printf("Digite um numero inteiro para adicionar ao array: ");
        scanf("%i", &p[i]);
    }

    for (int i = 0; i < 5; i++){
        printf("[%i]: %i\n", i, p[i]);
    }

    printf("O tamanho do array é: %ld\n", 5 * sizeof(int));

    free(p);
    p = NULL;

    return 0;
}