#include <iostream>

using namespace std;

const int MAX_M = 20;
const int MAX_N = 25;

void lerMatriz(int matriz[MAX_M][MAX_N], int M, int N) {
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cin >> matriz[i][j];
        }
    }
}

void calcularTransposta(int matriz[MAX_M][MAX_N], int transposta[MAX_N][MAX_M], int M, int N) {
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            transposta[j][i] = matriz[i][j];
        }
    }
}

void multiplicarPorK(int matriz[MAX_M][MAX_N], int resultado[MAX_M][MAX_N], int M, int N, int K) {
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            resultado[i][j] = matriz[i][j] * K;
        }
    }
}

void somarMatrizes(int matriz1[MAX_M][MAX_N], int matriz2[MAX_M][MAX_N], int resultado[MAX_M][MAX_N], int M, int N) {
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}

void exibirMatriz(int matriz[MAX_M][MAX_N], int M, int N) {
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

// Sobrecarga para exibir matrizes com diferentes dimensoes
void exibirMatriz(int matriz[MAX_N][MAX_M], int M, int N) {
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int M, N, K;
    int matriz[MAX_M][MAX_N], transposta[MAX_N][MAX_M];
    int matrizMultiplicada[MAX_M][MAX_N], matrizSoma[MAX_M][MAX_N];
    int matriz2[MAX_M][MAX_N];

    cout << "Digite as dimensoes M da matriz (M<=20): ";
    cin >> M;
    cout << "Digite as dimensoes N da matriz (N<=25): ";
    cin >> N;

    if (M > MAX_M || N > MAX_N) {
        cout << "Dimensoes invalidas!" << endl;
        return 1;
    }

    cout << "Digite os elementos da matriz: " << endl;
    lerMatriz(matriz, M, N);

    calcularTransposta(matriz, transposta, M, N);
    cout << "Matriz transposta: " << endl;
    exibirMatriz(transposta, N, M);

    cout << "Digite o valor de K para multiplicacao da matriz: ";
    cin >> K;
    multiplicarPorK(matriz, matrizMultiplicada, M, N, K);
    cout << "Matriz multiplicada por " << K << ": " << endl;
    exibirMatriz(matrizMultiplicada, M, N);

    cout << "Digite os elementos da segunda matriz para soma: " << endl;
    lerMatriz(matriz2, M, N);
    somarMatrizes(matriz, matriz2, matrizSoma, M, N);
    cout << "Soma das matrizes: " << endl;
    exibirMatriz(matrizSoma, M, N);

    return 0;
}
