#include <stdio.h>
#include <string.h>

int main(){
    char aux,dna[1000000];
    int count=0,max=0;

    scanf("%s",dna);
    aux=dna[0];
    for (int i = 0; i < strlen(dna); i++)
    {
        if (dna[i]==aux)
        {
            count++;
        }
        else{
            count = 1;
        }
        if (max<count)
        {
            max=count;
        }
        aux=dna[i];
        
    }
    printf("%d\n",max);
    return 0;
}