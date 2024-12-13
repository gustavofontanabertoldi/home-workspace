#include<stdio.h>
#include<stdlib.h>

int main(void){

    int qtd_c;

    printf("Quantos caracteres nosso texto vai possuir?: ");
    scanf("%i", &qtd_c);

    getchar();

    char *string;

    string = (char *)calloc(qtd_c + 1, sizeof(char));

    if(string){
        printf("Digite o que deseja escrever nesse texto: ");
        fgets(string, qtd_c + 1, stdin);

        for(int i = 0; i < qtd_c; i++){
            if(*(string + i) != 'a' && *(string + i) != 'A' && *(string + i) != 'e' && *(string + i) != 'E' && *(string + i) != 'i' && *(string + i) != 'I' && *(string + i) != 'o' && *(string + i) != 'O' && *(string + i) != 'u' && *(string + i) != 'U'){
                printf("%c", *(string + i)); // using *(string + i) is the same shit that using string[i] :)
            }
        }

        free(string);
        string = NULL;
    }else{
        printf("Não há espaço o suficiente na memória");
    }

    return 0;
}