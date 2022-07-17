// luogu p1177

#include <iostream>

using namespace std;

void quick_sort(int x[], int left, int right) {
    int mid = x[(left + right) / 2];
    int i = left, j = right;
    while (i <= j) {
        while (x[i] < mid) {
            i++;
        }
        while (x[j] > mid) {
            j--;
        }
        if (i <= j) {
            swap(x[i], x[j]);
            i++;
            j--;
        }
    }
    if (left < j) {
        quick_sort(x, left, j);
    }
    if (i < right) {
        quick_sort(x, i, right);
    }
}

int main() {
    ios::sync_with_stdio(false);
    int n = 0;
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    quick_sort(a, 0, n - 1);
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;
    delete[] a;
    return 0;
}
