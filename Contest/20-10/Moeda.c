#include <stdio.h>
#include <stdbool.h>

bool podeEsvaziarMontes(int a, int b) {
    // Cria uma matriz para armazenar os resultados intermediários
    bool dp[a + 1][b + 1];

    // Inicializa a matriz com valores falsos
    for (int i = 0; i <= a; i++) {
        for (int j = 0; j <= b; j++) {
            dp[i][j] = false;
        }
    }

    // Caso base: Se ambos os montes estiverem vazios, é possível esvaziá-los
    dp[0][0] = true;

    // Preenche a matriz usando programação dinâmica
    for (int i = 0; i <= a; i++) {
        for (int j = 0; j <= b; j++) {
            // Tente remover uma moeda do monte da esquerda e duas do monte da direita
            if (i >= 1 && j >= 2) {
                dp[i][j] = dp[i][j] || dp[i - 1][j - 2];
            }

            // Tente remover duas moedas do monte da esquerda e uma do monte da direita
            if (i >= 2 && j >= 1) {
                dp[i][j] = dp[i][j] || dp[i - 2][j - 1];
            }
        }
    }

    // O valor em dp[a][b] indica se é possível esvaziar ambos os montes
    return dp[a][b];
}

int main(){
    int count,a,b;

    scanf("%d",&count);
    for (int i = 0; i < count; i++)
    {
        scanf("%d %d",&a,&b);
        if (podeEsvaziarMontes(a, b)) {
        printf("YES\n");
        } 
        else {
        printf("NO\n");
        }
        
    }
    return 0;
}