#include<stdio.h>
#include<stdlib.h>

int main(void){

    int *p, qtd1, qtd2;
    qtd1 = 3;

    p = (int *)calloc(qtd1, sizeof(int));

    printf("Quantos valores deseja adicionar ao array?");
    scanf("%i", &qtd2);

    if (qtd2 > qtd1){
        p = (int *)realloc(p, qtd2 * sizeof(int));

        for(int i = 0; i < qtd2; i++){
            printf("digite um valor para adicionar ao array: ");
            scanf("%i", &p[i]);
        }

        for (int i = 0; i < qtd2; i++){
            printf("[%i]: %i\n", i, p[i]);
        }

        printf("Tamanho atual do array é: %ld\n", qtd2*sizeof(int));

    }else if(qtd2 < qtd1){
        p = (int *)realloc(p, qtd2 * sizeof(int));

        for(int i = 0; i < qtd2; i++){
            printf("digite um valor para adicionar ao array: ");
            scanf("%i", &p[i]);
        }

        for (int i = 0; i < qtd2; i++){
            printf("[%i]: %i\n", i, p[i]);
        }

        printf("Tamanho atual do array é: %ld\n", qtd2*sizeof(int));

    }else{
        for(int i = 0; i < qtd2; i++){
            printf("digite um valor para adicionar ao array: ");
            scanf("%i", &p[i]);
        }

        for (int i = 0; i < qtd2; i++){
            printf("[%i]: %i\n", i, p[i]);
        }

        printf("Tamanho atual do array é: %ld\n", qtd2*sizeof(int));

    }

    return 0;
}