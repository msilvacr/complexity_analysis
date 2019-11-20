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
void executar(int opc){
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


		if(opc == 1 || opc == 0){
			copiarValoresVetor(v, vCopia, tamanho); //OPC 1 BUBBLE
			registros[10+i].Name = "Bubble";
			registros[10+i].size = tamanho;//definindo tamanho do vetor no registro
			bolha(vCopia, tamanho, &registros[10+i]); //chamando método de ordenação
			imprimirResultado(&registros[10+i], X, Y, size); Y++;
		}

		if(opc == 2 || opc == 0){
			copiarValoresVetor(v, vCopia, tamanho); //OPC 2 SELECTION
			registros[20+i].Name = "Selection";
			registros[20+i].size = tamanho;
			selecao(vCopia, tamanho, &registros[20+i]);
			imprimirResultado(&registros[20+i], X, Y, size); Y++;
		}

		if(opc == 3 || opc == 0){
			copiarValoresVetor(v, vCopia, tamanho); //OPC 3 INSERTION
			registros[30+i].Name = "Insertion";
			registros[30+i].size = tamanho;
			ins_direta(vCopia, tamanho, &registros[30+i]);
			imprimirResultado(&registros[30+i], X, Y, size); Y++;
		}

		if(opc == 4 || opc == 0){
			copiarValoresVetor(v, vCopia, tamanho); //OPC 4 HEAP
			registros[40+i].Name = "Heap";
			registros[40+i].size = tamanho;
	        heapsort(vCopia, tamanho, &registros[40+i]);
			imprimirResultado(&registros[40+i], X, Y, size); Y++;
		}

		if(opc == 5 || opc == 0){
			copiarValoresVetor(v, vCopia,tamanho); //OPC 5 MERGE
			registros[50+i].Name = "Merge";
			registros[50+i].size = tamanho;
			mergesort(vCopia, 0, tamanho-1, &registros[50+i]);
			imprimirResultado(&registros[50+i], X, Y, size); Y++;
		}

		if(opc == 6 || opc == 0){
			copiarValoresVetor(v, vCopia, tamanho); //OPC 6 QUICK
			registros[60+i].Name = "Quick";
			registros[60+i].size = tamanho;
			long int tAux = (long int) tamanho-1;
			quicksort(vCopia, 0, tAux, &registros[60+i]);
			imprimirResultado(&registros[60+i], X, Y, size); Y++;
		}

		if(opc == 7 || opc == 0){
			copiarValoresVetor(v, vCopia, tamanho); //OPC 7 SHAKER
			registros[70+i].Name = "Shaker";
			registros[70+i].size = tamanho;
			shakesort(vCopia, tamanho, &registros[70+i]);
			imprimirResultado(&registros[70+i], X, Y, size); Y++;
		}
		
		free(v);
		free(vCopia);
	}
	gotoxy(X, ++Y);
	
	printf("\nOrdenacoes concluidas. Pressione uma tecla para continuar...");
	getch();
	salvarRegistros(&registros[0]);
}


int main(){
	/*
	executar(0); ////////////////////////////////////////////////////////////////////////////////////
	getch();
	getch();
	*/
	int escolha;
	telaInicial();
	limparTela();
	
	inicio:
	do{
		escolha = menuPrincipal();
		limparTela();
		switch(escolha){
			case 1:{ //iniciar analise de complexidade para todos algoritmos
				executar(0); ////////////////////////////////////////////////////////////////////////////
				break;
			}
			case 2:{ //menu de algoritmos
				while(true){
					escolha = menuAlgoritmos();
					limparTela();
					switch(escolha){
						case 1: {
							executar(1);
							break;
						}
						case 2: {
							executar(2);
							break;
						}
						case 3: {
							executar(3);
							break;
						}
						case 4: {
							executar(4);
							break;
						}
						case 5: {
							executar(5);
							break;
						}
						case 6: {
							executar(6);
							break;
						}
						case 7: {
							executar(7);
							break;
						}
						case -1: { //voltar
							goto inicio;
						}
						default: { //selecionou um algorítmo
							break;
						}
					}
					break;
				}
			}
			
			case -1:{ // sair
				/////confirmar finalização do programa;
				int aux = confirmacaoSair();
				//limparTela();
				//printf("%d", aux);
				//getch();
				limparTela();
				if(aux == 1){
					goto fim;
				}
				else {
					escolha = 0;
					break;
				}
			}
		}
	}while(escolha != -1);
	
	fim: finalizarAplicacao();

	return (0);
}

