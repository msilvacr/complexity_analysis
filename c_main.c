///Análise de complexidade algorítmica
///APS 4º Semestre - UNIP Marquês
///autor: marlon cruz
///data de criação: 15/10/2019

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include "h_functionalities.h"
#include "h_sortingAlgorithms.h"

typedef struct Registro{
	//##
	char desktopID[100]; //ID da máquina a qual está sendo executado o código
	char sortAlgorithmName[100]; //nome do algorítmo de ordenação 
	int *vetor;
	int size;
	int comparisons; //total de comparações realizadas na ordenação
	int arrayAccesses; //total de modificações na estrutura do vetor
	int totalTime; //tempo total para ordenação medido em unidades de segundo	
} regExecucao;

//variáveis de escopo global
int main(){
	int i;
	printf("Digita um numero ae\n");
	scanf("%d", &i);
	

	int *v;
	v = gerarVetor(i);
	preencherVetor(v, i);
	apresentarVetor(v, i);
	
}

