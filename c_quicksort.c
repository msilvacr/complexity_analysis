#include "h_sortingAlgorithms.h"
#include "h_functionalities.h"

/////quicksort
int particao (unsigned long int *v, long int e, long int d, struct Registro *registro){

	long int x, i, j, t;

	x = v[d];
	i = e -1;
	j = d;

	do {

		do{registro->complexity++; //COMPLEXIDADE

			i = i+1; /* esquerda*/

			registro->comparisons++; //COMPARAÇÃO
		} while ((v[i] < x) &&  (i < d));

		do{registro->complexity++; //COMPLEXIDADE

			j = j-1; /* direita*/

			registro->comparisons++; //COMPARAÇÃO
		} while ((v[j] > x) && (j > 0));

		t = v[i];
		v[i] = v[j]; registro->arrayAccesses++; //ACESSO ARRAY
		v[j]=t; registro->arrayAccesses++; //ACESSO ARRAY

		registro->comparisons++; //COMPARAÇÃO
	} while (j > i);

	// colocando o pivo a[d] em seu
	// lugar

	v[j] = v[i]; registro->arrayAccesses++; //ACESSO ARRAY
	v[i] = v[d]; registro->arrayAccesses++; //ACESSO ARRAY
	v[d] = t;    registro->arrayAccesses++; //ACESSO ARRAY

	return (i);
}


void quicksort(unsigned long int *v, long int e, long int d, struct Registro *registro){

	long int i;

	registro->comparisons++; //COMPARAÇÃO

    if (d > e){

		i = particao (v, e, d, registro);

      	quicksort(v, e, i-1, registro);

		quicksort(v, i+1, d, registro);
	}
}
