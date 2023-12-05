#include <stdio.h>
#include <stdbool.h>

typedef struct
{
    bool bolinha;
} copos;


int main(){

    int count, auxA,auxB;
    copos x[3];

    x[2].bolinha=true; 
    scanf("%d",&count);
    for (int i = 0; i < count; i++)
    {
        scanf("%d %d",&auxA,&auxB);
        if(x[auxA].bolinha){
            x[auxA].bolinha=false;
            x[auxB].bolinha=true;
            continue;
        }
        if(x[auxB].bolinha){
            x[auxB].bolinha=false;
            x[auxA].bolinha=true;
        }
    }
    for (int i = 1; i <= 3; i++)
    {
        if(x[i].bolinha)printf("%d\n",i);
    }
    
    
    
    
    

return 0;
}