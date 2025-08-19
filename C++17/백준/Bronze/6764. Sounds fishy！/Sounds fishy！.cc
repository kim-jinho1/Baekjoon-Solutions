#include <iostream>

using namespace std;

int main() {
    int d1, d2, d3, d4;
    cin >> d1 >> d2 >> d3 >> d4;

    if (d1 < d2 && d2 < d3 && d3 < d4)
        cout << "Fish Rising" << endl;
    else if (d1 > d2 && d2 > d3 && d3 > d4)
        cout << "Fish Diving" << endl;
    else if (d1 == d2 && d2 == d3 && d3 == d4)
        cout << "Fish At Constant Depth" << endl;
    else
        cout << "No Fish" << endl;

    return 0;
}