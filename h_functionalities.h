#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

int *gerarVetor(int tamanho);//fun��o respons�vel por alocar espa�o em mem�ria e retornar um vetor correspondente
void preencherVetor(int *v, int tamanho);//fun��o respons�vel por preencher o vetor de forma crescente
void embaralharVetor(int *v, int tamanho);//fun��o respons�vel por emnbaralhar os valores presentes no vetor
void apresentarVetor(int *v, int tamanho);//fun��o respons�vel por percorrer o vetor e apresentar seus valores
void copiarValoresVetor(int *vOriginal, int *vCopia, int tamanho); //fun��o respons�vel por inserir valores do vetorOriginal no vetorC�pia
int apresentarMenu();
void limparTela();
//void teste(typedef struct execucao metodo);
