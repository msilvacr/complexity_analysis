#include "h_functionalities.h"

#define acima 72   //tecla up
#define abaixo 80  //tecla down
#define enter 13
#define esc 27
#define tamanhoTela 34
#define screenSize 120
#define XX 44
#define YY 3

void gotoxy(int x, int y){
	HANDLE hOut;
	COORD Position;

	hOut = GetStdHandle(STD_OUTPUT_HANDLE);

	Position.X = x;
	Position.Y = y;
	SetConsoleCursorPosition(hOut,Position);
}
 void limparTela(){
	system("cls");
}
int ponteiroMenu(int n){
	int ch, x = XX, y = YY+2, escolha;
	
	gotoxy(x,y);
	printf(">");

	while(1){
		ch=getch();
		if(ch==224){

		    switch ( getch() ){

				case acima :
			        if(y>YY+2){
						gotoxy(x,y);
						printf(" ");
						gotoxy(x,--y);
						printf(">");
					}
					break;

				case abaixo :
					if(y<=YY+n){
						gotoxy(x,y);
						printf(" ");
						gotoxy(x,++y);
						printf(">");
					}
					break ;
			default : break;

			}  fflush(stdin);
		}
		else if(ch==enter){
			escolha = y-YY-2+1;
			break;
		}
		else if(ch==esc){
			escolha=-1;
			break;
		}
	}
	return(escolha);

	system ("cls");
}
void imprimirTitulo(char* titulo, int X, int Y){
	int n =0;
	while (titulo[n] != 0x00)
	{
  		n++;
	}
	
	gotoxy(X,Y);
	int aux = (tamanhoTela-n)/2-3;
	int aux2=aux;
	if(aux*2+3 != tamanhoTela){
		if(aux*2+3 < tamanhoTela){
			aux+=1;
		}
		else{
			aux-=1;
		}
	}
	//printf("aux -> %d   aux2 -> %d, tamanhoTela -> %d", aux, aux2, tamanhoTela);
	printf(" �");
	int i;
	for(i = 0; i < aux; i++){
		printf("�");
	}
	printf(" %s ", titulo);
 	for(i = 0; i < aux2; i++){
		printf("�");
	}
	if(n%2==0)
		printf("�");
	else
		printf("Ŀ");
	printf("\n");
	gotoxy(X,Y+1);
	printf(" �                               �\n");
}
void imprimirOpcao(char opcao[], int X, int Y){
	int n =0;
	while (opcao[n] != 0x00)
	{
  		n++;
	}
	gotoxy(X,Y);
	int aux = (tamanhoTela-n)/2-3;
	int aux2=aux;
	if(aux*2+3 != tamanhoTela){
		if(aux*2+3 < tamanhoTela){
			aux+=1;
		}
		else{
			aux-=1;
		}
	}
	//printf("aux -> %d   aux2 -> %d, tamanhoTela -> %d", aux, aux2, tamanhoTela);
	printf(" �");
	int i;
	printf(" %s ", opcao);
	for(i = 0; i < aux; i++){
		printf(" ");
	}
 	for(i = 0; i < aux2; i++){
		printf(" ");
	}
	if(n%2==0)
		printf("�");
	else
		printf(" �");
	printf("\n");
}
void imprimirRodape(int X, int Y){
	gotoxy(X,Y++);
	printf(" �                               �");
	gotoxy(X,Y);
    printf(" ���������������������������������");
}


