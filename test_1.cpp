#include <iostream>
using namespace std;

double deg(double x, int k) {
    double X;
    X = x;
    for (int i = 2; i <= k; i++) {
        X *= x;
    }
    return X;
}

int main(){
    cout << deg(0.25, 3);
}