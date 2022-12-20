// luogu p6367

#include <iostream>
#include <map>

using namespace std;

map<string, int> mp;

int main() {
    ios::sync_with_stdio(false);
    int n{};
    cin >> n;
    int result{};
    for (int i{}; i < n; ++i) {
        string name;
        cin >> name;
        int k{i - mp[name]};
        if (mp[name]++ > k) {
            result++;
        }
    }
    cout << result << endl;
    return 0;
}
