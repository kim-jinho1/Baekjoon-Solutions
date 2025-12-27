#include <iostream>
using namespace std;
int main() {
    string today;
    int n;
    cin >> today;
    cin >> n;
    int count = 0;
    for (int i = 0; i < n; i++) {
        string expire;
        cin >> expire;
        if (expire >= today)
            count++;
    }
    cout << count;
}