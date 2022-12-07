// luogu b2046

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int distance{};
    cin >> distance;
    double t_bicycle{27 + 23 + distance / 3.0}, t_walk{distance / 1.2};
    if (t_bicycle > t_walk) {
        cout << "Walk" << endl;
    } else if (t_walk > t_bicycle) {
        cout << "Bike" << endl;
    } else {
        cout << "All" << endl;
    }
    return 0;
}
