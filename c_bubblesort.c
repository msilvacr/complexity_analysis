#include "h_sortingAlgorithms.h"
#include "h_functionalities.h"

//finalizado

void bolha(unsigned long int *v, unsigned long int tam, struct Registro *registro) {

  	int aux, troca, i, j;
  	j=tam-1;

    do{
	 	troca=0;
		for (i=0; i<j; i++){ registro->complexity++; //Contador padrão dentro do for que está dentro do While
		   if (v[i]>v[i+1]){ registro->comparisons++; //Comparação
	            aux=v[i]; registro->arrayAccesses++; //Acesso Array
			    v[i]=v[i+1]; registro->arrayAccesses++; //Acesso Array
			    v[i+1]=aux; registro->arrayAccesses++; //Acesso Array
			    troca=1;
			}
		}
	 	j--;
	}while(troca);
}

