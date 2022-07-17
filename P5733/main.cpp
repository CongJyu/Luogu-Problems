// luogu p5733

#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    string in;
    cin >> in;
    for (char &i: in) {
        if (i >= 'a' && i <= 'z') {
            i = (char) (i + 'A' - 'a');
        }
    }
    cout << in << endl;
    return 0;
}
