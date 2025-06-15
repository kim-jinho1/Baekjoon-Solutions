#include <iostream>
using namespace std;

int main() {
    int UR, TR, UO, TO;
    cin >> UR >> TR >> UO >> TO;

    int site_score = 56 * UR + 24 * TR + 14 * UO + 6 * TO;

    cout << site_score << endl;
}
