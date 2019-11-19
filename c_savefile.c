#include "h_functionalities.h"

using namespace std;

void salvarRegistros(struct Registro *registros){
	
	int i, j, linhas = 90, colunas = 5;
	
	char str[100];
	
	char *filename = str;
	
    printf("\n Enter the filename :");

	gets(filename);
	
	printf("\n Creating %s.csv file",filename);

	FILE *fp;

	filename=strcat(filename,".csv");

	fp=fopen(filename,"w+");

	fprintf(fp,"Algorítmo| Tamanho Vetor| Complexidade| Comparações| Modificações do Vetor");
	
	
	for(i=0; i<linhas; i++){
		
		
	    //fprintf(fp,"\n%d",i+1); inserir index nas linhas
		printf(" i = %ld    aux = %s   size =  %ld    complex = %llu   compar = %llu    arrayA = %llu\n", i, registros[i].Name, registros[i].size, registros[i].complexity, registros[i].comparisons, registros[i].arrayAccesses);
		
		if(registros[linhas].size != NULL){
			
			printf("%s", registros[i].Name);
			fprintf(fp,"\n%s |%llu |%llu |%llu |%llu ", registros[i].Name, registros[i].size, registros[i].complexity, registros[i].comparisons, registros[i].arrayAccesses);
			
		}
   }
   
	fclose(fp);

	printf("\n %sfile created",filename);
	
}













/*void create_marks_csv(char *filename, char a[][][256], int linhas, int colunas){

	printf("\n Creating %s.csv file",filename);

	FILE *fp;

	int i,j;

	filename=strcat(filename,".csv");

	fp=fopen(filename,"w+");

	fprintf(fp,"Algorítmo| Tamanho Vetor| Complexidade| Comparações| Modificações do Vetor");

	for(i=0; i<linhas; i++){

	    //fprintf(fp,"\n%d",i+1); inserir index nas linhas

	    for(j=0; j<colunas; j++){
	        fprintf(fp,"|%s ",a[i][j]);
		}
   }

	fclose(fp);

	printf("\n %sfile created",filename);

}

*/


/*void salvarRegistros(struct Registro registros[]){
	int size, i;
	size = sizeof(registros) / sizeof(struct Registro);
	int colunas = 5;
	char csv[size][colunas][256];

	for(i = 0; i<size; i++){
		//if(registros[i] != NULL){
			strcpy(csv[i][0], registros[i].Name);
			//sprintf(csv[i][0], "%llu", registros[i].Name);
			//sprintf(csv[i][1], "%llu", registros[i].size);

			//csv[i][2] = registros[i].complexity;
			//csv[i][3] = registros[i].comparisons;
			//csv[i][4] = registros[i].arrayAccesses;
		//}
	}
	
	limparTela();
	char str[100];
    printf("\n Enter the filename :");
    gets(str);
    
	create_marks_csv(str, csv, size, colunas);
}
*/

/*
int main(){

    int a[3][3]={{50,50,50},{60,60,60},{70,70,70}};

    char str[100];

    printf("\n Enter the filename :");

    gets(str);

create_marks_csv(str,a,3,3);

return 0;

}
*/
