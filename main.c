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