void imprimirTituloResultado(char* titulo, int X, int Y, int size){
	int n =0;
	while (titulo[n] != 0x00)
	{
  		n++;
	}

	gotoxy(X,Y);
	int aux = (size-n)/2-3;
	int aux2=aux;
	if(aux*2+3 != size){
		if(aux*2+3 < size){
			aux+=1;
		}
		else{
			aux-=1;
		}
	}

	printf(" �");
	int i;
	for(i = 0; i < aux; i++){
		printf("�");
	}
	printf(" %s ", titulo);
 	for(i = 0; i < aux2; i++){
		printf("�");
	}
	if(n%2==0)
		printf("�");
	else
		printf("Ŀ");
	printf("\n");
	gotoxy(X,Y+1);
	
	printf(" �");
	for(i = 0; i < size-3; i++){
		printf(" ");
	}
	printf("�\n");
	
	
	gotoxy(X,++Y);
	
	printf(" �");
	for(i = 0; i < size-3; i++){
		printf("�");
	}
	printf("�");
	
}
void imprimirCabecalho(int X, int Y, int size){
	int aux = size/5-4;
	int aux2=aux;
	int i;
	
	gotoxy(X,Y);
	if(aux*4+4 != size){
		if(aux*2+3 < size){
			aux+=1;
		}
		else{
			aux-=1;
		}
	}
	
	printf(" �");
	printf(" %s ", "Algoritmo");
	
 	//for(i = 0; i < aux-9; i++){
 	for(i = 0; i < aux-14; i++){ //tirei 5 espa�os
		printf("�");
	}
	printf("�");
	
	
	printf(" %s ", "Tamanho Vetor");
 	//for(i = 0; i < aux2-13; i++){
 	for(i = 0; i < aux2-18; i++){ //tirei 5 espa�os
		printf("�");
	}
	printf("�");
	
	
	printf(" %s ", "Complexidade");
 	//for(i = 0; i < aux2-12; i++){
 	for(i = 0; i < aux2-10; i++){ //adicionei 2 espa�os
		printf("�");
	}
	printf("�");
	
	
	printf(" %s ", "Comparacoes");
 	//for(i = 0; i < aux2-11; i++){
 	for(i = 0; i < aux2-7; i++){ //adicionei 4 espa�os
		printf("�");
	}
	printf("�");
	
	
	printf(" %s ", "Acessos ao Array");
 	//for(i = 0; i < aux2-13; i++){
 	for(i = 0; i < aux2-9; i++){ //adicionei 4 espa�os
		printf("�");
	}
	printf("�");

	printf("\n");
	gotoxy(X,Y+1);

	printf(" �");
	for(i = 0; i < size-3; i++){
		printf(" ");
	}
	printf("�\n");
}
void imprimirResultado(struct Registro *registro, int X, int Y, int size){
	int aux = size/5-4;
	int i;
	gotoxy(X,Y);
	int auxC = 0;
	while(registro->Name[auxC]!=0x00){
  		auxC++;
	}

	printf(" �");
	printf(" %s ", registro->Name);
 	//for(i = 0; i <= aux-auxC; i++){
 	for(i = 0; i <= aux-auxC-5; i++){ //TIREI 5 ESPA�OS
		printf(" ");
	}
	printf("�");
	
	
	auxC = log10(registro->size) + 1;
	if(auxC<0){ auxC = 1; }
	printf(" %llu ", registro->size);
 	//for(i = 0; i < aux-auxC; i++){
 	for(i = 0; i < aux-auxC-5; i++){ //tirei 05 ESPA�OS
		printf(" ");
	}
	printf("�");
	
	
	auxC = log10(registro->complexity) + 1;
	if(auxC<0){ auxC = 1; }
	printf(" %llu ", registro->complexity);
 	//for(i = 0; i < aux-auxC; i++){
 	for(i = 0; i < aux-auxC+2; i++){ //adicionei 02 ESPA�OS
		printf(" ");
	}
	printf("�");
	
	auxC = log10(registro->comparisons) + 1;
	if(auxC<0){ auxC = 1; }
	printf(" %llu ", registro->comparisons);
 	//for(i = 0; i < aux-auxC; i++){
 	for(i = 0; i < aux-auxC+4; i++){ //ADICIONEI 04 ESPA�OS
		printf(" ");
	}
	printf("�");

	auxC = log10(registro->arrayAccesses) + 1;
	if(auxC<0){ auxC = 1; }
	printf(" %llu ", registro->arrayAccesses);
 	//for(i = 0; i < aux-auxC+3; i++){
 	for(i = 0; i < aux-auxC+3+4; i++){ //adicionei 04 espa�os
		printf(" ");
	}
	printf("�");
	
}


int telaInicial(){
	int x = XX, y = YY, escolha;
	imprimirTitulo((char*)"Complexity Analysis", x, y);
	y+=2; //PULANDO A LINHA DE T�TULO E DE ESPA�O
	imprimirOpcao((char*)"Iniciar aplicacao", x, y++); //OPC 1
	imprimirRodape(x, y);
	
	return ponteiroMenu(1);
}
int menuPrincipal(){
	int x = XX, y = YY, escolha;
	imprimirTitulo((char*)"Menu Principal", x, y);
	y+=2; //PULANDO A LINHA DE T�TULO E DE ESPA�O
	imprimirOpcao((char*)"Analise de complexidade", x, y++); //OPC 1
	imprimirOpcao((char*)"Testar algoritmos", x, y++); //OPC 2
	imprimirRodape(x, y);
	
	return ponteiroMenu(2);
}
int menuAlgoritmos(){
	
	int x = XX, y = YY, escolha;
	imprimirTitulo((char*)"Menu de Algoritmos", x, y);
	y+=2; //PULANDO A LINHA DE T�TULO E DE ESPA�O
	imprimirOpcao((char*)"Bubble Sort", x, y++); //OPC 1
	imprimirOpcao((char*)"Selection Sort", x, y++); //OPC 2
	imprimirOpcao((char*)"Insertion Sort", x, y++); //OPC 3
	imprimirOpcao((char*)"Heap Sort", x, y++); //OPC 4
	imprimirOpcao((char*)"Merge Sort", x, y++); //OPC 5
	imprimirOpcao((char*)"Quick Sort", x, y++); //OPC 6
	imprimirOpcao((char*)"Shaker Sort", x, y++); //OPC 7
	imprimirRodape(x, y);

	return ponteiroMenu(7);
}
int confirmacaoSair(){
	int x = XX, y = YY, escolha;
	imprimirTitulo((char*)"Deseja mesmo sair?", x, y);
	y+=2; //PULANDO A LINHA DE T�TULO E DE ESPA�O
	imprimirOpcao((char*)"Sim", x, y++); //OPC 1
	imprimirOpcao((char*)"Nao", x, y++); //OPC 2
	imprimirRodape(x, y);

	int aux = ponteiroMenu(1);
	if(aux == -1){
		aux = 2;
	}
	return aux;
}
void finalizarAplicacao(){

}





