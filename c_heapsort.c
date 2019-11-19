#include "h_sortingAlgorithms.h"
#include "h_functionalities.h"


void peneira (unsigned long int *v, unsigned long int tam, unsigned long int p, struct Registro *registro) {
	int x = v[p];
	bool auxWhile;
	
	registro->comparisons++; //COMPARAÇÃO DO WHILE
	auxWhile = false;
	
	while (2*p <= tam) {
		if(auxWhile){
			registro->comparisons++; //COMPARAÇÃO DO WHILE
		}
		
		registro->complexity++; //COMPLEXIDADE
		
	   	int f = 2*p;
	   
		registro->comparisons++; //COMPARAÇÕES
	   	if (f < tam && v[f] < v[f+1]){
	   		++f;
	   	}
	   
		registro->comparisons++; //COMPARAÇÕES
	   	if (x >= v[f]) {
	   		break;
	   	}
	   
	   	v[p] = v[f]; p = f; registro->arrayAccesses++; //ARRAY ACCESS
	   	
	   	auxWhile = true;
	}
	
	v[p] = x; registro->arrayAccesses++; //ARRAY ACCESS
}

void execHeapsort (unsigned long int *v, unsigned long int tam, struct Registro *registro) {
	int p, m, x;
	
	for (p = tam/2; p >= 1; --p){
		registro->complexity++; //COMPLEXIDADE
		
		peneira (v, tam, p, registro);   	// monta um heap, partindo-se do vetor original
		
	}

	for (m = tam; m >= 2; --m) {

		registro->complexity++; //COMPLEXIDADE

		x = v[1];                	// coloca o maior na ultima posição
		
    	v[1] = v[m];    registro->arrayAccesses++; //ARRAY ACCESS
		v[m] = x;       registro->arrayAccesses++; //ARRAY ACCESS
		
		peneira (v, m-1, 1, registro);  	// reconstrói o heap desconsiderando o último
		
  }
}

//FUNÇÃO AUXILIAR PARA MODIFICAR O VETOR E ADEQUALO AO METODO HEAPSORT V[1....N]
void heapsort(unsigned long int *v, unsigned long int  tam, struct Registro *registro){
	
	unsigned long int *vNovo = gerarVetor(tam+1);
	
	long long i;
	//transferindo valores do vetor original para o vetor auxiliar
	for(i = 0; i < tam; i++){
		vNovo[i+1] = v[i];
	}
	
	execHeapsort(vNovo, tam, registro);
	
	//transferindo valores do vetor auxiliar para o vetor original
	for(i = 0; i < tam; i++){
		v[i] = vNovo[i+1];
	}
	
	free(vNovo);
}

