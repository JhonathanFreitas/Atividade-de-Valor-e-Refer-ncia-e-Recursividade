#include <iostream>

using namespace std;

void segundosConvertidos(int totalSegundos, int &horas, int &minutos, int &segundos) {
    horas = totalSegundos / 3600;
    totalSegundos %= 3600;
    minutos = totalSegundos / 60;
    segundos = totalSegundos % 60;
}

int main() {
    int totalSegundos, horas, minutos, segundos;
    cout << "Quantos segundos se passaram? ";
    cin >> totalSegundos;
    segundosConvertidos(totalSegundos, horas, minutos, segundos);
    cout << horas << " horas, " << minutos << " minutos, " << segundos << " segundos\n";
    return 0;
}
