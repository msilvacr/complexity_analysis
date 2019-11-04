///An�lise de complexidade algor�tmica
///APS 4� Semestre - UNIP Marqu�s
///autor: marlon cruz
///data de cria��o: 15/10/2019

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include "h_functionalities.h"
#include "h_sortingAlgorithms.h"

typedef struct Registro{
	//##
	char desktopID[100]; //ID da m�quina a qual est� sendo executado o c�digo
	char sortAlgorithmName[100]; //nome do algor�tmo de ordena��o 
	int *vetor;
	int size;
	int comparisons; //total de compara��es realizadas na ordena��o
	int arrayAccesses; //total de modifica��es na estrutura do vetor
	int totalTime; //tempo total para ordena��o medido em unidades de segundo	
} regExecucao;

//vari�veis de escopo global
int main(){
	int i;
	printf("Digita um numero ae\n");
	scanf("%d", &i);
	

	int *v;
	v = gerarVetor(i);
	preencherVetor(v, i);
	apresentarVetor(v, i);
	
}

