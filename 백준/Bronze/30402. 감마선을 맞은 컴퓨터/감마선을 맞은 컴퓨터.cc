#include <iostream>
using namespace std;

int main() {
    char c;
    for (int i = 0; i < 225; i++) {
        cin >> c;
        if (c == 'w')
        {
            cout << "chunbae"; 
            return 0; }
        if (c == 'b') 
        { 
            cout << "nabi"; 
            return 0; 
        }
        if (c == 'g') 
        { 
            cout << "yeongcheol"; 
            return 0; 
        }
    }
}