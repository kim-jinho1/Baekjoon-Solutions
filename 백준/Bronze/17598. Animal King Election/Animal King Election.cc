#include <iostream>
#include <string>
using namespace std;
int main() {
    int tiger = 0, lion = 0;
    string s;
    for (int i = 0; i < 9; i++) {
        cin >> s;
        if (s == "Tiger")
            tiger++;
        else
            lion++;
    }
    if (tiger > lion) 
        cout << "Tiger";
    else 
        cout << "Lion";
}