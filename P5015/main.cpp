// luogu p5015

#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    string input;
    getline(cin, input);
    int cnt = 0;
    for (char i: input) {
        if (i != ' ' && i != '\n') {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
