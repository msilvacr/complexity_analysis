#include "h_sortingAlgorithms.h"
#include "h_functionalities.h"

//FINALIZADO

void selecao(unsigned long int *v, unsigned long int tam, struct Registro *registro){
 int menor,posmenor, i, j;

	  for (i=0; i<tam; i++){
		menor=v[i];
		posmenor=i;
		for (j=i+1; j<tam; j++){
			registro->complexity++; //contador de complexidade
			
   			registro->comparisons++; //comparação
			if (v[j]<menor){
				

				
				menor=v[j];
				posmenor=j;
			}
		}
		
		v[posmenor]=v[i]; registro->arrayAccesses++; //acesso ao array

		v[i]=menor; registro->arrayAccesses++;  //acesso ao array

	}
}






