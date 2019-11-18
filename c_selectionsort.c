#include "h_sortingAlgorithms.h"
#include "h_functionalities.h"

//FINALIZADO

void selecao(int *v, int tam, struct Registro registro){
	int menor,posmenor, i, j;
	  for (i=0; i<tam; i++)
	  {
		 menor=v[i]; posmenor=i;
		 for (j=i+1; j<tam; j++)
			 if (v[j]<menor)
			 {
				 menor=v[j];
				 posmenor=j;
			 }
		 v[posmenor]=v[i];
		 v[i]=menor;
	}
}






