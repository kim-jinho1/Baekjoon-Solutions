#include <iostream>
using namespace std;
int main() {
    int e, f, c;
    cin >> e >> f >> c;
    int bottles = e + f;
    int result = 0;
    while (bottles >= c) {
        int drink = bottles / c;
        result += drink;
        bottles = bottles % c + drink;
    }
    cout << result;
    return 0;
}