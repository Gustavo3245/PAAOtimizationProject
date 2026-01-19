#ifndef TYPES_H
#define TYPES_H

// definindo a estrutura que compoem uma aula.

typedef struct {
    char name[50];
    int startTime;
    int endTime;
    char description[50];
}Aula;


void lastClassOrganize(Aula aulas[], int size);
void EarliestFinishOrganize(Aula aulas[], int size);
void ShortestJobOrganize(Aula aulas[], int size);

void ShortestJobFirst(Aula aulas[], int size);
void lastClassFinish(Aula aulas[], int size);
void EarliestFinishTime(Aula aulas[], int size);
#endif // !TYPES.H
