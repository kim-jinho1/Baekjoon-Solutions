#include <iostream>
#include <vector>
using namespace std;
int main() {
    int y;
    cin >> y;
    vector<string> winners = {
        "ITMO","SPbSU","SPbSU","ITMO","ITMO",
        "SPbSU","ITMO","ITMO","ITMO","ITMO",
        "ITMO","PetrSU, ITMO","SPbSU","SPbSU","ITMO",
        "ITMO","ITMO","ITMO","SPbSU","ITMO",
        "ITMO","ITMO","ITMO","SPbSU","ITMO"
    };
    cout << winners[y - 1995];
}