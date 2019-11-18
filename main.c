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

#define UP 38
#define DOWN 40
#define ENTER 13
#define ESC 27

#define RED 4
#define GREEN 2
#define BLACK 0
#define BLUE 1
#define WHITE 7

//variáveis de escopo global;
struct Registro registros[90], execucaoIsolada;

//funções primordiáis
void executarTodos(){
	int tamanho;
	long int i;
	int X=2, Y = 2;
	int size = 116;
	
	imprimirTituloResultado("Metricas de complexidade", X, Y, size); Y+=2; //pulando duas linhas
	imprimirCabecalho(X, Y, size); Y+=2;
	
	for(i = 1; i < 10; i++){
		unsigned long long int tamanho = pow(10, i);
		unsigned long int *v = gerarVetor(tamanho); //vetor BASE após preenchimento e embaralhação
		unsigned long int *vCopia = gerarVetor(tamanho); //cópia do vetor
		preencherVetor(v, tamanho); //preenchendo vetor de base
		embaralharVetor(v, tamanho); //embaralhando valores
		
		//INICIANDO MÉTODOS DE ORDENAÇÃO >
		/*
		copiarValoresVetor(v, vCopia, tamanho); //OPC 1 BUBBLE
		registros[10+i].Name = "Bubble";
		registros[10+i].size = tamanho;//definindo tamanho do vetor no registro
		bolha(v, tamanho, &registros[10+i]); //chamando método de ordenação
		imprimirResultado(&registros[10+i], X, Y, size); Y++;


		copiarValoresVetor(v, vCopia, tamanho); //OPC 2 SELECTION
		registros[20+i].Name = "Selection";
		registros[20+i].size = tamanho;
		selecao(v, tamanho, &registros[20+i]);
		imprimirResultado(&registros[20+i], X, Y, size); Y++;


		copiarValoresVetor(v, vCopia, tamanho); //OPC 3 INSERTION
		registros[30+i].Name = "Insertion";
		registros[30+i].size = tamanho;
		ins_direta(v, tamanho, &registros[30+i]);
		imprimirResultado(&registros[30+i], X, Y, size); Y++;
		*/

		copiarValoresVetor(v, vCopia, tamanho); //OPC 4 HEAP
		registros[40+i].Name = "Heap";
		registros[40+i].size = tamanho;
        heapsort(v, tamanho, &registros[30+i]);
		imprimirResultado(&registros[40+i], X, Y, size);
		
		
		/*
		copiarValoresVetor(v, vCopia,tamanho); //OPC 5 MERGE
		registros[50+i].Name = "Bubble";
		registros[50+i].size = tamanho;
		imprimirResultado(&registros[50+i], X, Y, size);

		copiarValoresVetor(v, vCopia, tamanho); //OPC 6 QUICK
		registros[60+i].Name = "Bubble";
		registros[60+i].size = tamanho;
		imprimirResultado(&registros[60+i], X, Y, size);
		
		copiarValoresVetor(v, vCopia, tamanho); //OPC 7 SHAKER
		registros[70+i].Name = "Bubble";
		registros[70+i].size = tamanho;
		imprimirResultado(&registros[70+i], X, Y, size);
		
		free(v);
		free(vCopia);
		*/
	}
}

void executarAlgoritmo(int algoritmo){
	
}


int main(){
	
	executarTodos();
	
	int escolha;
	telaInicial();
	limparTela();
	
	do{
		escolha = menuPrincipal();
		limparTela();
		switch(escolha){
			case 1:{ //iniciar analise de complexidade para todos algoritmos
				executarTodos();
				break;
			}
			case 2:{ //menu de algoritmos
				escolha = menuAlgoritmos();
				limparTela();
				switch(escolha){
					case -1: { //voltar
					
						break;
					}
					default: { //selecionou um algorítmo
						executarAlgoritmo(escolha);
						break;
					}
				}
				break;
			}
			case -1:{ // sair
				/////confirmar finalização do programa;
				int aux = confirmacaoSair();
				limparTela();
				if(aux == 2){
					escolha = -1;
				}
				else{
					escolha = 0;
				}
				/////
				break;
			}
			default:
				break;
		}
	}while(escolha != -1);
	
	finalizarAplicacao();


	/*telaInicial();
	int opc;

	if(opc == 1){
		executarTodos();
	}
	else if(opc ==2){


		opc = menuAlgoritmos();
		
		switch(opc):
			case 1:
				
		
	}
	
	
	
	
	
	
	
	
	/*
	char *str;
	//str = "deu ruim";
	
	//printf("%s", str);
	int i;
	//printf("Digita um numero ae\n");
	//scanf("%d", &i);

	int *v;
	v = gerarVetor(i);
	
	preencherVetor(v, i);

	embaralharVetor(v, i);
	
	apresentarVetor(v, i);
	
	heapsort(v, i);
	
	getch();
	
	limparTela();
	
	apresentarVetor(v, i);

	getch();
	*/
}

