// luogu p6263

#include <iostream>
#include <string>

using namespace std;

int finger[8]{};

int main() {
    ios::sync_with_stdio(false);
    string input;
    getline(cin, input);
    for (int i{}; i < (int) input.length(); ++i) {
        if (input[i] == '1' or input[i] == 'Q' or input[i] == 'A' or input[i] == 'Z') {
            finger[0]++;
        } else if (input[i] == '2' or input[i] == 'W' or input[i] == 'S' or input[i] == 'X') {
            finger[1]++;
        } else if (input[i] == '3' or input[i] == 'E' or input[i] == 'D' or input[i] == 'C') {
            finger[2]++;
        } else if (input[i] == '4' or input[i] == 'R' or input[i] == 'F' or input[i] == 'V' or input[i] == '5' or
                   input[i] == 'T' or input[i] == 'G' or input[i] == 'B') {
            finger[3]++;
        } else if (input[i] == '6' or input[i] == 'Y' or input[i] == 'H' or input[i] == 'N' or input[i] == '7' or
                   input[i] == 'U' or input[i] == 'J' or input[i] == 'M') {
            finger[4]++;
        } else if (input[i] == '8' or input[i] == 'I' or input[i] == 'K' or input[i] == ',') {
            finger[5]++;
        } else if (input[i] == '9' or input[i] == 'O' or input[i] == 'L' or input[i] == '.') {
            finger[6]++;
        } else if (input[i] == '0' or input[i] == 'P' or input[i] == ';' or input[i] == '/' or input[i] == '-' or
                   input[i] == '=' or input[i] == '[' or input[i] == ']' or input[i] == '\'') {
            finger[7]++;
        }
    }
    for (int i{}; i < 8; ++i) {
        cout << finger[i] << endl;
    }
    return 0;
}
