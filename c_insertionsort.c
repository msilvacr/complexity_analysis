#include "h_sortingAlgorithms.h"

void ins_direta(int *v, int tam){
   int aux, i, j;
   for (i=1; i<tam; i++)
   {
	 aux=v[i];
	 j=i-1;
	 while ((j>=0) && (aux<v[j]))
	 {
		v[j+1] = v[j];   // deslocando
		j--;
	 }
	 v[j+1]=aux;  // inserindo
   }
}

