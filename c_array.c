#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>

//fun��o respons�vel por alocar espa�o em mem�ria e retornar um vetor correspondente
int *gerarVetor(int tamanho){
	int *v = (int *) malloc(sizeof(int) * tamanho);
	
	return (&v[0]);
}

//fun��o respons�vel por preencher o vetor de forma crescente
void preencherVetor(int *v, int tamanho){
	printf("Entrei na Preencher Vetor\n");
	int i=0;
	for(i=0; i<tamanho; i++){
		v[i] = i+1;
	}
}

//fun��o respons�vel por percorrer o vetor e apresentar seus valores
void apresentarVetor(int *v, int tamanho){
	printf("Entrei na Apresentar Vetor\n");
	int i;
	for(i=0; i<tamanho; i++){
		printf("O valor da %d posicao eh -> %d\n", (i+1), v[i]);
	}
}

//fun��o respons�vel por emnbaralhar os valores presentes no vetor
void embaralharVetor(int *v, int tamanho){

}

