// luogu p1125

#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

bool is_prime(int x) {
    if (x < 2) {
        return false;
    } else if (x == 2) {
        return true;
    } else {
        bool prime = true;
        for (int i = 2; i <= sqrt(x); ++i) {
            if (x % i == 0) {
                prime = false;
                break;
            }
        }
        if (prime) {
            return true;
        } else {
            return false;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    string word;
    cin >> word;
    int letter[26] = {0};
    for (char i: word) {
        letter[(int) (i - 'a')]++;
    }
    sort(letter, letter + 26);
    int flag = 0;
    for (int i: letter) {
        if (i != 0) {
            flag = i;
            break;
        }
    }
    int judge = letter[25] - flag;
    if (is_prime(judge)) {
        cout << "Lucky Word" << endl << judge << endl;
    } else {
        cout << "No Answer" << endl << 0 << endl;
    }
    return 0;
}
