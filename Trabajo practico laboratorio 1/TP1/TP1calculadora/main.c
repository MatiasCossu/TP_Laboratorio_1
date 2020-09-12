#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"

int main()
{
    int opcion;
    int operadorA;
    int operadorB;
    int suma;
    int resta;
    float division;
    int multiplicacion;

    printf("BIENVENIDO A CALCULADORA\n");

    do
    {
        printf("\nEl operador A vale: %d \nEl operador B vale: %d\n",operadorA,operadorB);
        printf("1.Ingreso del operador A.\n2.Ingreso del operador B.\n3.Calcular todas las operaciones\n4.Resultados\n5.Salir\n");
        scanf("%d",&opcion);
        switch(opcion)
        {
            case 1:
                printf("1.Ingrese un numero para el operador A: ");
                scanf("%d",&operadorA);
                break;

            case 2:
                printf("Ingrese un numero para el operador B: ");
                scanf("%d",&operadorB);
                break;

            case 3:
                suma = SumaDeNumeros(operadorA,operadorB);
                resta = RestaDeNumeros(operadorA,operadorB);
                division = DivisionDeNumeros(operadorA,operadorB);
                multiplicacion = MultiplicacionDeNumeros(operadorA,operadorB);

                break;
            case 4:
                printf("La suma de  operador A y operador B es: %d\n", suma);
                printf("La resta de  operador A y operador B es: %d\n", resta);
                if(division ==0)
                {
                    printf("No es posible dividir por 0\n");
                }
                else
                {
                    printf("La division de  operador A y operador B es: %f\n", division);
                }
                printf("La multiplicacion de  operador A y operador B es: %d\n", multiplicacion);
                break;
        }
    }while(opcion !=5);
}
