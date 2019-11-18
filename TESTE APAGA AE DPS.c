

#include "h_functionalities.h"

#define acima 80
#define abaixo 72
#define enter 13

//int screenSize = 120;


#include "h_functionalities.h"

#define acima 80
#define abaixo 72
#define enter 13

//int screenSize = 120;
/*
int subescolha(int e,int f){
	#define esquerda 75
    #define direita 77
    #define esc 27
    #define enter 13
	int ch,x,y,h,sair=0;
	x=33+f; //determina o inico de onde o curso comeca
	y=e;//y desce a linha


	//setlocale(LC_ALL, "Portuguese");
	while (sair!=1){
		gotoxy(x,y);
		printf(">");
		while (sair!=1){
			ch=getch();
			if(ch==224){
				switch ( getch() ){
					case direita :
					    if(x<57){
							gotoxy(x,y);
							printf(" ");
							gotoxy(x+=19,y);
							printf(">");
						}
						break;

					case esquerda :
						if(x>38){
							gotoxy(x,y);
							printf(" ");
							gotoxy(x-=19,y);
							printf(">");
						}
						break ;

	    		 		//case esc : return 1; sair=1; break;
						default :  break;
				}
			}else if(ch==enter){
				switch (x) {
					case 38:
						switch (e){
							case 7 : system("cls");
							case 8 : system("cls");
							case 9 : system("cls");
							case 10 : system("cls");
						} sair=1; break;
						case 57:  system("cls"); sair=1; break;
				}
			}else if(ch==esc) {
				return 1;
				sair=1;
				break;
			} //volta ao menu principal ao pressionar esc
		}
	}
}

void submenu(int X, int Y){



							gotoxy(X,Y++);	printf("           ÚÄÄÄÄÄÄÄ DESEJA VER O ENUNCIADO ÄÄÄÄÄÄ¿");
							gotoxy(X,Y++);	printf("========== ³        SIM                NAO       ³");
							gotoxy(X,Y++);  printf("           ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");

}


int escolha(int y){
	system("cls");

	 //textbackground(BLUE);
	int X=5,Y=5;
	switch(y){
		case 1:  break;

		case 7:  system("COLOR 17");
		 break;

		case 8: system("COLOR 17");
		break;

		case 9:  system("COLOR 17");
		break;

		case 10: system("COLOR 17");
		 break;

		case 11: system("COLOR 17");
		 break;

		 case 12: system("COLOR 17");
		 break;

		case 13:

				 //system("COLOR 04");
				 printf("\n\n\n \t\tFIM DO PROGRAMA.\t\t\n\n\n");

				 return 1;  break;

	}


	system("COLOR 07");
}


void menuAlgoritmos(int X,int Y){

	gotoxy(X,Y++);
	printf(" ÚÄÄÄÄÄÄÄÄ Menu Principal ÄÄÄÄÄÄ¿\n");
	gotoxy(X,Y++);
    printf(" ³                              ³\n");
    gotoxy(X,Y++);
	printf(" ³ 1%c QUESTAO                   ³\n",248);
	gotoxy(X,Y++);
	printf(" ³ 2%c QUESTAO                   ³\n",248);
	gotoxy(X,Y++);
	printf(" ³ 3%c QUESTAO                   ³\n",248);
	gotoxy(X,Y++);
	printf(" ³ 4%c QUESTAO                   ³\n",248);
	gotoxy(X,Y++);
	printf(" ³ 5%c QUESTAO                   ³\n",248);
	gotoxy(X,Y++);
	printf(" ³ 6%c QUESTAO                   ³\n",248);
	gotoxy(X,Y++);
	printf(" ³ EXIT                         ³\n");
	gotoxy(X,Y++);
    printf(" ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");

}

void gotoxy(int x, int y){
	HANDLE hOut;
	COORD Position;

	hOut = GetStdHandle(STD_OUTPUT_HANDLE);

	Position.X = x;
	Position.Y = y;
	SetConsoleCursorPosition(hOut,Position);
 }


void xx(){
	int ch,x,y,X,Y,voltar,recup;
	/*x=5; //desloca os submenu pra direita ou esquerda
	y=7;
	X=5; //desloca os menu pra direita ou esquerda
	Y=5;
	X = 25;
	Y = 15;

	x = X;
	y = Y+2;

	//setlocale(LC_ALL, "Portuguese");
	while(1){

		menuAlgoritmos(X,Y);
		gotoxy(x,y);

		printf(">");

		while(1){
			ch=getch();
			if(ch==224){

			    switch ( getch() ){

					case acima :
				        if(y<3){
							gotoxy(x,y);
							printf(" ");
							gotoxy(x,++y);

							printf(">");
						} break;


					case abaixo :
						if(y>7){
							gotoxy(x,y);
							printf(" ");
							gotoxy(x,--y);

							printf(">");

						}  break ;


				default : break;

				}  fflush(stdin);

			}else if(ch==enter){
				recup=y;
				if(y!=13){
					submenu(x+14,(y-1) );
					voltar=subescolha(y,x);
					if(voltar==1){
						y=1;
					}
				}
				if(escolha(y)==1){
					goto fim;
				}
				y=recup;
				 break;
			}
		}

			system ("cls");
	}

	fim:system("COLOR 07");


}
















/////

void telaInicial(){

	for(int i =0; i<3; i++){

		printf("                                                  Complexity Analysis");
		printf("                                           V 1.0.3");
		getch();
		limparTela();
	}
}

int menuOpcoes(){
	int aux = NULL;
	do{

		if(aux != NULL){
			printf("Opcao incorreta. Por favor, selecione uma opcao dentre as disponiveis.");
			getch();
			limparTela();
		}

		printf("Selecione a opcao desejada:\n");
		printf("\n\t1. Executar Aplicacao");
		printf("\n\t2. Testar Metodos de Ordenacao\n");

		scanf("%d", &aux);

		limparTela();

	}while(aux != 1 && aux != 2 || aux == NULL);

	return aux;
}

int menuAlgoritmos(){
	int aux = NULL;
	do{
		if(aux != NULL){
			printf("Opcao incorreta. Por favor, selecione uma opcao dentre as disponiveis.");
			getch();
			limparTela();
		}
		printf("Selecione a opcao desejada:\n");
		printf("\n\t1. Bubble Sort\n");
		printf("\n\t2. Selection Sort\n");
		printf("\n\t3. Insertion Sort\n");
		printf("\n\t4. Quick Sort\n");
		printf("\n\t5. Merge Sort\n");
		printf("\n\t6. Shaker Sort\n");
		printf("\n\t7. Heap Sort\n");

		scanf("%d", &aux);

		limparTela();

	}while(aux != 1 && aux != 2 && aux != 3 && aux != 4 && aux != 5 && aux != 6 && aux != 7 || aux == NULL);

	return aux;
}

void finalizarAplicacao(){

}

void limparTela(){
	system("cls");
}


void executarTodos(){


}*/
