#include "types.h"
#include <stdio.h>


// Last Class Finish
/*
 * Esse algoritmo comeca organizando da ultima aula até a primeira,
 * organizando a lista de aulas das que terminam por ultimo.
 * */

void BurstTimeLast(Aula aulas[], int size){
    if(size < 2) return;

    for (int i = 0; i < (size - 1); i++) {

        for (int j = 0; j < (size - i - 1); j++) {

            int finalAtual = aulas[j].endTime;
            int finalProxima = aulas[j + 1].endTime;

            if(finalAtual < finalProxima) {
                Aula temp = aulas[j];
                aulas[j] = aulas[j + 1];
                aulas[j + 1] = temp;
            }
        }
    }
}

void lastClassFinish(Aula aulas[], int size){
    BurstTimeLast(aulas, size);

    printf("--- Cronograma LCF (Terminam mais tarde) ---\n");

    int total = 0;
    int primeiraAula = 100;

    for (int i = 0; i < size; i++) { 
        if (aulas[i].endTime <= primeiraAula) {
            printf("Aula: %s | %dh - %dh\n, the aula Finish in %dh", aulas[i].name, 
                   aulas[i].startTime,aulas[i].endTime, aulas[i].endTime);
            
            primeiraAula = aulas[i].startTime;
            total++;
        } 
    }
    printf("Total de aulas possiveis: %d \n\n", total);
}
