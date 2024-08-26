#include <iostream>

using namespace std;

void idadeConvertida(int dias, int &anos, int &meses, int &diasRestantes) {
    anos = dias / 365;
    dias %= 365;
    meses = dias / 30;
    diasRestantes = dias % 30;
}

int main() {
    int idadeEmDias, anos, meses, diasRestantes;
    cout << "Escreva sua idade em dias: ";
    cin >> idadeEmDias;
    idadeConvertida(idadeEmDias, anos, meses, diasRestantes);
    cout << anos << " anos, " << meses << " meses, " << diasRestantes << " dias\n";
    return 0;
}
