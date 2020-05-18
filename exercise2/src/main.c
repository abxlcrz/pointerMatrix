/*Problema #2.
Dados dos vectores de números enteros(digamos A y B)
Realice una función Suma_Vec(n, A,B) que sume los dos vectores elemento a elemento y el 
resultado lo guarde en segundo vector. 
Como parámetro de entrada la función debe tener la longitud “n” 
del vector, y los nombres de cada vector. 
*/

#include <stdio.h>

void sumArray(int n, int A[],int* B[]){
	int aux[n];
	for (int i = 0; i <=n; i++){
		aux[i]=B[i]+A[i];
		B[i]=aux[i];
	}
}
int main()
{	
	int lenght=0;
	printf("this program sum the values of the 2 arrays\n");
	printf("add the lenght of the arrays: ");
	scanf("%d",&lenght);
	lenght--;
	int myArray1[lenght],myArray2[lenght];
	for (int i = 0; i <=lenght; i++){
		printf("add the values of the first array[%d]:",i);
		scanf("%d",&myArray1[i]);
		printf("add the values of the second array[%d]:",i);
		scanf("%d",&myArray2[i]);
	}

	sumArray(lenght,myArray1,myArray2);
		for (int i = 0; i <=lenght; i++){
		printf("the sum of  myArray1[%d] and myArray2[%d] is :%d\n",i,i,myArray1[i]);
	}
	return (0);
}