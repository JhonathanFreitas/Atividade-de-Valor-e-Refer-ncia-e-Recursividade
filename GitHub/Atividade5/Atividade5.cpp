#include <iostream>

using namespace std;

int Binaria(int arr[], int tamanho, int valor) {
    int esquerda = 0;
    int direita = tamanho - 1;

    while (esquerda <= direita) {
        int meio = esquerda + (direita - esquerda) / 2;

        if (arr[meio] == valor)
            return meio;

        if (arr[meio] < valor)
            esquerda = meio + 1;
        else
            direita = meio - 1;
    }

    return -1;
}

int main() {
    int vetor[] = {0, 18, 22, 25, 34, 40, 51, 66, 75, 87};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    int valoresParaBuscar[] = {75, 22, 90};
    int res[3];

    for (int i = 0; i < 3; i++) {
        res[i] = Binaria(vetor, tamanho, valoresParaBuscar[i]);
    }

    for (int i = 0; i < 3; i++) {
        if (res[i] != -1)
            cout << "Valor " << valoresParaBuscar[i] << " encontrado no indice " << res[i] << endl;
        else
            cout << "Valor " << valoresParaBuscar[i] << " nao encontrado" << endl;
    }

    return 0;
}
