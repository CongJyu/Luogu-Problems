// luogu p1307

#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int in = 0;
    cin >> in;
    string rev;
    int out;
    if (in >= 0) {
        rev = to_string(in);
        reverse(rev.begin(), rev.end());
        out = stoi(rev);
        cout << out << endl;
    } else {
        in = abs(in);
        rev = to_string(in);
        reverse(rev.begin(), rev.end());
        out = stoi(rev);
        cout << "-" << out << endl;
    }
    return 0;
}
