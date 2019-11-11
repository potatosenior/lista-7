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