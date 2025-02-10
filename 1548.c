#include <stdio.h>

void processa_caso(int M) {
    int notas[M];
    int notas_ordenadas[M];
    int i, j, temp, inalterados = 0;
    
    for (i = 0; i < M; i++) {
        scanf("%d", &notas[i]);
        notas_ordenadas[i] = notas[i];
    }

    for (i = 0; i < M - 1; i++) {
        for (j = 0; j < M - i - 1; j++) {
            if (notas_ordenadas[j] < notas_ordenadas[j + 1]) {
                temp = notas_ordenadas[j];
                notas_ordenadas[j] = notas_ordenadas[j + 1];
                notas_ordenadas[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < M; i++) {
        if (notas[i] == notas_ordenadas[i]) {
            inalterados++;
        }
    }
    printf("%d\n", inalterados);
}

int main() {
    int N, M, i;
    scanf("%d", &N);
    for (i = 0; i < N; i++) {
        scanf("%d", &M);
        processa_caso(M);
    }

    return 0;
}
