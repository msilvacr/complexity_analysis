#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include<locale.h>
#include<windows.h>

struct Registro{
	//##
	char *Name; //nome do algor�tmo de ordena��o
	unsigned long int size = 0; //tamanho do vetor submetido a ordena��o
	unsigned long long int comparisons = 0; //total de compara��es realizadas na ordena��o
	unsigned long long int arrayAccesses = 0; //total de modifica��es na estrutura do vetor
	unsigned long long int complexity = 0; //contador padr�o (o que o professor quer ver
};


//Vetor
unsigned long int*gerarVetor(unsigned long int tamanho);//fun��o respons�vel por alocar espa�o em mem�ria e retornar um vetor correspondente
void preencherVetor(unsigned long int *v, unsigned long int tamanho);//fun��o respons�vel por preencher o vetor de forma crescente
void embaralharVetor(unsigned long int  *v, unsigned long int  tamanho);//fun��o respons�vel por emnbaralhar os valores presentes no vetor
void apresentarVetor(unsigned long int  *v, unsigned long int  tamanho);//fun��o respons�vel por percorrer o vetor e apresentar seus valores
void copiarValoresVetor(unsigned long int  *vOriginal, unsigned long int  *vCopia, unsigned long int tamanho); //fun��o respons�vel por inserir valores do vetorOriginal no vetorC�pia
long long busca_binaria(unsigned long int  *v, unsigned long int  tam,unsigned long int chave);

//Menu
void gotoxy(int x, int y);

int telaInicial();
int menuPrincipal();
int menuAlgoritmos();

void imprimirTituloResultado(char* titulo, int X, int Y, int size);
void imprimirCabecalho(int X, int Y, int size);
void imprimirResultado(struct Registro *registro, int X, int Y, int size);


int confirmacaoSair();
void finalizarAplicacao();
void limparTela();


//time
void waitFor (unsigned int secs);
