// luogu p1449

#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    string s;
    cin >> s;
    stack<long long> num;
    string tmp_num{};
    for (int i{}; i < (int) s.length(); ++i) {
        if (s[i] >= '0' && s[i] <= '9') {
            tmp_num += s[i];
        } else if (s[i] == '.') {
            long long fig{stoll(tmp_num)};
            num.push(fig);
            tmp_num = "";
        } else if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') {
            long long b{num.top()};
            num.pop();
            long long a{num.top()};
            num.pop();
            long long result{};
            if (s[i] == '+') {
                result = a + b;
            } else if (s[i] == '-') {
                result = a - b;
            } else if (s[i] == '*') {
                result = a * b;
            } else if (s[i] == '/') {
                result = a / b;
            }
            num.push(result);
        } else if (s[i] == '@') {
            cout << num.top() << endl;
        }
    }
    return 0;
}
