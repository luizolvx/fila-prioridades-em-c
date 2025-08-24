#ifndef FILA_PRIORIDADES_H
#define FILA_PRIORIDADES_H

#define MAX 100

typedef struct filaPrioridade FILAPRIO;

FILAPRIO *criaFila();
void liberaFilaPrio(FILAPRIO *fp);
int tamFilaPrio(FILAPRIO *fp);
int cheiaFilaPrio(FILAPRIO *fp);
int vaziaFilaPrio(FILAPRIO *fp);
void listaFilaPrio(FILAPRIO *fp);
int insertFilaPrio(FILAPRIO *fp, char *nome, int prio);
void confInsert(int result);
int consultaFilaPrio(FILAPRIO *fp, char *nome);
int removeFilaPrio(FILAPRIO *fp);

#endif
