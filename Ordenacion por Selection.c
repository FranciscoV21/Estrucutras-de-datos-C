#include <stdio.h>
#define N 10
#include <stdlib.h>
//Prototipos
int Intercambio(int* Num, int* Num2);
void Seleccion(int A[N]);
void Imprime(int A[N]);

int main()
{
	int Arreglo[N] = {10, 9, 8, 7, 6, 5, 4, 3, 1, 0};
	Seleccion(Arreglo);
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
void Seleccion(int A[N])
{
	int i, j, temp;
	for(i=0; i < N; i++){
		temp=i;
		for(j=i+1; j < N; j++){
			if(A[j]<A[temp]){
				temp=j;
			}
		}
		Intercambio(&A[i], &A[temp]);
	}
}
int Intercambio(int* Num, int* Num2)
{
	int temp;
	temp=*Num;
	*Num=*Num2;
	*Num2=temp;
}
