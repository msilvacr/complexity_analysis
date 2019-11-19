#include "h_sortingAlgorithms.h"
#include "h_functionalities.h"
//finalizado

void ins_direta(unsigned long int *v, unsigned long int tam, struct Registro *registro){
	unsigned long long int cont1=0, cont2=0;

	bool auxWhile;
   	int aux, i, j;
   
   	for (i=1; i<tam; i++){
   	
		cont1+=1; //CONTANDO FOR

		aux=v[i];

		j=i-1;
		
		registro->comparisons++; auxWhile = false;   //COMPARAÇÃO DO WHILE
		
		while ((j>=0) && (aux<v[j])){ //NESTE CASO O CONTADOR NÃO SERÁ UNICO POIS PODERÁ ACONTECER DA CONDIÇÃO DO WHILE NÃO SER ATENDIDA NENHUMA VEZ ENQUANTO PERCORRE UMA VOTLA DO LOOP FOR

			if(auxWhile){ registro->comparisons++;  }//COMPARAÇÃO DO WHILE

			cont2+=1; //CONTANDO WHILE QUANDO ENTRAR AQUI

			v[j+1] = v[j];  registro->arrayAccesses++; //ACESSO A ESTRUTURA DO ARRAY

			j--;
			auxWhile = true;
		}
		
		v[j+1]=aux; registro->arrayAccesses++; //acesso ao ARRAY
	
   }
   if(cont1 == 0) { cont1 =1 ; }
   if(cont2 == 0) { cont2 =1 ; }
   registro->complexity = (unsigned long long int)cont1 * cont2;
   
}

