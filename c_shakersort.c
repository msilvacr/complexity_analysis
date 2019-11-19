#include "h_sortingAlgorithms.h"


void shakesort(unsigned long int *v, unsigned long int tam, struct Registro *registro){

	int j,k,l,r, aux;

	l=1;

	r= k=tam-1;
	
	do {
		for (j=r; j>=l; j--){
			if (v[j-1]>v[j]) {
				aux=v[j-1];
				v[j-1] = v[j];
				v[j] = aux;
				k=j;
			}
		}
		
		l= k+1;

		for (j=l; j<=r; j++){
			if (v[j-1]>v[j]){
				aux=v[j-1];
				v[j-1] = v[j];
				v[j] = aux;
				k=j;
			}
		}

		r=k-1;
		
	} while (l<=r);
}

