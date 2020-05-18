/*Problema #3
	Escriba el código necesario para una función Swap(int x, int y) con parámetros de entrada 
	dos variables enteras, y que luego de ejecutarlo los valores de las variables 
	se hayan intercambiado.
*/
#include <stdio.h>
void swap(int* x, int* y){
    int aux=*y;
    *y=*x;
    *x=aux;
}

int main(){
    int a,b;
    printf("please add two values to swap\n");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("the value of a  is: %d\t",a);
    printf("the value of b  is: %d\n",b);
    swap(&a,&b);
    printf("the new value of a is: %d\t",a);
    printf("the new value of b is: %d\n",b);
    return (0);
}