/*Problema #1.
Construir una matriz de 5 filas por 5 columnas, de números reales. 
Cargarla en tiempo de ejecución a través del teclado. 
Una vez finalizada la carga de la matriz, deberá buscar el máximo por cada fila e imprimir su posición. 
Imprimir el PROMEDIO de los elementos de la matriz.*/

#include <stdio.h>

int main()
{

    int row=4,col=4;
    float myMatrix[row][col];
    printf("this program executes a matrix 5x5 \n");
    for (int i = 0; i <= row; i++){
        int j=0;
        for (j; j <= col; j++){
            printf("please add the value to add on the matrix: ");
            scanf("%f",&myMatrix[i][j]);
        }

    }
    printf("The values on the matrix: \n");
    float valMax=0,prom=0,sum=0;
    int position=0;
    for (int x = 0; x <= row; x++){
        int y=0;
        valMax=myMatrix[x][y];
        for (y; y <= col; y++){
            if(myMatrix[x][y]>valMax){
                valMax=myMatrix[x][y];
                position=y;
            }
            printf("the max value is %f at the position [%d][%d] \t",valMax,x,position);
            sum=sum+myMatrix[x][y];
            printf("%f\t",myMatrix[x][y]);
        }
        printf("\n");
    }
    printf("the max value is %f at the position %d \t",valMax,position);
    prom=sum/25;
    printf("the prom is: %f",prom);


    return (0);
}