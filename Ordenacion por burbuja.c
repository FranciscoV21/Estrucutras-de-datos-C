#include <stdio.h>
#define N 10
#include <stdlib.h>
#include <time.h>
void Imprime(int A[N]);
void Burbuja(int A[N]);
int Intercambio(int* Num, int* Num2);

int main()
{
	int Arreglo[N] = {10, 9, 8, 7, 6, 5, 4, 3, 1, 0};

	Burbuja(Arreglo);
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

void Burbuja(int A[N])
{
	int cont, cont2;
	for(cont=1; cont < N; cont++){
		for(cont2=0; cont2 < N-cont; cont2++){
			if(A[cont2]>A[cont2+1]){
				Intercambio(&A[cont2], &A[cont2+1]);
			}
		}
	}
}
int Intercambio(int* Num, int* Num2)
{
	int temp;
	temp=*Num;
	*Num=*Num2;
	*Num2=temp;
}
