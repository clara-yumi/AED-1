#include <stdio.h>
#include <string.h>
#define maxNome 21

void Insercao(int n, char listaChamada[][maxNome]) {
    int i, j;
    char nomeTemp[maxNome];

    for (j = 1; j < n; j++) {
        strcpy(nomeTemp, listaChamada[j]);
        i = j - 1;

        while (i >= 0 && strcmp(listaChamada[i], nomeTemp) > 0) {
            strcpy(listaChamada[i + 1], listaChamada[i]);
            i--;
        }

        strcpy(listaChamada[i + 1], nomeTemp);
    }
}

int main() {
    int N, K;
    char listaChamada[100][maxNome];
    scanf("%d %d", &N, &K);

    for (int i = 0; i < N; i++) {
        scanf("%s", listaChamada[i]);
    }

    Insercao(N, listaChamada);
    printf("%s\n", listaChamada[K - 1]);

    return 0;
}
