#include <stdio.h>

// Verifica quadrado por quadrado comparando um índice de um vetor criado com os índices seguintes, retornando 0 caso tenha número repetido e 1 caso não tenha
int VerificaQuadrado(int matriz[9][9], int startL, int startC) {
    int numeros[9] = {0};
    int aux = 0;
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            numeros[aux] = matriz[startL + i][startC + j];
            aux++;		  
        }
	}
	for (int i = 0; i < 8; i++) {
		for (int j = i + 1; j < 9; j++) {
			if (numeros[i] == numeros[j] && numeros[i] != 0) {
				return 0; 
			}
		}
	}
    return 1; 
}

// Faz a repetição para todos os quadrados 3x3 da matriz  na instancia 'instancia', retornando 0 caso tenha número repetido e 1 caso não tenha
int VerificaTodosQuadrados(int matriz[9][9]) {
    for (int i = 0; i < 9; i += 3) {
        for (int j = 0; j < 9; j += 3) {
            if (!VerificaQuadrado(matriz, i, j)) {
                return 0;
            }
        }
    }
    return 1;
}

// Verifica se há algum elemento repetido na linha do índice analisado, retornando 0 caso tenha número repetido e 1 caso não tenha
int VerificaLinha(int matriz[9][9], int linha) {
    for (int i = 0; i < 8; i++) {
        for (int j = i + 1; j < 9; j++) {
            if (matriz[linha][i] == matriz[linha][j] && matriz[linha][i] != 0) {
                return 0;
            }
        }
    }
    return 1;
}

// Faz a repetição para cada linha da matriz 9x9 na instancia 'instancia', retornando 0 caso tenha número repetido e 1 caso não tenha
int VerificaTodasLinhas(int matriz[9][9]) {
    for (int i = 0; i < 9; i++) {
        if (!VerificaLinha(matriz, i)) {
            return 0;
        }
    }
    return 1;
}

// Faz a verificação da coluna analisando se há algum elemento repetido, retornando 0 caso tenha número repetido e 1 caso não tenha
int VerificaColuna(int matriz[9][9], int coluna) {
    for (int i = 0; i < 8; i++) {
        for (int j = i + 1; j < 9; j++) {
            if (matriz[i][coluna] == matriz[j][coluna] && matriz[i][coluna] != 0) {
                return 0;
            }
        }
    }
    return 1;
}

// Faz a repetição para todas as colunas da matriz 9x9 na instancia 'instancia', retornando 0 caso tenha número repetido e 1 caso não tenha
int VerificaTodasColunas(int matriz[9][9]) {
    for (int i = 0; i < 9; i++) {
        if (!VerificaColuna(matriz, i)) {
            return 0;
        }
    }
    return 1;
}

// Chama todas as verificações passando como parâmetro a matrizaux, que indica a instancia 'instancia', retornando 0 caso a matriz não seja solução e 1 caso seja
int VerificaSudoku(int matriz[9][9]) {
    if (VerificaTodosQuadrados(matriz) && VerificaTodasLinhas(matriz) && VerificaTodasColunas(matriz)) {
        return 1;
    }
    return 0;
}

int main() {
    int resp;
    int instancias = 0;
    scanf("%d", &instancias);
    int matriz[instancias * 9][9];
// Lê a matriz
    for (int i = 0; i < instancias * 9; i++) {
        for (int j = 0; j < 9; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

  // Cria a matriz auxiliar a partir das instâncias, que será passada como parâmetro 
    for (int n = 1; n <= instancias; n++) {
        int matrizaux[9][9];
        
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                matrizaux[i][j] = matriz[(n - 1) * 9 + i][j];
            }
        }

      // Da a resposta final para cada matriz auxiliar
        resp = VerificaSudoku(matrizaux);
        printf("Instancia %d\n", n);
        if (resp == 0){
            printf("NAO\n\n");
        }else{
            printf("SIM\n\n");
        }
 
    }

    return 0;
}
