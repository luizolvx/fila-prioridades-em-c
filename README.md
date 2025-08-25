# Fila de Prioridades em C

Implementação de uma fila de prioridades em linguagem C para gerenciamento de pacientes em um sistema de atendimento. A estrutura mantém os elementos ordenados por prioridade garantindo que os pacientes com maior urgência sejam atendidos primeiro.

## Estrutura do Projeto

### Arquivos Principais
- `filaPrioridades.h` - Interface da fila com definições e protótipos
- `filaPrioridades.c` - Implementação completa das operações
- `main.c` - Programa demonstrativo com casos de uso
- `.gitignore` - Configuração para arquivos temporários

### Características da Implementação
- **Array estático** com capacidade máxima definida (100 elementos)
- **Ordenação por prioridade** (valores maiores têm maior prioridade)
- **Inserção ordenada** que mantém a fila sempre prioritizada
- **Operações eficientes** para sistemas de tempo real
- **Tratamento de erros** robusto com função de aborto controlado

## Funcionalidades Implementadas

### Operações Básicas
- `criaFila()` - Inicializa a estrutura da fila
- `liberaFilaPrio()` - Libera memória alocada
- `tamFilaPrio()` - Retorna quantidade de elementos
- `cheiaFilaPrio()` - Verifica se a fila está cheia
- `vaziaFilaPrio()` - Verifica se a fila está vazia

### Operações Principais
- `insertFilaPrio()` - Insere paciente com prioridade específica
- `consultaFilaPrio()` - Consulta próximo paciente a ser atendido
- `removeFilaPrio()` - Remove paciente da fila (atendimento)
- `listaFilaPrio()` - Exibe todos os pacientes em ordem de prioridade
- `confInsert()` - Função auxiliar para confirmação de inserção

## Exemplo de Saída

Paciente inserido com sucesso!
...

A Fila de atendimento possui 5 pacientes.

Listando todos os pacientes que aguardam atendimento:

- Nome do paciente: Joao Martins -> prioridade de atendimento: 5
- Nome do paciente: Jose da Silva -> prioridade de atendimento: 4
...

Atendendo os pacientes:
Chamando para atendimento o paciente: Joao Martins
...
Nao ha mais pacientes para serem atendidos.
