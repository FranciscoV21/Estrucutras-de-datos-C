#include <stdio.h>
#define Size 10
//PROTOTIPOS
int Busqueda(int arr[Size], int n, int i);
void imprime();

int main()
{
    int arr[Size] = {4,20,38,45,67,88,110,137,149,182};
    int Ubin = -1;
    int n;
    int i=0;
    printf("Dame el valor que quieres encontrar: ");
    scanf("%d",&n);
    Ubin = Busqueda(arr,n,i);
    imprime(Ubin);
}
int Busqueda(int arr[Size], int n, int i)
{
    int ubicacion = 0;
    if(n < arr[5])
    {
        for(i=0;i<5;i++)
        {
            if(n == arr[i])
            {
                ubicacion = i;
            }
        }
    }else
    {
        for(i=6;i<10;i++)
        {
            if(n == arr[i])
            {
                ubicacion = i;
            }
        }
    }
 return(ubicacion);
}

void imprime(Ubin)
{
    if(Ubin != -1)
    {
        printf("El valor se encuentra en la posicion numero: %d",Ubin);
    }else if(Ubin == 1)
    {
        printf("No se encontro el valor");
    }
}

