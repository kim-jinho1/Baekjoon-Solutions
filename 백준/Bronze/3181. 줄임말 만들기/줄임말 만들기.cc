#include <iostream>
#include <sstream>
#include <vector>
using namespace std;
int main() {
    vector<string> ignore = {"i","pa","te","ni","niti","a","ali","nego","no","ili"};
    string s, w;
    getline(cin, s);
    stringstream ss(s);
    bool first = true;
    while (ss >> w) {
        bool skip = false;
        if (!first) {
            for (auto& ig : ignore) {
                if (w == ig) {
                    skip = true; 
                    break; 
                }
            }
        }
        first = false;
        if (!skip)
            cout << (char)toupper(w[0]);
    }
}