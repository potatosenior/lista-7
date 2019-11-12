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

float exercicio13(float a, float b, char c)
{
    if (c == '+')
        return a+b;
    else
        if (c == '-')
            return a-b;
        else
            if (c == '*')
                return a*b;
            else
                if (c == '/')
                    return a/b;
}

void exercicio14(float dist, float litros)
{
    if (dist / litros < 8)
        printf("\nVenda o carro!");
    else
        if(dist / litros < 14)
            printf("\nEconomico!");
        else
            printf("\nMuito economico!");
}

void exercicio15(int a, int b, int c)
{
    if ( (a > b + c) || b > a + c || c > a + b)
    {
        printf("Nao formam um triangulo!");
        return;
    }else
    {
        if (a == b && a == c)
        {
            printf("O triangulo e equilatero!");
            return;;
        }else
            if ( (a == b && a != c) || (b == c && b != a) || (c == a && c != b))
            {
                printf("O triangulo e isosceles!");
                return;
            }
            else
            {
                printf("O triangulo e escaleno!");
                return;
            }
    }
}

void exercicio16(int qntd)
{
    for (int i = 0; i < qntd; ++i) {
        printf("=");
    }
}

int exercicio17(int a, int b)
{
    int soma = 0;

    if (b > a)
    {
        for (int i = a+1; i < b; ++i) {
            soma += i;
        }
        return soma;
    }else
        if (a > b)
        {
            for (int i = b+1; i < a; ++i) {
                soma += i;
            }
            return soma;
        }
        else
            return 0;
}

int exercicio18(int x, int z)
{
    int result = x, num = x;
    if (z == 0)
        return 1;

    for (int i = 1; i < z; ++i) {
        num = num*x;
        result = num;
    }
    return result;
}

int exercicio19(int num)
{
    int result = 2, ehprimo = 0;
    if (num < 2)
        return 0;

    for (int i = num; i >= 2; --i)
    {
        ehprimo = 1;
        for (int j = 2; j <= i; ++j) {
            if (i % j == 0 && j != i)
                ehprimo = 0;
        }
        if (ehprimo == 1)
            return i;
    }
    return result;
}

int exercicio20(int num)
{
    if(num == 0)
        return 1;

    for (int i = num; i > 1; --i) {
        num = num * (i-1);
    }
    return num;
}

int exercicio21(int num)
{
    int result = 0, ehprimo = 0;
    if (num < 2)
        return 0;

    for (int i = num; i >= 2; --i)
    {
        ehprimo = 1;
        for (int j = 2; j <= i; ++j) {
            if (i % j == 0 && j != i)
                ehprimo = 0;
        }
        if (ehprimo == 1)
            result++;
    }
    return result;
}

void exercicio22(int num)
{
    for (int i = 0; i < num; ++i) {
        for (int j = 0; j <= i; ++j) {
            printf("!");
        }
        printf("\n");
    }
}

void exercicio23(int num)
{
    printf("\n");
    for (int i = 0; i < num; ++i) {
        for (int j = 0; j <= i; ++j) {
            printf("*");
        }
        printf("\n");
    }
    for (int i = num-1; i >= 0; --i) {
        for (int j = 0; j < i; ++j) {
            printf("*");
        }
        printf("\n");
    }
}

void exercicio24(int num)
{
    for (int i = 0; i <= num; ++i) {
        for (int j = 0; j < num-i; ++j) {
            printf(" ");
        }
        for (int k = 0; k < 2 * i - 1; ++k) {
            printf("*");
        }
        printf("\n");
    }
}

float exercicio25(int num)
{
    float soma = 0;
    for (int i = 1; i <= num; ++i) {
        soma += (pow(i,2) + 1) / (i+3);
    }
    return soma;
}

int exercicio26(int num)
{
    int soma = 0;
    for (int i = 0; i < num; ++i) {
        soma += i;
    }
    return soma;
}

float exercicio27(int num)
{
    float somatoria = 0;

    for (int i = 0; i < 5; ++i) {
        if(i%2 == 0)
            somatoria += pow(num, 2*i+1) / exercicio20(2*i-1) ;
        else
            somatoria -= pow(num, 2*i+1) / exercicio20(2*i-1) ;
    }
    return somatoria;
}