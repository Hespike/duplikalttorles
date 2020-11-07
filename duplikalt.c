#include <stdio.h>

int scanNumWithLimits(int min, int max){
    int num;

    do{
scanf("%d", &num);
if(num < min || num > max){
printf("%d-%d intervallumban kell lennie a szamnak. \n", min, max);
    }
    }while(num < min || num > max);
 
 return num;   
}

void scanArray(int array[], int size){
    int i;
    for(i = 0; i < size; i++){
        scanf("%d", &array[i]);
    }
}

void printArray(int array[], int size){
    int i;
    for(i = 0; i < size; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
}

int removeDuplicates(int array[], int size){

    int i, j, counter = 1;
    for(i = 0; i < size;){
        for( j = i + 1; j < size && array[i] == array[j]; j++);
        if(j < size){
        array[counter] = array[j];
        i = j;
        counter++;
        }
        else{
            break;
           
        }
    }
    return counter;
}

int main (){

    printf("Mekkora legyen a tomb?\n");
    int size = scanNumWithLimits(1, 256);
    int array[size];

    printf("Adja meg a szamokat!\n");
    scanArray(array, size);
    printArray(array, size);

    int newSize = removeDuplicates(array, size);
    printArray(array, newSize);

    return 0;
}