#include <stdio.h>
#include <stdlib.h>
float pedirNumero(float);//esto en .h
float calcularArea(float);
int main()
{
float auxiliar;
    float area;
    float dato;
    auxiliar=pedirNumero(dato);
    area=calcularArea(auxiliar);
    printf("el area es %.2f", area);
    return 0;
}
float pedirNumero(float numero) //esto en .c
{


    printf("ingrese numeero: ");
    scanf("%f",&numero);
    printf("el numero es: %.2f\n",numero);


    return numero;
}

float calcularArea(float radio)
{

    float resultado;
    resultado=3.14 * radio * radio;


    return resultado;



}
