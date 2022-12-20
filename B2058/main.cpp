// luogu b2058

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n{};
    cin >> n;
    int gold{}, silver{}, bronze{};
    for (int i{}; i < n; ++i) {
        int temp_gold{}, temp_silver{}, temp_bronze{};
        cin >> temp_gold >> temp_silver >> temp_bronze;
        gold += temp_gold;
        silver += temp_silver;
        bronze += temp_bronze;
    }
    int sum{gold + silver + bronze};
    cout << gold << " " << silver << " " << bronze << " " << sum << endl;
    return 0;
}
