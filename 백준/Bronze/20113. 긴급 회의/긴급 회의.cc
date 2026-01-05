#include <iostream>
#include <map>
using namespace std;
int main() {
    int n;
    cin >> n;
    map<int, int> m;
    int skip = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x == 0) 
            skip++;
        else
            m[x]++;
    }
    int max = 0;
    int target = -1;
    bool isSkip = false;
    for (auto& p : m) {
        if (p.second > max) {
            max = p.second;
            target = p.first;
            isSkip = false;
        }
        else if (p.second == max)
            isSkip = true;
    }
    if (isSkip)
        cout << "skipped\n";
    else
        cout << target << '\n';
    return 0;
}