#include "h_sortingAlgorithms.h"

/////Bubble Sort
void bolha(int *v, int tam) {
  int aux, troca, i, j;
  j=tam-1;
  do {
	 	troca=0;
		for (i=0; i<j; i++)
		   if (v[i]>v[i+1])  {
		      aux=v[i];
		      v[i]=v[i+1];
		      v[i+1]=aux;
		      troca=1;
		   }
	 	j--;
      }while (troca);
}
