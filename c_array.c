#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>

int *gerarVetor(int tamanho){
	//int* ptr = malloc(sizeof(int) * 6);
	//return ptr;
}

void preencherVetor(int *v, int tamanhoV){
	int i=0;
	for(i=0; i<tamanhoV; i++){
		v[i] = i+1;
	}
}
