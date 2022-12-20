// luogu p5714

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    double weight = 0, height = 0;
    cin >> weight >> height;
    double bmi = weight / (height * height);
    if (bmi < 18.5) {
        cout << "Underweight" << endl;
    } else if (bmi >= 18.5 && bmi < 24) {
        cout << "Normal" << endl;
    } else if (bmi >= 24) {
        cout << bmi << endl << "Overweight" << endl;
    }
    return 0;
}
