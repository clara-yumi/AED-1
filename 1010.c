#include <stdio.h>
 
int main() {
    int codigo1; int n1; double valor1;
    int codigo2; int n2; double valor2;
    double total;
    scanf("%d %d %lf", &codigo1, &n1, &valor1);
    scanf("%d %d %lf", &codigo2, &n2, &valor2);
    total = n1*valor1 + n2*valor2;
    printf("VALOR A PAGAR: R$ %.2lf\n", total);
}
