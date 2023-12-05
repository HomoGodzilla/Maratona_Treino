#include <stdio.h>

int main(){
    int x1;

    scanf("%d",&x1);
    printf("%d ",x1);
    while (x1!=1)
    {
    if (x1%2==0)
    {
        x1/=2;
        printf("%d ",x1);
    }
    else{
        x1*=3;
        x1++;
        printf("%d ",x1);
    }

    }
    return 0;
    
}