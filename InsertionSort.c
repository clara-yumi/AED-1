#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int const TAM = 20000; 

int Separa (int p, int r, int v[]) {
    int c, j, k, t;
    c = v[r]; j = p;
    for (k = p; /*A*/ k < r; k++) {
        if (v[k] <= c) {
        t = v[j], v[j] = v[k], v[k] = t;
        j++;
        }
    }
    v[r] = v[j], v[j] = c;
    return j;
}

void Insercao (int n, int v[]) {
	int i, j, x;
	for (j = 1; /*A*/ j < n; j++) {
		x = v[j];
		for (i = j-1; i >= 0 && v[i] > x; i--)
			v[i+1] = v[i];
		v[i+1] = x;
	}
}

int main(){
    clock_t t; 
    int vetor[TAM];
    int a;
    
    
    srand((unsigned)time(NULL));

    
    for(a = 0; a < TAM; a++)
        vetor[a] = rand() % TAM;

    
    t = clock(); 
    Insercao(TAM-1,vetor);
    t = clock() - t; 

    printf("Tempo de execucao: %lf ms\n", ((double)t)/((CLOCKS_PER_SEC/1000)));

    return 0;
}
