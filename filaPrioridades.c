
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "filaPrioridades.h"

struct paciente {
    char nome[51];
    int prio;
};

struct filaPrioridade {
    int qtd;
    struct paciente dados[MAX];
};

void abortaPrograma() {
    printf("ERROR! Fila de prioridades nao foi alocada, ");
    printf("programa sera encerrado...\n\n\n");
    system("pause");
    exit(1);
}

FILAPRIO *criaFila() {
    FILAPRIO *fp;
    fp = (FILAPRIO*) malloc(sizeof(FILAPRIO));
    if(fp != NULL) {
        fp->qtd = 0;
    }
    return fp;
}

void liberaFilaPrio(FILAPRIO *fp) {
    free(fp);
}

int tamFilaPrio(FILAPRIO *fp) {
    if(fp == NULL) {
        abortaPrograma();
    }
    return fp->qtd;
}

int cheiaFilaPrio(FILAPRIO *fp) {
    if(fp == NULL) {
        abortaPrograma();
    }
    return (fp->qtd == MAX);
}

int vaziaFilaPrio(FILAPRIO *fp) {
    if(fp == NULL) {
        abortaPrograma();
    }
    return (fp->qtd == 0);
}

void listaFilaPrio(FILAPRIO *fp) {
    int i;
    printf("Listando todos os pacientes que aguardam atendimento:\n\n");
    for(i = fp->qtd - 1; i >= 0; i--) {
        printf("Nome do paciente: %-17s prioridade de atendimento: %d\n",
               fp->dados[i].nome, fp->dados[i].prio);
    }
}

int insertFilaPrio(FILAPRIO *fp, char *nome, int prio) {
    if(fp == NULL) {
        abortaPrograma();
    }
    if(cheiaFilaPrio(fp)) {
        return 0;
    }
    int i = fp->qtd - 1;
    while(i >= 0 && fp->dados[i].prio >= prio) {
        fp->dados[i + 1] = fp->dados[i];
        i--;
    }
    strcpy(fp->dados[i + 1].nome, nome);
    fp->dados[i + 1].prio = prio;
    fp->qtd++;
    return 1;
}

void confInsert(int result) {
    if(result) {
        printf("Paciente inserido com sucesso!\n");
    } else {
        printf("Erro! Paciente nao inserido...\n");
    }
}

int consultaFilaPrio(FILAPRIO *fp, char *nome) {
    if(fp == NULL) {
        abortaPrograma();
    }
    if(vaziaFilaPrio(fp)) {
        return 0;
    }
    strcpy(nome, fp->dados[fp->qtd - 1].nome);
    return 1;
}

int removeFilaPrio(FILAPRIO *fp) {
    if(fp == NULL) {
        abortaPrograma();
    }
    if(vaziaFilaPrio(fp)) {
        return 0;
    }
    fp->qtd--;
    return 1;
}
