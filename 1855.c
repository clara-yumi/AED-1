#include <stdio.h>
#include <stdlib.h>

int Numera(char mapa[100][100], int linha, int coluna){
    if (mapa[linha][coluna] == '*'){
        mapa[linha][coluna] = 'x';
        return 1;
    }
    if (mapa[linha][coluna]== '>'){ 
        mapa[linha][coluna] = 'x';
        return 2;
    }
    if (mapa[linha][coluna]== 'v'){
        mapa[linha][coluna] = 'x';
        return 3;
    }
    if (mapa[linha][coluna]== '<'){ 
        mapa[linha][coluna] = 'x';
        return 4;
    }
    if (mapa[linha][coluna]== '^'){
        mapa[linha][coluna] = 'x';
        return 5;
    }
    else{
        return 6;
    }
}
 

int Andar(char mapa[][100],int colunas, int linha,int coluna){   
    switch (Numera(mapa, linha, coluna)) {
        case 1:
            printf("*\n");
            exit(0);
        case 2:
            coluna++;
            while (mapa[linha][coluna] == '.'){
                coluna += 1;
            }
            Andar(mapa, colunas, linha, coluna);
        case 3:
            linha++;
            while (mapa[linha][coluna] == '.'){
                linha += 1;
            }
            Andar(mapa, colunas, linha, coluna);
        case 4:
            coluna--;
            while (mapa[linha][coluna] == '.'){
                coluna -= 1;
            }
            Andar(mapa, colunas, linha, coluna);
        case 5:
            linha--;
            while (mapa[linha][coluna] == '.'){
                linha -= 1;
            }
            Andar(mapa, colunas, linha, coluna);
        case 6:
            printf("!\n");
            exit(0);
    }

}

int main() {
    int colunas, linhas;
    scanf("%d", &colunas);
    scanf("%d", &linhas);
    char mapa[100][100];
    for (int i = 0; i < linhas; i++){
        scanf("%s", mapa[i]); 
    }
    Andar(mapa,colunas,0,0);
    

    return 0;
}
