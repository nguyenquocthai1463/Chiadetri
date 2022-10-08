#include <iostream>

using namespace std;

int tong(int a[], int l, int r) {
    int mid = (l + r) / 2;
    if (a[mid] % 2 == 0) {
        return mid + 1;
    }
    return 0;
}

int main() {
    int base, exponent;
    int sum;
    cin >> base;
    cin >> exponent;
    cout << sum;
    return 0;
}