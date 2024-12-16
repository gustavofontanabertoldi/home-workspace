#include<stdio.h>
#include<stdlib.h>

typedef struct st_node{
    int value;
    struct st_node *prox;

}NODE;

int empty (NODE *ll){
    if(ll->prox == NULL){
        return 1;
    }else{
        return 0;
    }
}

void initiate (NODE *ll){
    ll->prox = NULL;
}

void release (NODE *ll){
    if(!empty(ll)){
        NODE *nextNode, *current;
        current = ll->prox;
        while(current != NULL){
            nextNode = current->prox;
            free(current);
            current = nextNode;
        }
    }
}

void show (NODE *ll){
    if (empty(ll)){
        printf("the list is empty\n");
    }else{
        NODE *temp;
        temp = ll->prox;

        while(temp != NULL){
            print("-%d-", temp->value);
            temp = temp->prox;
        }
    }
}

void front(NODE *ll){
    NODE *new = (NODE *)malloc(sizeof(NODE));

    if(!new){
        printf("No memory left");
    }else{
        printf("Whitch value you want to add? ");
        scanf("%d", &new->value);

        NODE *old = new->prox;
        ll->prox = new;
        new->prox=old;
    }
}

void back(NODE *ll){
    NODE *new = (NODE*)malloc(sizeof(NODE));
    if(!new){
        printf("No free space");
    }else{
        printf("Whitch value you want to add? ");
        scanf("%d", &new->value);

        new->prox = NULL;

        if(empty(ll)){
            ll->prox = new;
        }else{
            NODE *tmp = ll->prox;
            while(tmp->prox != NULL){
                tmp = tmp->prox;
            }
            tmp->prox=new;
        }
    }
}

int menu(){
    int op;
        printf("[0] - Exit\n");
        printf("[1] - Add to the beggining\n");
        printf("[2] - Add to the end\n");
        printf("[3] - Show the list\n");
        printf("[4] - Initiate");
        printf("Option: ");
        scanf("%d", &op);
    return op;
}

void option (NODE *ll, int op){

    switch (op)
        {
        case 0:
            release(ll);
            break;
        
        case 1:
            front(ll);
            break;

        case 2: 
            back(ll);
            break;

        case 3:
            show(ll);
            break;

        case 4:
            initiate(ll);
            break;
        
        default:
            printf("Opção inválida");
            break;;
        }
}

int main(void){
    NODE *ll = (NODE*)malloc(sizeof(NODE));

    if(!ll){
        printf("error");
    }else{
        int opt;
        do{
            opt = menu();
            option(ll, opt);
        }while(opt);
    }

    return 0;
}