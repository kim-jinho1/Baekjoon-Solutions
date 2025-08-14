#include <iostream>
using namespace std;
int main() {
    int a;
    cin >> a;
    int count = 0;
    int res = 1;
    if (a < 10)cout << count;
    else {
        while (a >= 10) {
            while (a != 0) {
                res *= a % 10;
                a = a / 10;
            }
            a = res;
            res = 1;
            count++;
        }
        cout << count;
    }
}