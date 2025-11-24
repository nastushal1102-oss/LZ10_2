#include <iostream>
#include <iomanip>
#include <cmath>
#include <windows.h>

using namespace std;

// Функція обчислення суми
double calculateSum(double x) {
    double S = 0.0;

    // Сума від k = 2 до 6
    for (int k = 2; k <= 6; k++) {
        S += sin(0.17 * pow(x, k)) / (2 * k + x);
    }

    return S;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double x;

    cout << "Введіть значення x: ";
    cin >> x;

    // Обчислення суми
    double result = calculateSum(x);

    // Виведення результату
    cout << "Результат обчислення суми: "
        << fixed << setprecision(6) << result << endl;

    return 0;
}

