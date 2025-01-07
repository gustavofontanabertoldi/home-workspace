#include<stdio.h>
#include<stdlib.h>

void quick_sort(int array[], int tam){
    int i, j, grupo, troca;

    if(tam < 2){
        return;
    }else{
        grupo = array[tam/2];
    }

    for(int i = 0, int j = tam - 1;;i++, j--){
        while(array[i]<grupo){
            i++;
        }

        while(grupo < array[j]){
            j--;
        }
        if(i>=j){
            break;
        }else{
            troca = array[i];
            array[i] = array[j];
            array[j] = troca;
        }
    }
    quick_sort(array, i);
    quick_sort(array + i, tam - i);
}

int main (){
    int array [6] = {1, 8, 5, 3, 9, 2};

    quick_sort(array, 6);

    for (int i = 0; i < 6; i++){
        printf("-%d-", array[i]);
    }

    return 0;
}