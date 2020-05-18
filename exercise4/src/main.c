/*Problema#4
Realice un programa en C que lea números enteros hasta que el valor leído sea cero.
 Imprimir la cantidad de múltiplos de 17 se leyeron.
*/
#include <stdio.h>

int main()
{
	int inputNumbers;
	int cont=0;
	printf("this program calculates de multiplex of 17,please add a integer value\n");
	scanf("%d",&inputNumbers);
	while(inputNumbers!=0);{
		printf("please add a integer value\n");
		scanf("%d",&inputNumbers);
		if(inputNumbers%17==0)cont++;
	}
	

	printf("multiplex of 17  :");
	printf("%d\n", cont);
	return (0);
}