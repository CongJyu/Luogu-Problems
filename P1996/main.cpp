// luogu p1996

#include <iostream>
#include <queue>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n{}, m{};
    cin >> n >> m;
    queue<int> q;
    for (int i{}; i < n; ++i) {
        q.push(i + 1);
    }
    int num{1};
    while (!q.empty()) {
        if (num != m) {
            q.push(q.front());
            q.pop();
            num++;
        } else {
            cout << q.front() << " ";
            q.pop();
            num = 1;
        }
    }
    cout << endl;
    return 0;
}
