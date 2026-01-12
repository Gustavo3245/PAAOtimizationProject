#include "types.h"
#include <stdio.h>


void printList(Aula aulas[], int size){
    printf("---------------------------------------- \n");
    for (int value = 0; value <= size - 1; value++) {
        printf(" Aula: %s, Start In: %d, Finish In: %d, Description: %s \n", 
               aulas[value].name, aulas[value].startTime, aulas[value].endTime, aulas[value].description);
    }
    printf("----------------------------------------\n");

}

int main(int argc, char *argv[]){
    
    Aula lista[] = {
        {"Processos", 10, 12, "description"},
        {"Requisitos", 8, 11, "description"},
        {"processo e analise de algoritmos", 11, 13, "description"},
        {"Gerencia", 12, 14, "description"},
        {"Cimento 2", 9, 10, "description"},
        {"fundamentos de banco de dados", 8, 10, "description"},
        {"Inteligencia artificial", 8, 14, "description"},
        {"Programação Orientada A Objetos", 10, 11, "description"}
    };

    // quantidade de structs (elementos na lista);
    //   int size = sizeof(lista) / sizeof(lista[0]);
    int size = 8;

    printList(lista, size);

    BurstTime(lista,  size);
    ShortestJobFirst(lista,  size);

    BurstTimeFinal(lista,  size);
    printList(lista, size);
    EarliestFinishTime(lista, size);

    BurstTimeLast(lista, size);
    printList(lista,  size);
    lastClassFinish(lista, size);
    
}
