#include "h_functionalities.h"

//função responsável por alocar espaço em memória e retornar um vetor correspondente
int *gerarVetor(int tamanho){
	int *v = (int *) malloc(sizeof(int) * tamanho);
	
	return (&v[0]);
}

//função responsável por preencher o vetor de forma crescente
void preencherVetor(int *v, int tamanho){
	int i=0;
	for(i=0; i<tamanho; i++){
		v[i] = i+1;
	}
}

//função responsável por emnbaralhar os valores presentes no vetor
void embaralharVetor(int *v, int tamanho){
	int i, x, aux;

	for(i=0; i < tamanho; i++){
		x = 1 + ( rand() % (tamanho-1));
		aux = v[i];
		v[i] = v[x];
		v[x] = aux;
	}
}

//função responsável por percorrer o vetor e apresentar seus valores
void apresentarVetor(int *v, int tamanho){
	int i;
	for(i=0; i<tamanho; i++){
		printf("indice %d -> %d\n", i, v[i]);
	}
}

//função responsável por inserir valores do vetorOriginal no vetorCópia
void copiarValoresVetor(int *vOriginal, int *vCopia, int tamanho){
	int i;
	for(i = 0; i<tamanho; i++){
		vCopia[i] = vOriginal[i];
	}
}


