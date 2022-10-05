#include <iostream>

int main() {
    using namespace std;
    int n;
    long int m, Sum = 0;
    cout << "Введите количество чашечек: ";
    cin >> n;
    int cups[n];
    cout << "Введите грамовки чашек: ";
    for (int i = 0; i < n; i++) {
        cin >> m;
        cups[i] = m;
        Sum += m;
    }
    long int diff = 10*10*10*10*10*10*10*10*10;
    for (int i = 0; i < (1 << n); i++) {
        long int Sum1 = 0, Sum2 = 0;
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) {
                Sum1 += cups[j];
            } else {
                Sum2 += cups[j];
            }
        }
        if (Sum1 > Sum2) {
            if ((Sum1 - Sum2) < diff) {
                diff = Sum1 - Sum2;
            }
        } else {
            if ((Sum2 - Sum1) < diff) {
                diff = Sum2 - Sum1;
            }
        }
    }
    cout << diff;
}