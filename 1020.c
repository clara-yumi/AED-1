#include <stdio.h>
 
int main() {
    int i;
    int dias;
    int meses;
    int anos;
    scanf("%d", &i);
  //opera para obter os dias os meses e os anos da idade recebida
    anos = i/365;
    meses = (i-(anos*365))/30;
    dias = i-(anos*365)-(meses*30);
    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias);
    return 0;
}
