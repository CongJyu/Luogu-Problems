// luogu p5734

#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int q = 0;
    cin >> q;
    string ori;
    cin >> ori;
    int opt = 0;
    while (cin >> opt) {
        if (opt == 1) {
            string word;
            cin >> word;
            ori += word;
        }
        // not complete
    }
    return 0;
}
