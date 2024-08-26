#include <iostream>

using namespace std;

void minutosConvertidos(int totalMinutos, int &horas, int &minutos) {
    horas = totalMinutos / 60;
    minutos = totalMinutos % 60;
}

int main() {
    int totalMinutos, horas, minutos;
    cout << "Digite o numero de minutos passados desde a meia-noite: ";
    cin >> totalMinutos;
    minutosConvertidos(totalMinutos, horas, minutos);
    cout << horas << " horas e " << minutos << " minutos\n";
    return 0;
}
