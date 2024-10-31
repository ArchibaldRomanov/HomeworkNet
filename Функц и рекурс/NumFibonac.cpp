#include <iostream>
#include <locale.h>
using namespace std;

int fibonac(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonac(n - 1) + fibonac(n - 2);
}

int main() {
    setlocale(LC_ALL, "rus");

    int count;
    cout << "Введите число: ";
    cin >> count;

    cout << "Числа Фибоначчи: ";
    for (int i = 0; i < count; i++) {
        cout << fibonac(i) << " ";
    }
    cout << endl;

    return 0;
}
