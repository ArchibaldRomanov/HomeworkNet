#include <iostream>
#include <locale.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    int arr[10] = { 10, 3, 4, 1, 8, 9, 7, 2, 6, 5 };

    cout << "Массив до сортировки: ";
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < 10 - 1; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (arr[j] < arr[i]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "Массив после сортировки: ";
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
