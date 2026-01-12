#include "types.h"


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

}
