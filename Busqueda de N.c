#include <stdio.h>
#define No 9
//PROTOTIPOS
int BusquedaCiclos();
void imprime();
int BusquedaRecursivo(int arr[No],int n, int i);

int main()
{
    int arr[No] = {4,9,3,15,93,8,11,7,14,12};
    int n,Ubin,i=0;
    printf("Que numero quieres buscar: ");
    scanf("%d",&n);
    Ubin = BusquedaCiclos(arr,n,i);
    imprime(Ubin);
    Ubin = BusquedaRecursivo(arr,n,i);
    imprime(Ubin);
}

int BusquedaCiclos(int arr[No], int n, int i)
{
   int flag=-1;
   for(i=0;i<9;i++)
   {
       if(n == arr[i])
       {
           flag = i;
       }
   }
   return(flag);
}

void imprime(int Ubin)
{
    if(Ubin != -1)
    {
        printf("El numero a buscar se encontro en la poscision: %d\n",Ubin);
    }else{
    printf("No se encontro el numero que ingresaste\n");
    }
}

int BusquedaRecursivo(int arr[No],int n, int i)
{
    if(i>9)
    {
        return(-1);
    }
    else if(arr[i] == n)
    {
        return (i);
    }
    BusquedaRecursivo(arr,n,i+1);
}
