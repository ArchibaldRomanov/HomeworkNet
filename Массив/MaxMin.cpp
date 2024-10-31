#include <iostream>
#include <locale.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    int arr[10] = {3, 7, 1, 9, 5, 2, 8, 10, 6, 4};

    cout << "Массив: ";
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int minElArr = arr[0];
    int maxElArr = arr[0];

    for (int i = 1; i < 10; i++) {
        if (arr[i] < minElArr) {
            minElArr = arr[i];
        }
        if (arr[i] > maxElArr) {
            maxElArr = arr[i];
        }
    }

    cout << "Минимальный элемент: " << minElArr << endl;
    cout << "Максимальный элемент: " << maxElArr << endl;

    return 0;
}
