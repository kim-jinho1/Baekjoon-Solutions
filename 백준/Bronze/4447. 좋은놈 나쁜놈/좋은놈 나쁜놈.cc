#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++) {
        int g = 0, b = 0;
        string str;
        getline(cin, str);

        for (int j = 0; j < str.size(); j++) {
            if (str[j] == 'g' || str[j] == 'G')
                g++;
            else if (str[j] == 'b' || str[j] == 'B')
                b++;
        }

        cout << str << " is ";
        if (g > b)
            cout << "GOOD";
        else if (g < b)
            cout << "A BADDY";
        else
            cout << "NEUTRAL";
        cout << '\n';
    }
}