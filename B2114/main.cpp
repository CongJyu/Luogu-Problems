// luogu b2114

#include <iostream>
#include <string>
#include <utility>

using namespace std;

char get_dna_pair(char input) {
    if (input == 'A') {
        return 'T';
    } else if (input == 'T') {
        return 'A';
    } else if (input == 'C') {
        return 'G';
    } else {
        return 'C';
    }
}

int main() {
    ios::sync_with_stdio(false);
    string dna;
    cin >> dna;
    for (int i{}; i < dna.length(); ++i) {
        cout << get_dna_pair(dna[i]);
    }
    cout << endl;
    return 0;
}
