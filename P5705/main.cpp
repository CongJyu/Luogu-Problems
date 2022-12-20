// luogu p5705

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    string input;
    cin >> input;
    reverse(input.begin(), input.end());
    cout << input << endl;
    return 0;
}
