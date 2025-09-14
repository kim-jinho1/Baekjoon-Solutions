#include <iostream>
using namespace std;
int main() {
    int speedLimit, recordedSpeed;
    cin >> speedLimit >> recordedSpeed;
    int overSpeed = recordedSpeed - speedLimit;
    if (overSpeed <= 0)
        cout << "Congratulations, you are within the speed limit!" << endl;
    else if (overSpeed >= 1 && overSpeed <= 20)
        cout << "You are speeding and your fine is $100." << endl;
    else if (overSpeed >= 21 && overSpeed <= 30)
        cout << "You are speeding and your fine is $270." << endl;
    else
        cout << "You are speeding and your fine is $500." << endl;
}