#include "h_sortingAlgorithms.h"

/*
void heapsort(int v*, int n){
	//
}
*/
void peneira (int *v, int m, int p) {
	int x = v[p];
	while (2*p <= m) {
	   int f = 2*p;
	   if (f < m && v[f] < v[f+1]) ++f;
	   if (x >= v[f]) break;
	   v[p] = v[f]; p = f;
	}
	v[p] = x;
}


void heapsort (int *v, int n) {
	int p, m, x;
	for (p = n/2; p >= 1; --p){
	peneira (p, n, v);   	// monta um heap, partindo-se do vetor original
	}

	for (m = n; m >= 2; --m) {
		x = v[1];                	// coloca o maior na ultima posição
    	v[1] = v[m];
		v[m] = x;
		peneira (1, m-1, v);  	// reconstrói o heap desconsiderando o último
  }
}

