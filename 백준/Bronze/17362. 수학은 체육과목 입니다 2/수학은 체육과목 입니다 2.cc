#include <iostream>
using namespace std;
int main() {
    long long n;
    cin >> n;
    int a[8] = {1,2,3,4,5,4,3,2};
    cout << a[(n - 1) % 8];
}