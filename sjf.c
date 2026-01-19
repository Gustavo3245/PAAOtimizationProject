#include "types.h"
#include <stdio.h>
#include <time.h>


// Shortest Job First

/*
 Shortest Job First é um "Cpu scheduling algorithm" responsável
 por escolher o menor processo ou neste caso, a aula que possuia o menor tempo.
 

 */


void ShortestJobOrganize(Aula aulas[], int size) {

    for (int i = 0; i < size - 1; i++) {
        
        for (int j = 0; j < size - i - 1; j++) {
            
            int duracaoAtual = aulas[j].endTime - aulas[j].startTime;
            int duracaoProxima = aulas[j + 1].endTime - aulas[j + 1].startTime;
        
            if (duracaoAtual > duracaoProxima) {
                Aula temp = aulas[j];
                aulas[j] = aulas[j + 1];
                aulas[j + 1] = temp;
            }
        }
    }
}

void ShortestJobFirst(Aula aulas[], int size) {
    ShortestJobOrganize(aulas, size);

    clock_t start = clock();
    printf("--- Cronograma SJF (Mais curtas primeiro) ---\n");

    int selecionadas[100] = {0};
    int total = 0;    

    for (int i = 0;  i < size; i++) {
        int conflito = 0;
        for (int j = 0; j < i; j++) {
            if(selecionadas[j]) {
                if(aulas[i].startTime < aulas[j].endTime && aulas[i].endTime > aulas[j].startTime) {
                    conflito = 1;
                    break;
                }
            }
        }
        if(!conflito){
            selecionadas[i] = 1;
            printf("Aula: %-20s | %02dh - %02dh %20s%dh)\n", 
                    aulas[i].name, aulas[i].startTime, aulas[i].endTime, 
                   "(Duration: ", (aulas[i].endTime - aulas[i].startTime));
            total++;
        }
    }
    printf("total de aulas possíveis: %d\n\n", total);
    
    clock_t end = clock();
    double time = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Tempo de execução EFT: %.8f segundos \n", time);
}
