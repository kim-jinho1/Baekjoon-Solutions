#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    cin >> n;
    int side = (int)sqrt(n);
    cout << "The largest square has side length " << side << "." << endl;
}