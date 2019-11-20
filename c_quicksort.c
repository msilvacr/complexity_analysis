#include "h_sortingAlgorithms.h"
#include "h_functionalities.h"

/////quicksort

int particao (unsigned long *v, unsigned long int e, unsigned long int d, struct Registro *registro){

	unsigned long int x, i, j, t;
	
	x = v[d];
	i = e -1;
	j = d;

	do {registro->complexity++; //COMPLEXIDADE
		
		do{registro->complexity++; //COMPLEXIDADE

			i = i+1; /* esquerda*/
			
			registro->comparisons++; //COMPARA플O
		} while ((v[i] < x) &&  (i < d));

		do{registro->complexity++; //COMPLEXIDADE

			j = j-1; /* direita*/
			
			registro->comparisons++; //COMPARA플O
		} while ((v[j] > x) && (j > 0));

		t = v[i];
		v[i] = v[j]; registro->arrayAccesses; //ACESSO ARRAY
		v[j]=t; registro->arrayAccesses; //ACESSO ARRAY
		
		registro->comparisons++; //COMPARA플O
	} while (j > i);

	// colocando o pivo a[d] em seu
	// lugar

	v[j] = v[i]; registro->arrayAccesses; //ACESSO ARRAY
	v[i] = v[d]; registro->arrayAccesses; //ACESSO ARRAY
	v[d] = t;    registro->arrayAccesses; //ACESSO ARRAY
	
	return (i);
}


void quicksort(unsigned long int *v, unsigned long int e, unsigned long int d, struct Registro *registro){

	unsigned long int i;

	registro->comparisons++; //COMPARA플O

    if (d > e){

		i = particao (v, e, d, registro);

      	quicksort(v, e, i-1, registro);

		quicksort(v, i+1, d, registro);
	}
}











/*
// A utility function to swap two elements
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

/* This function takes last element as pivot, places
   the pivot element at its correct position in sorted
    array, and places all smaller (smaller than pivot)
   to left of pivot and all greater elements to right
   of pivot
int partition (int arr[], int low, int high)
{
    int pivot = arr[high];    // pivot
    int i = (low - 1);  // Index of smaller element

    for (int j = low; j <= high- 1; j++)
    {
        // If current element is smaller than the pivot
        if (arr[j] < pivot)
        {
            i++;    // increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

/* The main function that implements QuickSort
 arr[] --> Array to be sorted,
  low  --> Starting index,
  high  --> Ending index
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now
           at right place
        int pi = partition(arr, low, high);

        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

*/



