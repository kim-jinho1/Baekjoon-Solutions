#include <iostream>
#include <string>
using namespace std;

bool isDivisibleBy42(const string& num) {
    long long remainder = 0;
    for (char digit : num)
        remainder = (remainder * 10 + (digit - '0')) % 42;
    return remainder == 0;
}

int main() {
    string n;
    while (cin >> n && n != "0") {
        if (isDivisibleBy42(n))
            cout << "PREMIADO" << endl;
        else
            cout << "TENTE NOVAMENTE" << endl;
    }
}
