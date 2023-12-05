#include <stdio.h>

typedef struct
{
    int r;
    int count;
} elemento;


int main(){

    int AuxP,AuxM;
    elemento x[4];
    for (int i = 0; i < 4; i++)
    {
        x[i].count=0;
    }
    

    scanf("%d %d %d %d",&x[0].r,&x[1].r,&x[2].r,&x[3].r);
    for (int i = 0; i < 3; i++)
    {
        if(x[i].r>=4){
            printf("%d\n",i+1);
            return 0;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        AuxP=x[i].r+i;
        AuxM=i-x[i].r;
        if(AuxP>=0 && AuxP<=4){
            x[AuxP].count++;
        }
        if(AuxM>=0 && AuxM<=4){
            x[AuxM].count++;
        }
        for (int j = 0; j <= 3; j++)
        {
            if(x[j].count>=2){
                printf("%d\n",j+1);
                return 0;
            }
        }
    }
    
    
    

return 0;
}