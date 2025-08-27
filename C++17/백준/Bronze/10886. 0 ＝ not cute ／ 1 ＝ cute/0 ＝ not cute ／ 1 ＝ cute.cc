#include <iostream>
using namespace std;
int main() {
    int N, x;
    int cute = 0, notCute = 0;

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> x;
        if (x == 1) 
            cute++;
        else 
            notCute++;
    }

    if (cute > notCute)
        cout << "Junhee is cute!";
    else
        cout << "Junhee is not cute!";
}