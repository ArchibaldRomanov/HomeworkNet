#include <iostream>
using namespace std;

int main() {
    int intVar;
    short shortVar;
    long longVar;
    long long longLongVar;
    float floatVar;
    double doubleVar;
    long double longDoubleVar;
    bool boolVar;

    cout << "short: " << &shortVar << " " << sizeof(shortVar) << endl;
    cout << "int: " << &intVar << " " << sizeof(intVar) << endl;
    cout << "long: " << &longVar << " " << sizeof(longVar) << endl;
    cout << "long long: " << &longLongVar << " " << sizeof(longLongVar) << endl;
    cout << "float: " << &floatVar << " " << sizeof(floatVar) << endl;
    cout << "double: " << &doubleVar << " " << sizeof(doubleVar) << endl;
    cout << "long double: " << &longDoubleVar << " " << sizeof(longDoubleVar) << endl;
    cout << "bool: " << &boolVar << " " << sizeof(boolVar) << endl;

    return 0;
}
