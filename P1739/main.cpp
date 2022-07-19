// luogu p1739

#include <iostream>
#include <stack>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    string exp;
    getline(cin, exp);
    stack<char> s;
    for (int i{}; i < (int) exp.length(); ++i) {
        if (exp[i] == '(') {
            s.push(')');
        } else if (!s.empty() && exp[i] == s.top()) {
            s.pop();
        } else if (s.empty() && exp[i] == ')') {
            s.push('(');
        }
    }
    if (s.empty()) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
