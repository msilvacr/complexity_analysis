#include "h_sortingAlgorithms.h"
#include "h_functionalities.h"

/*
void heapsort(int v*, int n){
	//
}
*/

void peneira (unsigned long int *v, unsigned long int m, unsigned long int p) {
	int x = v[p];
	while (2*p <= m) {
	   int f = 2*p;
	   if (f < m && v[f] < v[f+1]) ++f;
	   if (x >= v[f]) break;
	   v[p] = v[f]; p = f;
	}
	v[p] = x;
}

void execHeapsort (unsigned long int *v, unsigned long int n) {
	int p, m, x;
	for (p = n/2; p >= 1; --p){
	peneira (v, n, p);   	// monta um heap, partindo-se do vetor original
	}

	for (m = n; m >= 2; --m) {
		x = v[1];                	// coloca o maior na ultima posição
    	v[1] = v[m];
		v[m] = x;
		peneira (v, m-1, 1);  	// reconstrói o heap desconsiderando o último
  }
}

//FUNÇÃO AUXILIAR PARA MODIFICAR O VETOR E ADEQUALO AO METODO HEAPSORT V[1....N]
void heapsort(unsigned long int *v, unsigned long int  n){
	
	unsigned long int *vNovo = gerarVetor(n+1);
	long long i;
	//transferindo valores do vetor original para o vetor auxiliar
	for(i = 0; i < n; i++){
		vNovo[i+1] = v[i];
	}
	
	execHeapsort(vNovo, n);
	
	//transferindo valores do vetor auxiliar para o vetor original
	for(i = 0; i < n; i++){
		v[i] = vNovo[i+1];
	}
	
	free(vNovo);
}

