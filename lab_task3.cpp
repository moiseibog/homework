#include <iostream>
using namespace std;

int main() {
    cout << "Введите количество мисочек: ";
    int n;
    cin >> n;
    if (n % 2 == 0) {
        if (n % 4 == 0) {
            cout << "YES" << endl;
            int l, k;
            l = k = n / 2;
            cout << "Количество мини-порций у Пети: " << l << endl;
            for (int i = 1; i <= n/4; i++) {
                cout << i << " " << n+1 - i << " ";
            }
            cout << endl << "Количество мини-порций у Маши: " << k << endl;
            for (int i = n/4 + 1; i <= n/2; i++) {
                cout << i << " " << n+1 - i << " ";
            }
        } else {
            cout << "NO";
        }
    } else {
        if (((n-1) / 2) % 2 == 1) {
            cout << "YES" << endl;
            int l, k;
            l = n / 2;
            k = (n / 2) + 1;
            cout << "Количество мини-порций у Пети: " << l << endl;
            cout << n << " ";
            for (int i = 1; i <= (n-1)/4; i++) {
                cout << i << " " << n - i << " ";
            }
            cout << endl << "Количество мини-порций у Маши: " << k << endl;
            for (int i = ((n-1) / 4) + 1; i <= (n/2); i++) {
                cout << i << " " << n - i << " ";
            }
        } else {
            cout << "NO";
        }
    }
}