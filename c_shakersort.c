#include "h_sortingAlgorithms.h"
#include "h_functionalities.h"

void shakesort(unsigned long int *v, unsigned long int tam, struct Registro *registro){

	int j,k,l,r, aux;

	l=1;

	r= k=tam-1;
	
	do {
		
		for (j=r; j>=l; j--){ registro->complexity++; //COMPLEXIDADE
		
			registro->comparisons++; //COMPARAÇÃO
			if (v[j-1]>v[j]) {
				aux=v[j-1];
				v[j-1] = v[j];  registro->arrayAccesses++; //ACESSO ARRAY
				v[j] = aux;     registro->arrayAccesses++; //ACESSO ARRAY
				k=j;
			}
		}
		
		l= k+1;

		for (j=l; j<=r; j++){ registro->complexity++; //COMPLEXIDADE

			registro->comparisons++; //COMPARAÇÃO
			if (v[j-1]>v[j]){
				aux=v[j-1];
				v[j-1] = v[j];  registro->arrayAccesses++; //ACESSO ARRAY
				v[j] = aux;     registro->arrayAccesses++; //ACESSO ARRAY
				k=j;
			}
		}

		r=k-1;

		registro->comparisons++; //COMPARAÇÃO
		
	} while (l<=r);
}

