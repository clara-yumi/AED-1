#include <stdio.h>
 
int main() {
    int a; int b; int c;
    scanf("%d %d %d", &a, &b, &c);
    int lista[3] = {a,b,c};
    int maior = lista[0];
    for(int i=0;i<3;i++){
        if(lista[i]>maior){
            maior = lista[i];
        }
    }
    printf("%d eh o maior\n", maior);
 
    return 0;
}
