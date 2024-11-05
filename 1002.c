#include <stdio.h>
 
int main() {
    double r;
    double a;
  //recebe dados
    scanf("%lf", &r);
  //faz conta da area
    a = r*r*3.14159;
    printf("A=%.4f\n",a);
    return 0;
}
