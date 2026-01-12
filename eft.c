#include <stdio.h>
#include "types.h"

// Earliest Finish Time
/* algoritmo responsável por sempre escolher a aula 
  que termina mais cedo.
  
  o algoritmo opera em tempo de O(n log n) devido a necessidade de ordenar
  as aulas no inicio.
*/



void BurstTimeFinal(Aula aulas[], int size) {

    if(size < 2) return ;

    for (int i = 0; i < (size - 1); i++) {

        for (int j = 0; j < (size - i - 1); j++) {

            int finalAtual = aulas[j].endTime;
            int finalProxima = aulas[j + 1].endTime;

            if(finalAtual > finalProxima) {
                Aula temp = aulas[j];
                aulas[j] = aulas[j + 1];
                aulas[j + 1] = temp;
            }
        }
    }
}

void EarliestFinishTime(Aula aulas[], int size) {
    BurstTimeFinal(aulas,  size);

    printf("--- Cronograma EFT (Terminam mais cedo) ---\n");

    int total = 0;
    int fimUltimaAula = -1; // Inicializa com um valor que permita a primeira aula ser aceita

    for (int i = 0; i < size; i++) {

        if (aulas[i].startTime >= fimUltimaAula) {
            printf("Aula: %s | %dh - %dh\n", 
                    aulas[i].name, aulas[i].startTime, aulas[i].endTime);
            
            fimUltimaAula = aulas[i].endTime; // Atualiza o marco de tempo
            total++;
        }
    }

    printf("Total de aulas possíveis: %d\n\n", total);
}

