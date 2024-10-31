#include <iostream>
#include <locale.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    int arr[3][6] = {
        {5, 3, 8, 1, 6, 7},
        {9, 2, 10, 4, 12, 11},
        {14, 15, 13, 17, 16, 18}
    };

    cout << "Массив:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 6; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    int minElArr = arr[0][0], maxElArr = arr[0][0];
    int minRow = 0, minCol = 0, maxRow = 0, maxCol = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 6; j++) {
            if (arr[i][j] < minElArr) {
                minElArr = arr[i][j];
                minRow = i;
                minCol = j;
            }
            if (arr[i][j] > maxElArr) {
                maxElArr = arr[i][j];
                maxRow = i;
                maxCol = j;
            }
        }
    }

    cout << "Индекс минимального элемента: " << minRow << " " << minCol << endl;
    cout << "Индекс максимального элемента: " << maxRow << " " << maxCol << endl;

    return 0;
}
