// luogu b2112

#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n{};
    cin >> n;
    while (n--) {
        string player1, player2;
        cin >> player1 >> player2;
        if (player1 == "Rock" and player2 == "Scissors") {
            cout << "Player1" << endl;
        } else if (player1 == "Rock" and player2 == "Paper") {
            cout << "Player2" << endl;
        } else if (player1 == "Scissors" and player2 == "Rock") {
            cout << "Player2" << endl;
        } else if (player1 == "Scissors" and player2 == "Paper") {
            cout << "Player1" << endl;
        } else if (player1 == "Paper" and player2 == "Scissors") {
            cout << "Player2" << endl;
        } else if (player1 == "Paper" and player2 == "Rock") {
            cout << "Player1" << endl;
        } else {
            cout << "Tie" << endl;
        }
    }
    return 0;
}
