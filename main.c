#include <stdio.h>
#include <string.h>
#include <math.h>
#include "funcoes.c"

int main() {
    int exercicio = 1;

    while (exercicio != 0)
    {
        printf("\n\nDigite o exercicio: ");
        scanf("%d", &exercicio);
        setbuf(stdin, NULL);

        switch (exercicio)
        {
            case 1:
            {
                int numero, resultado;

                printf("Digite um numero: ");
                scanf("%d", &numero);

                resultado = exercicio1(numero);
                printf("O dobro de %d eh: %d", numero, resultado);
                break;
            }

            case 2:
            {
                char data[11];

                printf("Digite a data: ");
                fgets(data, 11, stdin);
                //printf("data: %s, %d", data, strlen(data));

                if (data[2] != '/' || data[5] != '/' || strlen(data) != 10){
                    printf("\nFormato invalido!");
                }else
                    exercicio2(data);

                break;
            }

            case 3:
            {
                int numero, resultado;

                printf("Digite um numero: ");
                scanf("%d", &numero);

                resultado = exercicio3(numero);
                printf("Resultado: %d", resultado);

                break;
            }

            case 4:
            {
                float numero;
                int resultado;

                printf("Digite um numero: ");
                scanf("%f", &numero);

                resultado = exercicio4(numero);
                if (resultado == 1)
                    printf("O numero e quadrado perfeito!");
                else
                    printf("O numero nao e quadrado perfeito!");

                break;
            }

            case 5:
            {
                float raio, volume;

                printf("Digite o raio da esfera: ");
                scanf("%f", &raio);
                volume = exercicio5(raio);
                printf("Volume da esfera: %.2f", volume);

                break;
            }

            case 6:
            {
                int hora, min, seg, total;

                printf("Digite as horas: ");
                scanf("%d", &hora);
                printf("Digite os minutos: ");
                scanf("%d", &min);
                printf("Digite os segundos: ");
                scanf("%d", &seg);
                total = exercicio6(hora, min, seg);
                printf("\nO horario informado tem um total de %d segundos!", total);
                break;
            }

            case 7:
            {
                float temp_celsius, temp_fah;

                printf("Digite a temperatura em graus celsius: ");
                scanf("%f", &temp_celsius);
                temp_fah = exercicio7(temp_celsius);
                printf("A temperatura %.2f celsius em fahrenheit e: %.2f!", temp_celsius, temp_fah);
                break;
            }

            case 8:
            {
                int cateto_a, cateto_b;
                float hipotenusa;

                printf("Digite o valor do primeiro cateto: ");
                scanf("%d", &cateto_a);
                printf("Digite o valor do segundo cateto: ");
                scanf("%d", &cateto_b);
                hipotenusa = exercicio8(cateto_a, cateto_b);
                printf("\nValor da hipotenusa: %.2f", hipotenusa);
                break;
            }

            case 9:
            {
                float altura, raio, volume;

                printf("Digite a altura do cilindro: ");
                scanf("%f", &altura);
                printf("Digite o raio do cilindro: ");
                scanf("%f", &raio);
                volume = exercicio9(altura, raio);
                printf("O volume do cilindro eh: %.2f", volume);
                break;
            }

            case 10:
            {
                int a, b, resultado;

                printf("Digite o primeiro numero: ");
                scanf("%d", &a);
                printf("Digite o segundo numero: ");
                scanf("%d", &b);
                resultado = exercicio10(a, b);
                if (resultado == 1)
                    printf("O primeiro numero e o maior!");
                else
                    if (resultado == 2)
                        printf("O segundo numero e o maior!");
                    else
                        printf("Os numeros sao iguais!");
                break;
            }

            case 11:
            {
                printf("vai toma no cu, ja fiz esse na aula da elaine");
                break;
            }

            case 12:
            {
                int resultado;
                char numero[50];

                printf("Digite um numero maior que zero: ");
                fgets(numero, 50, stdin);

                resultado = exercicio12(numero);

                if (resultado < 0)
                    printf("Numero invalido!");
                else
                    printf("Soma dos numeros: %d", resultado);

                break;
            }

            case 13:
            {
                float num_a, num_b, resultado;
                char caractere;

                printf("Digite o primeiro numero: ");
                scanf("%f", &num_a);
                printf("Digite o segundo numero: ");
                scanf("%f", &num_b);
                printf("Digite o simbolo (+, -, /, *): ");
                setbuf(stdin, NULL);
                caractere = getchar();
                if (caractere != '+' && caractere != '-' && caractere != '*' && caractere != '/')
                    printf("Simbolo invalido!");
                else
                {
                    resultado = exercicio13(num_a, num_b, caractere);
                    printf("\nO resultado para %.2f %c %.2f = %.2f", num_a, caractere, num_b, resultado);
                }
                break;
            }

            case 14:
            {
                float distancia, litros;

                printf("Digite a distancai percorrida: ");
                scanf("%f", &distancia);
                printf("Digite quantos litros foram consumidos: ");
                scanf("%f", &litros);
                exercicio14(distancia, litros);
                break;
            }

            case 15:
            {
                int lado_1, lado_2, lado_3;

                printf("Digite o valor do 1 lado do triangulo(somente valores positivos): ");
                scanf("%d", &lado_1);
                if (lado_1 < 0)
                {
                    printf("\nValor menor que 0!");
                    break;
                }
                printf("Digite o valor do 2 lado do triangulo(somente valores positivos): ");
                scanf("%d", &lado_2);
                if (lado_2 < 0)
                {
                    printf("\nValor menor que 0!");
                    break;
                }
                printf("Digite o valor do 3 lado do triangulo(somente valores positivos): ");
                scanf("%d", &lado_3);
                if (lado_3 < 0)
                {
                    printf("\nValor menor que 0!");
                    break;
                }
                exercicio15(lado_1, lado_2, lado_3);
                break;
            }

            case 16:
            {
                int qntd;

                printf("Digite o tamanho da linha: ");
                scanf("%d", &qntd);
                if (qntd > 0)
                    exercicio16(qntd);
                else
                    printf("Valor negativo! Digite somente positivos.");
                break;
            }

            case 17:
            {
                int num_1, num_2, resultado;

                printf("Digite o primeiro numero: ");
                scanf("%d", &num_1);
                printf("Digite o segundo numero: ");
                scanf("%d", &num_2);
                resultado = exercicio17(num_1, num_2);
                printf("Resultado: %d", resultado);
                break;
            }

            case 18:
            {
                int x, z, resultado;

                printf("Digite o valor da base: ");
                scanf("%d", &x);
                printf("Digite o valor do expoente: ");
                scanf("%d", &z);

                resultado = exercicio18(x, z);
                printf("Resultado para %d^%d = %d", x, z, resultado);
                break;
            }

            case 19:
            {
                int numero, resultado;

                printf("Digite um numero: ");
                scanf("%d", &numero);
                resultado = exercicio19(numero);
                if (numero == 0)
                    printf("Nao existe um maior fator primo para %d!", numero);
                else
                    printf("Maior fator primo: %d", resultado);
                break;
            }

            case 20:
            {
                int num, resultado;

                printf("Digite um numero: ");
                scanf("%d", &num);
                resultado = exercicio20(num);
                printf("\n%d! = %d", num, resultado);

                break;
            }

            case 21:
            {
                int numero, resultado;

                printf("Digite um numero: ");
                scanf("%d", &numero);
                resultado = exercicio21(numero);
                printf("Existem %d numeros primos menores que %d!", resultado, numero);

                break;
            }

            case 22:
            {
                int num;

                printf("Digite um numero: ");
                scanf("%d", &num);
                exercicio22(num);
                break;
            }

            case 23:
            {
                int num;

                printf("Digite um numero: ");
                scanf("%d", &num);
                exercicio23(num);
                break;
            }

            case 24:
            {
                int num;

                printf("Digite um numero: ");
                scanf("%d", &num);
                exercicio24(num);
                break;
            }

            case 25: {
                int num;
                float resultado;

                printf("Digite um numero: ");
                scanf("%d", &num);
                resultado = exercicio25(num);
                printf("Resultado: %.2f", resultado);
                break;
            }

            case 26:
            {
                int num, resultado;

                printf("Digite um numero: ");
                scanf("%d", &num);
                resultado = exercicio26(num);
                printf("Soma de 1 ate %d = %d", num, resultado);
                break;
            }

            case 27:
            {
                int num;
                float resultado;

                printf("Digite um numero: ");
                scanf("%d", &num);
                resultado = exercicio27(num);
                printf("Seno de %d = %.3f", num, resultado);
                break;
            }

            default:
            {
                if (exercicio == 0)
                    printf("\nSaindo do progama...");
                else
                    printf("\nExercicio invalido!");
                break;
            }
        }
    }

    return 0;
}