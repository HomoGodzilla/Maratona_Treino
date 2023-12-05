#include <stdio.h>


int main(){
    int casos,armadilhas, posicao[100],tempo[100],menor=500,aux;

    scanf("%d", &casos);
    for (int i = 0; i < casos; i++)
    {
        scanf("%d",&armadilhas);
        for (int j = 0; j < armadilhas; j++)
        {
            scanf("%d %d",&posicao[j],&tempo[j]);
            if(tempo[j]<=1){
                aux=posicao[j];  
            }
            if(tempo[j]%2==0){
                aux=((tempo[j]/2)-1)+posicao[j];
            }
            else{
                aux=((tempo[j]/2))+posicao[j];
            }
            if (aux<menor)
            {
                menor=aux;
            }
        }
        printf("%d\n",menor);
        menor=500;
    }
    




}