#include <iostream>
using namespace std;

int main() {
    int last[3];
    for (int i = 0; i < 3; i++)
        cin >> last[i];
    int fixed[10] = {9,7,8,0,9,2,1,4,1,8};
    int sum = 0;
    for (int i = 0; i < 10; i++)
        sum += fixed[i] * (i % 2 == 0 ? 1 : 3);
    for (int i = 0; i < 3; i++)
        sum += last[i] * ((10 + i) % 2 == 0 ? 1 : 3);
    cout << "The 1-3-sum is " << sum << endl;
}