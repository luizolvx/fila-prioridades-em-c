#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "filaPrioridades.h"

int main() {
    char nome[50];
    FILAPRIO *fp = criaFila();

    confInsert(insertFilaPrio(fp, "Marcelo Dantas", 2));
    confInsert(insertFilaPrio(fp, "Jose da Silva", 4));
    confInsert(insertFilaPrio(fp, "Joao Martins", 5));
    confInsert(insertFilaPrio(fp, "Claudio Menezes", 0));
    confInsert(insertFilaPrio(fp, "Antonio Angelo", 4));

    printf("\nA Fila de atendimento possui %d pacientes.\n\n", tamFilaPrio(fp));

    listaFilaPrio(fp);
    printf("\n");

    printf("Atendendo os pacientes:\n");
    while(consultaFilaPrio(fp, nome)) {
        printf("Chamando para atendimento o paciente: %s\n", nome);
        removeFilaPrio(fp);
    }
    printf("Nao ha mais pacientes para serem atendidos.\n\n");

    liberaFilaPrio(fp);
    return 0;
}
