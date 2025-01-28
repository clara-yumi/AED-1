#include <stdio.h>
#include <math.h>
 
int main() {
    double x1; double x2; double y1; double y2;
    double distancia;
    double x; double y;
    
    scanf("%lf %lf", &x1,&y1);
    scanf("%lf %lf", &x2,&y2);
    
    x = pow((x2-x1),2);
    y = pow((y2-y1),2);
    distancia = sqrt(x+y);
    
    printf("%.4lf\n", distancia);
    return 0;
}
