// luogu t128790

#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n{};
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        if (s.length() % 2 != 0) {
            cout << "No" << endl;
            continue;
        } else {
            stack<char> brackets;
            bool legal{true};
            for (int i{}; i < s.length(); ++i) {
                if (s.at(i) == '(') {
                    brackets.push(')');
                } else if (s.at(i) == '[') {
                    brackets.push(']');
                } else if (s.at(i) == ')') {
                    if (!brackets.empty() and brackets.top() == ')') {
                        brackets.pop();
                    } else {
                        legal = false;
                        break;
                    }
                } else if (s.at(i) == ']') {
                    if (!brackets.empty() and brackets.top() == ']') {
                        brackets.pop();
                    } else {
                        legal = false;
                        break;
                    }
                }
            }
            if (!legal or !brackets.empty()) {
                cout << "No" << endl;
            } else {
                cout << "Yes" << endl;
            }
        }
    }
    return 0;
}
