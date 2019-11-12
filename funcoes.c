//
// Created by Marco Antonio on 11/11/2019.
//
#include "cabeccc.h"

int exercicio1(int num)
{
    return 2*num;
}

void exercicio2(char data[11])
{
    int dia = 0, mes = 0, ano = 0;
    char mess[20][12] = {"janeiro", "fevereiro", "marco", "abril", "maio", "junho", "julho", "agosto", "setembro", "outrobro", "novembro", "dezembro"};

    dia = ( (data[0] - 48) * 10) + (data[1] - 48);
    mes = (data[3] - 48) * 10 + data[4] - 48;
    ano = (data[6] - 48) * 1000 + (data[7] - 48) * 100 + (data[8] - 48) * 10 + data[9] - 48;

    printf("\n%d de %s de %d", dia, mess[mes-1], ano);
}

int exercicio3(int num)
{
    if (num > 0)
        return 1;
    else
        if (num < 0)
            return -1;
        else
            return 0;
}

int exercicio4(float num)
{
    if (sqrt(num) == (int)sqrt(num))
        return 1;
    else
        return 0;
}

float exercicio5(float raio)
{
    return (4/3)*pi*pow(raio, 3);
}

int exercicio6(int hora, int min, int seg)
{
    return (hora*60*60+min*60+seg);
}

float exercicio7(float celsius)
{
    return celsius*(9/5) + 32;
}

float exercicio8(int a, int b)
{
    return sqrt( pow(a, 2) + pow(b ,2) );
}

float exercicio9(float altura, float raio)
{
    return pi * pow(raio, 2) *altura;
}

int exercicio10(int a, int b)
{
    if (a > b)
        return 1;
    else
        if (b > a)
            return 2;
        else
            return 0;
}

int exercicio12(char num[])
{
    int soma = 0;

    for (int i = 0; i < strlen(num)-1; ++i) {
        soma += (num[i] - 48);
    }

    return soma;
}







