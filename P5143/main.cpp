// luogu p5143

#include <iostream>
#include <cmath>
#include <iomanip>
#include <algorithm>

using namespace std;

struct Point {
    int x{};
    int y{};
    int z{};
};

double get_dis(Point a, Point b) {
    double result{
            sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y) + (a.z - b.z) * (a.z - b.z))
    };
    return result;
}

bool cmp(Point a, Point b) {
    return a.z < b.z;
}

int main() {
    ios::sync_with_stdio(false);
    int n{};
    cin >> n;
    auto *pt{new Point[n]};
    for (int i{}; i < n; ++i) {
        cin >> pt[i].x >> pt[i].y >> pt[i].z;
    }
    sort(pt, pt + n, cmp);
    double distance{};
    for (int i{1}; i < n; ++i) {
        distance += get_dis(pt[i - 1], pt[i]);
    }
    cout << fixed << setprecision(3) << distance << endl;
    delete[] pt;
    return 0;
}
