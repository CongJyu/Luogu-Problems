// luogu p5730

#include <iostream>
#include <string>

using namespace std;

string screen1[10] = {"XXX", "..X", "XXX", "XXX", "X.X", "XXX", "XXX", "XXX", "XXX", "XXX"};
string screen2[10] = {"X.X", "..X", "..X", "..X", "X.X", "X..", "X..", "..X", "X.X", "X.X"};
string screen3[10] = {"X.X", "..X", "XXX", "XXX", "XXX", "XXX", "XXX", "..X", "XXX", "XXX"};
string screen4[10] = {"X.X", "..X", "X..", "..X", "..X", "..X", "X.X", "..X", "X.X", "..X"};
string screen5[10] = {"XXX", "..X", "XXX", "XXX", "..X", "XXX", "XXX", "..X", "XXX", "XXX"};


int main() {
    ios::sync_with_stdio(false);
    int n = 0;
    cin >> n;
    string display;
    cin >> display;
    cout << screen1[display[0] - '0'];
    for (int i = 1; i < (int) display.length(); ++i) {
        cout << "." << screen1[display[i] - '0'];
    }
    cout << endl;
    cout << screen2[display[0] - '0'];
    for (int i = 1; i < (int) display.length(); ++i) {
        cout << "." << screen2[display[i] - '0'];
    }
    cout << endl;
    cout << screen3[display[0] - '0'];
    for (int i = 1; i < (int) display.length(); ++i) {
        cout << "." << screen3[display[i] - '0'];
    }
    cout << endl;
    cout << screen4[display[0] - '0'];
    for (int i = 1; i < (int) display.length(); ++i) {
        cout << "." << screen4[display[i] - '0'];
    }
    cout << endl;
    cout << screen5[display[0] - '0'];
    for (int i = 1; i < (int) display.length(); ++i) {
        cout << "." << screen5[display[i] - '0'];
    }
    cout << endl;
    return 0;
}
