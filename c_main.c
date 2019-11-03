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
	int comparisons; //total de comparações realizadas na ordenação
	int arrayAccesses; //total de modificações na estrutura do vetor
	int totalTime; //tempo total para ordenação medido em unidades de segundo	
} nome, s;

//variáveis de escopo global
int main(){
	teste();
	return(1);
}

