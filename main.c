#include "types.h"
#include <stdio.h>


void printList(Aula aulas[], int size){
    printf("---------------------------------------- \n");
    for (int value = 0; value <= size - 1; value++) {
        printf(" Aula: %2s, Start In: %2d, Finish In: %2d, Description: %s \n", 
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
        {"Programação Orientada A Objetos", 10, 11, "description"},
        { "Diagrama de Classes", 8, 10, "description" },
        { "Casos de Uso", 10, 12, "description" },
        { "Engenharia de Software", 13, 15, "description" },
        { "Sistemas Operacionais", 14, 17, "description" },
        { "Diagrama de Sequencia", 8, 11, "description" },
        { "Estrutura de Dados", 11, 13, "description" },
        { "Redes de Computadores", 9, 12, "description" },
        { "Metodologias Ageis", 12, 14, "description" },
        { "Qualidade de Software", 10, 12, "description" },
        { "Interacao Homem-Computador", 8, 10, "description" },
        { "Diagrama de Componentes", 11, 13, "description" },
        { "Sistemas Distribuidos", 14, 16, "description" },
        { "Engenharia Ambiental", 20, 22, "description"},
        { "Engenharia de Pescal", 21, 23, "description"},
        { "Engenharia costeira" , 19, 24, "description"},
        { "Arquitetura de Computadores", 13, 15, "description" },
        { "Compiladores", 15, 17, "description" },
        { "Segurança de Sistemas", 17, 19, "description" },
        { "Computação Gráfica", 18, 20, "description" },
        { "Cálculo Numérico", 7, 9, "description" },
        { "Lógica para Computação", 14, 16, "description" },
        { "Empreendedorismo", 16, 18, "description" },
        { "Ética e Computação", 18, 19, "description" },
        { "Teoria da Computação", 19, 21, "description" },
        { "Mineração de Dados", 20, 22, "description" },
        { "Deep Learning", 15, 18, "description" },
        { "Desenvolvimento Web", 13, 16, "description" },
        { "Desenvolvimento Mobile", 9, 12, "description" },
        { "Governança de TI", 19, 22, "description" },
        { "Probabilidade e Estatística", 7, 10, "description" }
    };

    // quantidade de structs (elementos na lista);
    int size = sizeof(lista) / sizeof(lista[0]);


    ShortestJobOrganize(lista,  size);
    printList(lista, size);
    ShortestJobFirst(lista,  size);

    EarliestFinishOrganize(lista,  size);
    printList(lista, size);
    EarliestFinishTime(lista, size);

    lastClassOrganize(lista, size);
    printList(lista,  size);
    lastClassFinish(lista, size);
}
