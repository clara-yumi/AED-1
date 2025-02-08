#include <stdio.h>
 
int main() {
    int A; int B; int C; int D; int DIF;
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    scanf("%d", &D);
    DIF = (A*B) - (C*D);
    printf("DIFERENCA = %d\n", DIF);
    return 0;
}
