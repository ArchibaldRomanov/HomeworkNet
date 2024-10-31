#include <iostream>
#include <locale.h>
using namespace std;

int sum(int a, int b) {
    return a + b;
}

int diff(int a, int b) {
    return a - b;
}


int multiplication(int a, int b) {
    return a * b;
}


double division(int a, int b) {
    if (b != 0) 
    {
        return static_cast<double>(a) / b;     
    } 
    else 
    {
        cerr << "Ошибка: деление на ноль" << std::endl;
        return 0; 
    }
}

int main(int argc, char** argv) {
    setlocale(LC_ALL, "rus");
    int a = 5, b = 10;

    int s = sum(a, b);
    int dif = diff(a, b);
    int mult = multiplication(a, b);
    double div = division(a, b);

    cout << a << " + " << b << " = " << s << endl;
    cout << a << " - " << b << " = " << dif << endl;
    cout << a << " * " << b << " = " << mult << endl;
    cout << a << " / " << b << " = " << div << endl;

    return 0;
}
