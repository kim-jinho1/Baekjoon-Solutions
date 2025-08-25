#include <iostream>
using namespace std;

int main() {
    double weight, height;
    cin >> weight >> height;

    double bmi = weight / (height * height);

    if (bmi > 25.0)
        cout << "Overweight\n";
    else if (bmi >= 18.5 && bmi <= 25.0)
        cout << "Normal weight\n";
    else
        cout << "Underweight\n";
}
