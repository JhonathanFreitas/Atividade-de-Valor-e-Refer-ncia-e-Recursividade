#include <iostream>

using namespace std;

int Iterativo(int N) {
    if (N <= 0) {
        cout << "Erro: N deve ser maior que zero" << endl;
        return -1;
    }

    int soma = 0;
    for (int i = 1; i <= N; i++) {
        soma += i;
    }
    return soma;
}

int Recursivo(int N) {
    if (N <= 0) {
        cout << "Erro: N deve ser maior que zero" << endl;
        return -1;
    }

    if (N == 1)
        return 1;
    else
        return N + Recursivo(N - 1);
}

int main() {
    int N;
    cout << "Digite um valor para N: ";
    cin >> N;

    int resultadoIterativo = Iterativo(N);
    if (resultadoIterativo != -1) {
        cout << "Somatorio iterativo de 1 a " << N << " = " << resultadoIterativo << endl;
    }

    int resultadoRecursivo = Recursivo(N);
    if (resultadoRecursivo != -1) {
        cout << "Somatorio recursivo de 1 a " << N << " = " << resultadoRecursivo << endl;
    }

    return 0;
}
