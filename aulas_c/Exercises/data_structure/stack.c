#include<stdio.h>
#include<stdlib.h>

#define STACK_SIZE 10

int stack[STACK_SIZE];
int top = 0;
int base = 0;

void show_stack(){
    printf("==========STACK==========");
    for(int i = 0; i < STACK_SIZE; i++){
        printf("-%d-", stack[i]);
    }
}

void push(){
    if(top < STACK_SIZE){
        int val;
        printf("Whitch value you want to add? ");
        scanf("%i", &val);
        stack[top] = val;
        top++;
    }else{
        printf("The stack is full");
    }
}

void pop(){
    if(top != base){
        top--;
        stack[top] = 0;
    }else{
        printf("The stack is empty");
    }
}

void clean(){
    for(int i = 0; i < STACK_SIZE; i++){
        stack[i] = 0;
    }
    top = base;
}

int main(void){

    int option;

    do{

        printf("[1] - Add element\n");
        printf("[2] - Remove element\n");
        printf("[3] - Clean stack\n");
        printf("[4] - Print stack\n");
        printf("[-1] - Stop\n");
        printf("Option: ");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            push();
            break;
        
        case 2:
            pop();
            break;

        case 3: 
            clean();
            break;

        case 4:
            show_stack();
            break;

        case -1:
            break;
        
        default:
            printf("Inválid option");
            break;;
        }

    }while(option != -1);


    return 0;
}