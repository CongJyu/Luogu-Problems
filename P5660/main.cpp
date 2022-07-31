// luogu p5660

#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    string input;
    cin >> input;
    int cnt{};
    for (int i{}; i < (int) input.length(); ++i) {
        if (input[i] == '1') {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
