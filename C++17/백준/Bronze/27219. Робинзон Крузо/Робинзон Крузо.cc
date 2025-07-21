#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int v = n / 5;
    int i = n % 5;
    for (int j = 0; j < v; j++)
        cout << 'V';
    for (int j = 0; j < i; j++) 
        cout << 'I';
}
