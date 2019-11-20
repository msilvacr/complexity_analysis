#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

void bolha      (unsigned long int *v, unsigned long int tam, struct Registro *registro);
void selecao    (unsigned long int *v, unsigned long int tam, struct Registro *registro);
void ins_direta (unsigned long int *v, unsigned long int tam, struct Registro *registro);
void heapsort   (unsigned long int *v, unsigned long int tam, struct Registro *registro);
void mergesort  (unsigned long int *v, unsigned long int e, unsigned long int d, struct Registro *registro);
void shakesort  (unsigned long int *v, unsigned long int tam, struct Registro *registro);
void quicksort(unsigned long int *v, long int e, long int d, struct Registro *registro);

