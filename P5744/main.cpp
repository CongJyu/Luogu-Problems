// luogu p5744

#include <iostream>

using namespace std;

struct Student {
    string name;
    int age{};
    double score{};
};

int main() {
    ios::sync_with_stdio(false);
    int n = 0;
    cin >> n;
    auto *stu = new Student[n];
    for (int i = 0; i < n; ++i) {
        cin >> stu[i].name >> stu[i].age >> stu[i].score;
        stu[i].age++;
        stu[i].score *= 1.2;
        if (stu[i].score > 600) {
            stu[i].score = 600;
        }
    }
    for (int i = 0; i < n; ++i) {
        cout << stu[i].name << " " << stu[i].age << " " << stu[i].score << endl;
    }
    return 0;
}
