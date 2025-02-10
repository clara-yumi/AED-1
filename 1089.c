#include <stdio.h>

int conta_picos(int *amostras, int N) {
    int picos = 0;

    for (int i = 0; i < N; i++) {
        int anterior = amostras[(i - 1 + N) % N]; // Elemento anterior (considerando o loop)
        int atual = amostras[i];
        int proximo = amostras[(i + 1) % N];   // Elemento seguinte (considerando o loop)

        if ((atual > anterior && atual > proximo) || (atual < anterior && atual < proximo)) {
            picos++;
        }
    }

    return picos;
}

int main() {
    int N;

    while (1) {
        scanf("%d", &N);
        if (N == 0) break;

        int amostras[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &amostras[i]);
        }

        int resultado = conta_picos(amostras, N);
        printf("%d\n", resultado);
    }

    return 0;
}
