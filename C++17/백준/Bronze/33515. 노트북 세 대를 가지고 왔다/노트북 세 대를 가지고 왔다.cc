#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T1, T2;
    cin >> T1 >> T2;
    int fastest = min(T1, T2);
    cout << fastest << endl;
}
