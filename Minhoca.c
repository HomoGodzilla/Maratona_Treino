#include <stdio.h>
#include <stdlib.h>

int main()
{

    int linha, coluna, *mat, result,max=0,aux=0;
    scanf("%d %d", &linha, &coluna);
    mat = malloc(linha * coluna * sizeof(int *)); //Alocamento da Matriz
    //Montagem da matriz
    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            scanf("%d",&mat[(i * coluna) + j]);
            fflush(stdin);
            aux += mat[(i * coluna) + j];
        }
        if (aux>max){
            max=aux;
        }
        aux=0;
    }
    //Soma da Coluna
        for (int i = 0; i < coluna; i++)
    {
        for (int j = 0; j < linha; j++)
        {
            aux += mat[(j * coluna) + i];
        }
        if (aux>max){
            max=aux;
        }
        aux=0;
    }
    printf("%d\n",max);
    free(mat);
    return 0;
}