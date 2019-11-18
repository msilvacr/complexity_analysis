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
	printf(" Ú");
	int i;
	for(i = 0; i < aux; i++){
		printf("Ä");
	}
	printf(" %s ", titulo);
 	for(i = 0; i < aux2; i++){
		printf("Ä");
	}
	if(n%2==0)
		printf("¿");
	else
		printf("Ä¿");
	printf("\n");
	gotoxy(X,Y+1);
	printf(" ³                               ³\n");
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
	printf(" ³");
	int i;
	printf(" %s ", opcao);
	for(i = 0; i < aux; i++){
		printf(" ");
	}
 	for(i = 0; i < aux2; i++){
		printf(" ");
	}
	if(n%2==0)
		printf("³");
	else
		printf(" ³");
	printf("\n");
}
void imprimirRodape(int X, int Y){
	gotoxy(X,Y++);
	printf(" ³                               ³");
	gotoxy(X,Y);
    printf(" ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");
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

	printf(" Ú");
	int i;
	for(i = 0; i < aux; i++){
		printf("Ä");
	}
	printf(" %s ", titulo);
 	for(i = 0; i < aux2; i++){
		printf("Ä");
	}
	if(n%2==0)
		printf("¿");
	else
		printf("Ä¿");
	printf("\n");
	gotoxy(X,Y+1);
	
	printf(" ³");
	for(i = 0; i < size-3; i++){
		printf(" ");
	}
	printf("³\n");
	
	
	gotoxy(X,++Y);
	
	printf(" À");
	for(i = 0; i < size-3; i++){
		printf("Ä");
	}
	printf("Ù");
	
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
	
	printf(" Ú");
	printf(" %s ", "Algoritmo");
	
 	//for(i = 0; i < aux-9; i++){
 	for(i = 0; i < aux-14; i++){ //tirei 5 espaços
		printf("Ä");
	}
	printf("¿");
	
	
	printf(" %s ", "Tamanho Vetor");
 	//for(i = 0; i < aux2-13; i++){
 	for(i = 0; i < aux2-18; i++){ //tirei 5 espaços
		printf("Ä");
	}
	printf("¿");
	
	
	printf(" %s ", "Complexidade");
 	//for(i = 0; i < aux2-12; i++){
 	for(i = 0; i < aux2-10; i++){ //adicionei 2 espaços
		printf("Ä");
	}
	printf("¿");
	
	
	printf(" %s ", "Comparacoes");
 	//for(i = 0; i < aux2-11; i++){
 	for(i = 0; i < aux2-7; i++){ //adicionei 4 espaços
		printf("Ä");
	}
	printf("¿");
	
	
	printf(" %s ", "Acessos ao Array");
 	//for(i = 0; i < aux2-13; i++){
 	for(i = 0; i < aux2-9; i++){ //adicionei 4 espaços
		printf("Ä");
	}
	printf("¿");

	printf("\n");
	gotoxy(X,Y+1);

	printf(" ³");
	for(i = 0; i < size-3; i++){
		printf(" ");
	}
	printf("³\n");
}
void imprimirResultado(struct Registro *registro, int X, int Y, int size){
	int aux = size/5-4;
	int i;
	gotoxy(X,Y);
	int auxC = 0;
	while(registro->Name[auxC]!=0x00){
  		auxC++;
	}

	printf(" Ú");
	printf(" %s ", registro->Name);
 	//for(i = 0; i <= aux-auxC; i++){
 	for(i = 0; i <= aux-auxC-5; i++){ //TIREI 5 ESPAÇOS
		printf(" ");
	}
	printf("¿");
	
	
	auxC = log10(registro->size) + 1;
	if(auxC<0){ auxC = 1; }
	printf(" %llu ", registro->size);
 	//for(i = 0; i < aux-auxC; i++){
 	for(i = 0; i < aux-auxC-5; i++){ //tirei 05 ESPAÇOS
		printf(" ");
	}
	printf("¿");
	
	
	auxC = log10(registro->complexity) + 1;
	if(auxC<0){ auxC = 1; }
	printf(" %llu ", registro->complexity);
 	//for(i = 0; i < aux-auxC; i++){
 	for(i = 0; i < aux-auxC+2; i++){ //adicionei 02 ESPAÇOS
		printf(" ");
	}
	printf("¿");
	
	auxC = log10(registro->comparisons) + 1;
	if(auxC<0){ auxC = 1; }
	printf(" %llu ", registro->comparisons);
 	//for(i = 0; i < aux-auxC; i++){
 	for(i = 0; i < aux-auxC+4; i++){ //ADICIONEI 04 ESPAÇOS
		printf(" ");
	}
	printf("¿");

	auxC = log10(registro->arrayAccesses) + 1;
	if(auxC<0){ auxC = 1; }
	printf(" %llu ", registro->arrayAccesses);
 	//for(i = 0; i < aux-auxC+3; i++){
 	for(i = 0; i < aux-auxC+3+4; i++){ //adicionei 04 espaços
		printf(" ");
	}
	printf("¿");
	
}


int telaInicial(){
	int x = XX, y = YY, escolha;
	imprimirTitulo((char*)"Complexity Analysis", x, y);
	y+=2; //PULANDO A LINHA DE TÍTULO E DE ESPAÇO
	imprimirOpcao((char*)"Iniciar aplicacao", x, y++); //OPC 1
	imprimirRodape(x, y);
	
	return ponteiroMenu(1);
}
int menuPrincipal(){
	int x = XX, y = YY, escolha;
	imprimirTitulo((char*)"Menu Principal", x, y);
	y+=2; //PULANDO A LINHA DE TÍTULO E DE ESPAÇO
	imprimirOpcao((char*)"Analise de complexidade", x, y++); //OPC 1
	imprimirOpcao((char*)"Testar algoritmos", x, y++); //OPC 2
	imprimirRodape(x, y);
	
	return ponteiroMenu(2);
}
int menuAlgoritmos(){
	
	int x = XX, y = YY, escolha;
	imprimirTitulo((char*)"Menu de Algoritmos", x, y);
	y+=2; //PULANDO A LINHA DE TÍTULO E DE ESPAÇO
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
	y+=2; //PULANDO A LINHA DE TÍTULO E DE ESPAÇO
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





