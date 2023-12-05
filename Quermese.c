#include <stdio.h>

int main()
{

    int count, teste = 1, temp, result;
    scanf("%d", &count);
    while (count != 0)
    {
        for (int i = 1; i <= count; i++)
        {
            scanf("%d", &temp);
            fflush(stdin);
            if (temp == i)
            {
                result = temp;
            }
        }
        printf("Teste %d\n%d\n\n", teste, result);
        teste++;
        scanf("%d", &count);
    }
}