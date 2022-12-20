// luogu p5727

#include <iostream>
#include <stack>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    stack<int> ice;
    int n = 0;
    cin >> n;
    ice.push(n);
    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
        ice.push(n);
    }
    while (!ice.empty()) {
        cout << ice.top() << " ";
        ice.pop();
    }
    cout << endl;
    return 0;
}
