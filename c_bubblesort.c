#include "h_sortingAlgorithms.h"
#include "h_functionalities.h"
//finalizado

void bolha(unsigned long int *v, unsigned long int tam, struct Registro *registro) {
  	int aux, troca, i, j;
  	j=tam-1;

    do{
	 	troca=0;
		for (i=0; i<j; i++){

			registro->complexity++; //Contador padr�o dentro do for que est� dentro do While

		   	registro->comparisons++; //Compara��o
		   	if (v[i]>v[i+1]){
		        aux=v[i]; registro->arrayAccesses++; //Acesso Array
				v[i]=v[i+1]; registro->arrayAccesses++; //Acesso Array
				v[i+1]=aux; registro->arrayAccesses++; //Acesso Array
				troca=1;
			}
		}
	 	j--;
	 	
	 	registro->comparisons++; //COMPARA��O DO WHILE
	}while(troca);
	
	registro->comparisons -= 1; //REMOVENDO UMA COMPARA��O ADICIONADA INDEVIDAMENTE (PELO FATO DE QUE DO WHILE N�O COMPARA NA PRIMERIA EXECU��O)
}

