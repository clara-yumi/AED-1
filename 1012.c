#include <stdio.h>
 
int main() {
    double A; double B; double C;
    double resultado;
    scanf("%lf %lf %lf", &A, &B, &C);
    
    resultado = A*C/2;  //area do triangulo
    printf("TRIANGULO: %.3lf\n", resultado);
    
    resultado = 3.14159*C*C;   //area do circulo de raio C
    printf("CIRCULO: %.3lf\n", resultado);
    
    resultado = (A+B)*C/2; //area do trapezio
    printf("TRAPEZIO: %.3lf\n", resultado);
    
    resultado = B*B;  //area do quadrado
    printf("QUADRADO: %.3lf\n", resultado);
    
    resultado = A*B;   //area do retangulo
    printf("RETANGULO: %.3lf\n", resultado);
    
    
    return 0;
}
