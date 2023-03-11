#include <iostream>

using namespace std;

int tong(int *a, int left, int right, int mid) {
    if (a[mid] % 2 == 0) {
        return mid % 2;
    } else
        return tong(a, left + 1, right, mid) + tong(a, left, right - 1, mid);
}

void nhapmang(int a[], int n) {
    for (int index = 0; index < n; index++) {
        cout << "a[" << index << "] = ";
        cin >> a[index];
    }
}

int main() {
    int a[10000];
    int n, left = n - 1, right = 0;
    int mid = (left + right) / 2;
    cout << "nhap n phan tu: ";
    cin >> n;
    nhapmang(a, n);
    cout << "tong mang = " << tong(a, left, right, mid);
    return 0;
}