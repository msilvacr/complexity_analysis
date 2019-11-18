#include "h_functionalities.h"


//função responsável por emnbaralhar os valores presentes no vetor
void embaralharVetor(unsigned long int *v, unsigned long int tamanho){
	int i, x, aux;

	for(i=0; i < tamanho; i++){
		x = 1 + ( rand() % (tamanho-1));
		aux = v[i];
		v[i] = v[x];
		v[x] = aux;
	}
}

//função responsável por preencher o vetor de forma crescente
void preencherVetor(unsigned long int *v, unsigned long int tamanho){
	int i=0;
	for(i=0; i<tamanho; i++){
		v[i] = i+1;
	}
}

//função responsável por alocar espaço em memória e retornar um vetor correspondente
unsigned long int *gerarVetor(unsigned long int tamanho){
	unsigned long int *v = (unsigned long int*) malloc(sizeof(unsigned long int) * tamanho);
	return (&v[0]);
}

//função responsável por percorrer o vetor e apresentar seus valores
void apresentarVetor(unsigned long int *v, int tamanho){
	int i;
	for(i=0; i<tamanho; i++){
		printf("indice %d -> %d\n", i, v[i]);
	}
}

//função responsável por inserir valores do vetorOriginal no vetorCópia
void copiarValoresVetor(unsigned long int *vOriginal, unsigned long *vCopia, unsigned long int tamanho){
	unsigned long int i;
	for(i = 0; i<tamanho; i++){
		vCopia[i] = vOriginal[i];
	}
}

long long busca_binaria(long long *v, long long tam, long long chave){
	long long inicio, fim, i;
	long long e=-1;
	inicio =0;
	fim = tam-1;

	i = (fim-inicio)/2;
	while(inicio!= i && fim != i){
		if(v[i]==chave){
			e=i;
			break;
		}
		else{
			if(v[i]>chave){
				fim = i;
				i = inicio + ((fim-inicio)/2);
			}
			else{
				inicio = i;
				i = fim - ((fim-inicio)/2);
			}
		}
	}
	return(e);
}


