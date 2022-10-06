#include <stdio.h>
//PROTOTIPOS
int fibonacci(int lugar);
int main()
{
    int lugar;
    int fibonacci(int lugar);
    printf("Que lugar quieres de la serie fibonacci: ");
    scanf_s("%d", &lugar);

    printf("Numero Fibonacci = %d", fibonacci(lugar));
}
//SERIE FIBONACCI (1,1,2,3,5,8,13,21,34,55,89,144,233,377,610,987,1597)
int fibonacci(int lugar)
{
    if (lugar == 0)
        return(0);
    else if (lugar == 1)
        return(1);
    else
        return(fibonacci(lugar - 1) + fibonacci(lugar - 2));

}