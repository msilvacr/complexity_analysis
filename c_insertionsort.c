#include "h_sortingAlgorithms.h"
#include "h_functionalities.h"
//finalizado

void ins_direta(unsigned long int *v, unsigned long int tam, struct Registro *registro){
	unsigned long int cont1=0, cont2=0;

   	int aux, i, j;
   
   	for (i=1; i<tam; i++){
   	
		cont1++; //CONTANDO FOR

		aux=v[i];

		j=i-1;

		while ((j>=0) && (aux<v[j])){ //NESTE CASO O CONTADOR NÃO SERÁ UNICO POIS PODERÁ ACONTECER DA CONDIÇÃO DO WHILE NÃO SER ATENDIDA NENHUMA VEZ ENQUANTO PERCORRE UMA VOTLA DO LOOP FOR
		
			cont2++; //CONTANDO WHILE QUANDO ENTRAR AQUI

			v[j+1] = v[j];  registro->arrayAccesses++; //ACESSO A ESTRUTURA DO ARRAY

			j--;

		}
		
		v[j+1]=aux; registro->arrayAccesses++; //acesso ao ARRAY
	
   }
   
   registro->complexity = cont1 * cont2;
   
}

