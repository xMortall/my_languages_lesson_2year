#include "bibliotecas.h"


void graficoHorizontal(int x, int y, int z) {
    int maior = abs(x);
    if (abs(y) > maior) maior = abs(y);
    if (abs(z) > maior) maior = abs(z);

    int nx = x * 50 / maior;
    int ny = y * 50 / maior;
    int nz = z * 50 / maior;

    cout << "x: " << setw(2) << x << " ";
    if (x > 0) {
        for (int i = 0; i < nx; i++) cout << "*";
    } else {
        for (int i = 0; i < -nx; i++) cout << "-";
    }
    cout << endl;

    cout << "y: " << setw(2) << y << " ";
    if (y > 0) {
        for (int i = 0; i < ny; i++) cout << "*";
    } else {
        for (int i = 0; i < -ny; i++) cout << "-";
    }

    cout << endl;

    cout << "z: " << setw(2) << z << " ";
    if (z > 0) {
        for (int i = 0; i < nz; i++) cout << "*";
    } else {
        for (int i = 0; i < -nz; i++) cout << "-";
    }
}
int main() {
    graficoHorizontal(100, -200, 300);
    return 0;
}