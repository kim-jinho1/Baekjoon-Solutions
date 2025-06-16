#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a;
    cin >> a;
    unordered_set<int> c(a);
    for (int i = 0; i < a; i++)
    {
        int q;
        cin >> q;
        c.insert(q);
    }
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        int q;
        cin >> q;
        if (c.find(q) != c.end()) {
            cout << "1 ";
        }
        else {
            cout << "0 ";
        }
    }
}