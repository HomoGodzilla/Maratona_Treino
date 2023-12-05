#include <stdio.h>
#include <stdbool.h>

typedef struct numeros
{
    int n;
    bool sorteado;
} numeros;

numeros bingo[5][5];

int VerificaLinhaeColuna(int number)
{
    int check = 0;
    for (int j = 0; j < 5; j++) // Procura o numero na cartela do Bingo e seta o valor de sorteado dele para 1.
    {
        for (int k = 0; k < 5; k++)
        {
            if (number == bingo[j][k].n)
            {
                bingo[j][k].sorteado = 1;
            }
        }
    }
    for (int j = 0; j < 5; j++) // Vefirica Linha
    {
        for (int k = 0; k < 5; k++)
        {
            if (bingo[j][k].sorteado)
                check++;
        }
        if (check == 5)
            return 1;
        else
            check = 0;
    }
    for (int j = 0; j < 5; j++) // Vefirica Coluna
    {
        for (int k = 0; k < 5; k++)
        {
            if (bingo[k][j].sorteado)
                check++;
        }
        if (check == 5)
            return 1;
        else
            check = 0;
    }
    for (int j = 0; j < 5; j++) // Vefirica Diagonal 1
    {
        if (bingo[j][j].sorteado)
            check++;
    }
    if (check == 5)
        return 1;
    else
        check = 0;
    for (int j = 0; j < 5; j++) // Vefirica Diagonal 2
    {
        if (bingo[4 - j][j].sorteado)
            check++;
    }
    if (check == 5)
        return 1;
    else
        check = 0;
    return 0;
}

int main()
{
    int count, temp, aux;

    scanf("%d", &count);
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            for (int k = 0; k < 5; k++)
            {
                if (j == 2 && k == 2)
                {
                    bingo[j][k].n = 0;
                    bingo[j][k].sorteado = 0;
                    continue;
                }
                scanf("%d", &bingo[j][k].n);
                bingo[j][k].sorteado = 0;
            }
        }
        aux = 0;
        temp = VerificaLinhaeColuna(0);
        for (int j = 1; j <= 75; j++)
        {
            scanf("%d", &temp);
            temp = VerificaLinhaeColuna(temp);
            if (temp == 1 && aux == 0)
            {
                aux = j;
            }
        }
        printf("BINGO after %d numbers announced\n", aux);
    }
    return 0;
}