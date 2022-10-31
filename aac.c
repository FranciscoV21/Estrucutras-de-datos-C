#include <stdio.h>
#define Size 4
//PROTOTIPOS
int Busqueda(int arr[Size], int n, int i);
void imprime(int Ubin);

int main()
{
    int arr[Size] = {1,3,5,6};
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
    if(n < arr[2])
    {
        for(i=0;i<2;i++)
        {
            if(n == arr[i] && n-1 == arr[i])
            {
                ubicacion = i;
            }else if( n-1 == arr[i]){
            ubicacion = i+1;
            }else if(n+1 == arr[i]){
                     ubicacion = i;
                     }


        }
        }else{
        for(i=2;i<4;i++)
        {
            if(n == arr[i] && n-1 ==  arr[i])
            {
                ubicacion = (i-1);
            }else if( n-1 == arr[i]){
            ubicacion = (i+1);
            }else if(n+1 == arr[i]){
                     ubicacion = (i-1);
                     }
        }
        }

 return(ubicacion);
}

void imprime(int Ubin)
{
    if(Ubin != -1)
    {
        printf("El valor se encuentra en la posicion numero: %d",Ubin);
    }else if(Ubin == 1)
    {
        printf("No se encontro el valor");
    }
}
