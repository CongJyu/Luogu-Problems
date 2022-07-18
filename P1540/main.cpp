// luogu p1540

#include <iostream>
#include <queue>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n{}, m{};
    cin >> m >> n;
    int *word{new int[n]};
    for (int i{}; i < n; ++i) {
        cin >> word[i];
    }
    queue<int> memory;
    int request_time{};
    bool found{false};
    for (int i{}; i < n; ++i) {
        for (int j{}; j < (int) memory.size(); ++j) {
            if (memory.front() == word[i]) {
                found = true;
                break;
            } else {
                memory.push(memory.front());
                memory.pop();
            }
        }
        if (!found) {
            if (memory.size() < 3) {
                memory.push(word[i]);
            } else {
                memory.pop();
                memory.push(word[i]);
            }
            request_time++;
        }
        found = false;
    }
    cout << request_time << endl;
    return 0;
}
