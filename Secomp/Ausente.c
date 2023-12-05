#include <stdio.h>

int main(){
    int x1,aux,soma=0;

    scanf("%d",&x1);
    for (int i = 0; i < x1-1; i++)
    {
        scanf("%d",&aux);
        fflush(stdin);
        soma+=aux;
    }
    aux = 0;
    for (int i = 1; i <= x1; i++)
    {
        aux= aux + i;
    }
    printf("%d\n",aux-soma);
    return 0;
}