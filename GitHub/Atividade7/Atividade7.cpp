#include <iostream>

using namespace std;

int fibonacciRecursivo(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacciRecursivo(n - 1) + fibonacciRecursivo(n - 2);
}

int fibonacciIterativo(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    int prev1 = 0, prev2 = 1;
    int result = 0;

    for (int i = 2; i <= n; i++) {
        result = prev1 + prev2;
        prev1 = prev2;
        prev2 = result;
    }

    return result;
}

int main() {
    int n;
    cout << "Digite a posicao de Fibonacci que deseja calcular: ";
    cin >> n;

    int resultadoRecursivo = fibonacciRecursivo(n);
    cout << "Fibonacci recursivo na posicao " << n << " = " << resultadoRecursivo << endl;

    int resultadoIterativo = fibonacciIterativo(n);
    cout << "Fibonacci iterativo na posicao " << n << " = " << resultadoIterativo << endl;

    return 0;
}
