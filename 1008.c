#include <stdio.h>
 
int main() {
    int n; int h; float val; float sal; 
    scanf("%d", &n);
    scanf("%d", &h);
    scanf("%f", &val);
    sal = h*val;
    printf("NUMBER = %d\nSALARY = U$ %.2f\n", n, sal);
    return 0;
}
