#include "h_functionalities.h"
using namespace std;


void create_marks_csv(char *filename,int a[][3],int linhas,int colunas){

	printf("\n Creating %s.csv file",filename);

	FILE *fp;

	int i,j;

	filename=strcat(filename,".csv");

	fp=fopen(filename,"w+");

	fprintf(fp,"Physics| Chemistry| Maths");

	for(i=0; i<linhas; i++){

	    //fprintf(fp,"\n%d",i+1); inserir index nas linhas

	    for(j=0; j<colunas; j++){
	        fprintf(fp,"|%d ",a[i][j]);
		}
   }

	fclose(fp);

	printf("\n %sfile created",filename);

}


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
