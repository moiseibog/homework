#include <iostream>
using namespace std;

int factorial(int x);
double deg(double x, int k);
long double t(double x);
long double F(double y);

int main() {
    cout << "Введите число y: ";
    int y;
    cin >> y;
    cout << "Полученное значение: ";
    cout << F(y);
}

int factorial(int x) {
    int n = 1;
    if (x == 0) {
        n = 1;
    } else if ((x % 2) == 0) {
        for (int i = 2; i <= x; i += 2) {
            n *= i;
        }
    } else {
        for (int i = 3; i <= x; i += 2) {
            n *= i;
        }
    }
    return n;
}

double deg(double x, int k) {
    double X;
    X = x;
    for (int i = 2; i <= k; i++) {
        X *= x;
    }
    return X;
}

long double t(double x) {
    long double sum1 = 0;
    long double sum2 = 0;
    for (int k = 0; k <= 10; k++) {
        sum1 += deg(x, (2*k) + 1) / factorial((2*k) + 1);
    }
    for (int k = 0; k <= 10; k++) {
        sum2 += deg(x, 2*k) / factorial(2*k);
    }
    return (sum1 / sum2);
}

long double F(double y) {
    return ((1.7 * t(0.25)) + (2 * t(1 + y))) / (6 - t((y*y) - 1));
}