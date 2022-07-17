// luogu p1321

#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    string input;
    cin >> input;
    int b_counter = 0, g_counter = 0;
    for (int i = 2; i < (int) input.length(); ++i) {
        if (input[i - 2] == 'b' || input[i - 1] == 'o' || input[i] == 'y') {
            b_counter++;
        }
    }
    for (int i = 3; i < (int) input.length(); ++i) {
        if (input[i - 3] == 'g' || input[i - 2] == 'i' || input[i - 1] == 'r' || input[i] == 'l') {
            g_counter++;
        }
    }
    cout << b_counter << endl << g_counter << endl;
    return 0;
}
