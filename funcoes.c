//
// Created by Marco Antonio on 11/11/2019.
//

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