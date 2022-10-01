#include <iostream>
using namespace std;

void is_subset(int[], int gnum, int size); //Объявление функции, проверяющей массив на наличие подмножеств.
int find_small_position(int[], int start_pos, int size);
int sort(int[], int size);

int main() {
    cout << "Введите размер множества: ";
    int size;
    cin >> size;
    const int s = size;
    cout << "Введите элементы множества: ";
    int *num = new int[s]; //Выделяем память под массив (множество наших чисел).
    for (int i = 0; i < size; i++) {
        cin >> num[i];
    }
    cout << "Введите заданное число: ";
    int gnum;
    cin >> gnum;
    sort(num, size);
    for (int i = 0; i < size - 1; i++) {
        int j = i;
        int summ = 0;
        while ((j < size) && (summ < gnum)) {
            summ += num[j];
            j++;
        }
        if (summ == gnum) {
            for (int n = i; n < j; n++) {
                cout << num[n] << " ";
            }
            cout << endl;
        }
    }
    //is_subset(num, gnum, size);
    delete[] num; //Удаляем память, выделенную под массив.
    return 0;
}

void is_subset(int num[], int gnum, int size) { //Определение функции.
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

    for (int i = 0; i < size; i++) {
        
    }

    if (count == 0) {
        cout << "Подмножеств из двух элементов нет.";
    }
}

int find_small_position(int num[], int i, int size) {
    int smallest = i;
    for (int j = i; j < size; j++) {
        if (num[j] < num[smallest]) {
            smallest = j;
        }
    }
    return smallest;
}

int sort(int num[], int size) {
    for (int i = 0; i < size; i++) {
        int smallest = find_small_position(num, i, size);
        swap(num[i], num[smallest]);
    }
}