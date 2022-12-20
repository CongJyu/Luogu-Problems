// luogu b2036

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    double input{};
    cin >> input;
    double output{abs(input)};
    cout << fixed << setprecision(2) << output << endl;
    return 0;
}
