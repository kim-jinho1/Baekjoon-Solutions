#include <iostream>
using namespace std;

int main() {
    int sleepTime, wakeTime;
    cin >> sleepTime >> wakeTime;

    int sleepDuration = (wakeTime - sleepTime + 24) % 24;
    cout << sleepDuration << endl;
}
