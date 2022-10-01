#include <iostream>
using namespace std;

int main() {
    cout << "Введите размер множества: ";
    int size;
    cin >> size;
    const int s = size;
    cout << "Введите элементы множества: ";
    int *num = new int[size];
    for (int i = 0; i < size; i++) {
        cin >> num[i];
    }
    cout << "Введите заданное число: ";
    int gnum;
    cin >> gnum;
    cout << "Найденные подмножества:" << endl; //В рамках задачи ищем подмножества только из двух элементов.
    int count = 0;
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if ((num[i] + num[j]) == gnum) {
                count++;
                cout << num[i] << " " << num[j] << endl;
            }
        }
    }
    if (count == 0) {
        cout << "Подмножеств из двух элементов нет.";
    }
}