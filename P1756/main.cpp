// luogu p1756

#include <iostream>
#include <string>

using namespace std;

int key[27] = {
        1, 1, 2, 3, 1, 2, 3,
        1, 2, 3, 1, 2, 3, 1, 2, 3,
        1, 2, 3, 4, 1, 2, 3, 1, 2, 3, 4
};

int main() {
    ios::sync_with_stdio(false);
    string input;
    getline(cin, input);
    int counter = 0;
    for (char i: input) {
        if (i == ' ') {
            counter += key[0];
        } else {
            counter += key[i - 'a' + 1];
        }
    }
    cout << counter << endl;
    return 0;
}
