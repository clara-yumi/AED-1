#include <stdio.h>
#include <stdlib.h>


int main(){
    int n, m, c;
    int i, j, k, r;
    int numeros[200];
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        scanf("%d %d", &m, &c);
        for (j = 0; j < c; j++){
            scanf("%d", &numeros[j]);
        }
        for (k = 0; k < m; k++){
            printf("%d -> ", k);
            for (r = 0; r < c; r++){
                if (numeros[r]%m == k){
                    printf("%d -> ", numeros[r]);
                }
            }
            printf("\\\n");
        }
        if (i != n-1){
            printf("\n");
        }
        
    }
    return 0;
}
