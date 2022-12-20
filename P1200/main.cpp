// luogu p1200

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    string star, team;
    cin >> star >> team;
    int star_num = 1, team_num = 1;
    for (char i: star) {
        star_num *= (i - 'A' + 1);
    }
    for (char i: team) {
        team_num *= (i - 'A' + 1);
    }
    if (star_num % 47 == team_num % 47) {
        cout << "GO" << endl;
    } else {
        cout << "STAY" << endl;
    }
    return 0;
}
