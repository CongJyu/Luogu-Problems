// luogu p1271

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n = 0, m = 0;
    cin >> n >> m;
    int *vote = new int[m];
    for (int i = 0; i < m; ++i) {
        cin >> vote[i];
    }
    sort(vote, vote + m);
    cout << vote[0];
    for (int i = 1; i < m; ++i) {
        cout << " " << vote[i];
    }
    cout << endl;
    return 0;
}
