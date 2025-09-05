#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    long long side = (1LL << n) + 1;
    cout << side * side << endl;
}