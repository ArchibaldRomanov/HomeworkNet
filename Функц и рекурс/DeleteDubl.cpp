#include <iostream>
#include <locale.h>
using namespace std;

int power(int base, int expon) {
    int result = 1;
    for (int i = 0; i < expon; i++) {
        result *= base;
    }
    return result;
}

int main(int argc, char** argv) {
    setlocale(LC_ALL, "rus");

    int value = 5, power_value = 2;
    int result = power(value, power_value);
    cout << value << " в степени " << power_value << " = " << result << endl;

    value = 3;
    power_value = 3;
    result = power(value, power_value);
    cout << value << " в степени " << power_value << " = " << result << endl;

    value = 4;
    power_value = 4;
    result = power(value, power_value);
    cout << value << " в степени " << power_value << " = " << result << endl;

    return 0;
}
