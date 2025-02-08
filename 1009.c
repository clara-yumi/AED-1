#include <stdio.h>
 
int main() {
    char nome [50];
    double salario; double vendas; double total;
    scanf("%49[^\n]s", &nome);
    scanf("%lf", &salario);
    scanf("%lf", &vendas);
    total = salario + (vendas*0.15);
    printf("TOTAL = R$ %.2lf\n", total);
    return 0;
}
