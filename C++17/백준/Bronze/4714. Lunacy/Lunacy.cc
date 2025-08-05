#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double earthWeight;
    while (cin >> earthWeight && earthWeight >= 0) {
        double moonWeight = earthWeight * 0.167;
        cout << fixed << setprecision(2);
        cout << "Objects weighing " << earthWeight << " on Earth will weigh " << moonWeight << " on the moon." << endl;
    }
}