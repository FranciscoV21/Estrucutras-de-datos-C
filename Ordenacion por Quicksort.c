#include <stdio.h>
#define N 10
#include <stdlib.h>
//Prototipos
void Quicksort(int A[N],int Ini, int Fin);
void Imprime(int A[N]);

int main()
{
	int Arreglo[N] = {10, 9, 8, 7, 6, 5, 4, 3, 1, 0};
	Quicksort(Arreglo, 0, N);
	Imprime(Arreglo);
}
void Imprime(int A[N])
{
	int i;
	printf("Datos del Arreglo: \n");
	for(i=0; i < N; i++){
		printf("%d\n", A[i]);
	}
}
void Quicksort(int A[N],int izq, int der)
{
	int i=izq, j=der, temp;
	int p=A[(izq+der)/2];
	while(i<=j){
		while(A[i]<p){
			i++;
		}
		while(A[j]>p){
			j--;
		}
		if(i<=j){
			temp = A[i];
			A[i]=A[j];
			A[j]=temp;
			i++;
			j--;
		}
	}
	if(izq < j){
		Quicksort(A, izq, j);
	}
	if(i < der){
		Quicksort(A, i, der);
	}
}
