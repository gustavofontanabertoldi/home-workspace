#include<stdio.h>
#include<stdlib.h>
#define LINESIZE 10

int line[LINESIZE] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int head = 0;
int tail = 0;

void show_line(){
    printf("==========FILA ATUAL==========");
    for(int i = 0; i < LINESIZE; i++)
    {
        printf("-");
        printf("[%i]", line[i]);
        printf("-");
    }
    printf("\nHead: %i\n", head);
    printf("Tail: %i\n\n", tail);

}

void enqueue (){
    int val;
    if(tail < LINESIZE){
        printf("qual valor deseja adicionar? ");
        scanf("%i", &val);
        line[tail] = val;
        tail++;
    }else{
        printf("a fila está cheia");
    }
}

void dequeue() {
    if (head < tail) {
        for (int i = 0; i < tail - 1; i++) {
            line[i] = line[i + 1];
        }
        line[tail - 1] = 0;
        tail--;
    } else {
        printf("A fila está vazia.\n");
    }
}


void clear (){
    if(line[tail] != 0){
        for(int i = 0; i < LINESIZE; i++){
            line[i] = 0;
        }
        head = 0;
        tail = 0;
    }else{
        printf("A fila está vazia");
    }
}

int main(void){

    int opcao;

    do{

        printf("[1] - Adiciona à fila\n");
        printf("[2] - Remove da fila\n");
        printf("[3] - Limpa a fila\n");
        printf("[4] - Lista a fila\n");
        printf("[-1] - sair\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            enqueue();
            break;
        
        case 2:
            dequeue();
            break;

        case 3: 
            clear();
            break;

        case 4:
            show_line();
            break;

        case -1:
            break;
        
        default:
            printf("Opção inválida");
            break;;
        }

    }while(opcao != -1);


    return 0;
}