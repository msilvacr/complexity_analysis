#include "h_sortingAlgorithms.h"
#include "h_functionalities.h"

void intercala(unsigned long int e, unsigned long int meio, unsigned long int d, unsigned long int *v, struct Registro *registro){
	
	bool auxWhile;
	
	int i, j, k, *w;
	
	w =(int *) malloc((d-e)*sizeof(int));
	
	i=e; j=meio; k=0;
	
	registro->comparisons++; auxWhile = false; //COMPARA플O DO WHILE
	
	while (i<meio && j<d){ registro->complexity++; //COMPLEXIDADE
	
		if(auxWhile){  registro->comparisons++; }  auxWhile = true;  //COMPARA플O DO WHILE

		registro->comparisons++; //COMPARA플O
		if (v[i] < v[j]){ 
			w[k++]  = v[i++];   registro->arrayAccesses++; //ACESSO AO ARRAY
		}
		else{
			w[k++] = v[j++];    registro->arrayAccesses++; //ACESSO AO ARRAY
		}
	}
	
	registro->comparisons++; auxWhile = false; //COMPARA플O DO WHILE

	while (i<meio){  registro->complexity++; //COMPLEXIDADE

		if(auxWhile){  registro->comparisons++; }  auxWhile = true;  //COMPARA플O DO WHILE

		w[k++]=v[i++];  registro->arrayAccesses++; //ACESSO AO ARRAY
		
	}
	
	registro->comparisons++; auxWhile = false; //COMPARA플O DO WHILE
	
	while (j<d){  registro->complexity++; //COMPLEXIDADE

		if(auxWhile){  registro->comparisons++; }  auxWhile = true;  //COMPARA플O DO WHILE

		w[k++]=v[j++];  	registro->arrayAccesses++; //ACESSO AO ARRAY
		
	}
	
	
	for (i=e; i<d; ++i){  registro->complexity++; //COMPLEXIDADE
	
		v[i]=w[i-e];  registro->arrayAccesses++; //ACESSO AO ARRAY
		
	}
	
	
	free(w);
}

//void mergesort(int e,int d, int v[])
void mergesort(unsigned long int e, unsigned long int d, unsigned long int *v, struct Registro *registro){
	int meio;
	
	registro->comparisons++; //COMPARA플O
	
	if (e<d-1){ 
		meio= (e+d)/2;
		mergesort(e, meio, v, registro);
		mergesort(meio,d,v, registro);
		intercala(e, meio, d,v, registro);
	}
}

