int SumaDeNumeros(int a, int b)
{
    int suma=0;
    suma = a + b;
    return suma;
}
int RestaDeNumeros(int a, int b)
{
    int resta=0;
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
int MultiplicacionDeNumeros(int a, int b)
{
    int multiplicacion=0;
    multiplicacion = a * b;
    return multiplicacion;
}
