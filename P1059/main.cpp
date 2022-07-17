// luogu p1059

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n = 0;
    cin >> n;
    int *in = new int[n];
    for (int i = 0; i < n; ++i) {
        cin >> in[i];
    }
    sort(in, in + n);
    vector<int> out;
    out.push_back(in[0]);
    for (int i = 1; i < n; ++i) {
        if (in[i] != in[i - 1]) {
            out.push_back(in[i]);
        }
    }
    cout << out.size() << endl;
    for (int i: out) {
        cout << i << " ";
    }
    cout << endl;
    delete[] in;
    return 0;
}
