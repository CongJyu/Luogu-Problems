// luogu p1914

#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n = 0;
    cin >> n;
    string code;
    cin >> code;
    for (char &i: code) {
        if (i + n <= 'z') {
            i = (char) (i + n);
        } else {
            i = (char) (i + n);
            while (i > 'z' || i < 'a') {
                i = (char) (i - 26);
            }
        }
    }
    cout << code << endl;
    return 0;
}
