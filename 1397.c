#include <stdio.h>

int main() {
    int N;

    while (1) {
        scanf("%d", &N);
        if (N == 0) break;
        
        int pontos_jogador1 = 0, pontos_jogador2 = 0;
        
        for (int i = 0; i < N; i++) {
            int A, B;
            scanf("%d %d", &A, &B);
            if (A > B) pontos_jogador1++;
            else if (B > A) pontos_jogador2++;
        }

        printf("%d %d\n", pontos_jogador1, pontos_jogador2);
    }

    return 0;
}
