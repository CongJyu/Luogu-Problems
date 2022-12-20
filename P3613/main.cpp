// luogu p3613

#include <iostream>
#include <vector>

using namespace std;

struct Box {
    int i{};
    int j{};
    int k{};
};

int main() {
    ios::sync_with_stdio(false);
    int n{}, q{};
    cin >> n >> q;
    vector<Box> b;
    while (q--) {
        int opt{};
        cin >> opt;
        if (opt == 1) {
            Box b_in;
            cin >> b_in.i >> b_in.j >> b_in.k;
            bool found{false};
            for (int cnt{}; cnt < (int) b.size(); ++cnt) {
                if (b[cnt].i == b_in.i && b[cnt].j == b_in.j) {
                    found = true;
                    if (b_in.k != 0) {
                        b[cnt].k += b_in.k;
                    } else {
                        b[cnt].k = 0;
                    }
                    break;
                }
            }
            if (!found) {
                b.push_back(b_in);
            }
        } else {
            int tmp_i{}, tmp_j{};
            cin >> tmp_i >> tmp_j;
            for (int cnt{}; cnt < (int) b.size(); ++cnt) {
                if (b[cnt].i == tmp_i && b[cnt].j == tmp_j) {
                    cout << b[cnt].k << endl;
                    break;
                }
            }
        }
    }
    return 0;
}
