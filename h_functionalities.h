#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

int *gerarVetor(int tamanho);//função responsável por alocar espaço em memória e retornar um vetor correspondente
void preencherVetor(int *v, int tamanho);//função responsável por preencher o vetor de forma crescente
void embaralharVetor(int *v, int tamanho);//função responsável por emnbaralhar os valores presentes no vetor
void apresentarVetor(int *v, int tamanho);//função responsável por percorrer o vetor e apresentar seus valores
void copiarValoresVetor(int *vOriginal, int *vCopia, int tamanho); //função responsável por inserir valores do vetorOriginal no vetorCópia
int apresentarMenu();
void limparTela();
//void teste(typedef struct execucao metodo);
