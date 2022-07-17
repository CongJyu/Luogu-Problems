// luogu p1427

#include <iostream>
#include <stack>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    stack<int> num;
    int n = 0;
    while (true) {
        cin >> n;
        if (n == 0) {
            break;
        }
        num.push(n);
    }
    while (!num.empty()) {
        cout << num.top() << " ";
        num.pop();
    }
    cout << endl;
    return 0;
}
