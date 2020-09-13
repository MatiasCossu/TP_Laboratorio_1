#include "Funciones.h"
float SumaDeNumeros(float a, float b)
{
    float suma=0;
    suma = a + b;
    return suma;
}

float RestaDeNumeros(float a, float b)
{
    float resta=0;
    resta = a - b;
    return resta;
}

float DivisionDeNumeros(float a, float b)
{
    float division = 0;

    if (a ==0 || b ==0)
    {
        division =0;
    }
    else
    {
        division = a / b;
    }

    return division;
}

float MultiplicacionDeNumeros(float a, float b)
{
    float multiplicacion=0;
    multiplicacion = a * b;
    return multiplicacion;
}

 float FactorialNumero(float a)
{
    int i;
    float factorial;
    float factorizacion;
    factorizacion=1;
    factorial=factorizacion;

    if (a<0){
        factorial=0;
    }
    else
    {
        for (i=0;i<a-1;i++)
        {
            factorizacion = factorizacion * (a-i);
            factorial = factorizacion;
        }
    }
    return factorial;
}
