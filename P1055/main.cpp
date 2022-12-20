// luogu p1055

#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    string input;
    cin >> input;
    int cal = (input[0] - '0') * 1 + (input[2] - '0') * 2 + (input[3] - '0') * 3 + (input[4] - '0') * 4
              + (input[6] - '0') * 5 + (input[7] - '0') * 6 + (input[8] - '0') * 7 + (input[9] - '0') * 8
              + (input[10] - '0') * 9;
    int rec = cal % 11;
    if (rec != 10) {
        if (rec == input[12] - '0') {
            cout << "Right" << endl;
        } else {
            for (int i = 0; i < 12; ++i) {
                cout << input[i];
            }
            cout << rec << endl;
        }
    } else {
        if (input[12] == 'X') {
            cout << "Right" << endl;
        } else {
            for (int i = 0; i < 12; ++i) {
                cout << input[i];
            }
            cout << 'X' << endl;
        }
    }
    return 0;
}
