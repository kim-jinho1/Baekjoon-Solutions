#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    cin >> n;
    int count = 0;
    while (n--) {
        string S;
        cin >> S;
        if (S.find("01") != string::npos || S.find("OI") != string::npos)
            count++;
    }
    cout << count;
}