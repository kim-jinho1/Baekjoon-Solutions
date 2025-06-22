#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b;
    cin >> a >> b;

    map<string, bool> c;
    vector<string> result;

    for (int i = 0; i < a; i++) {
        string name;
        cin >> name;
        c[name] = true;
    }

    for (int i = 0; i < b; i++) {
        string name;
        cin >> name;
        if (c[name]) result.push_back(name);
    }

    sort(result.begin(), result.end());

    cout << result.size() << '\n';
    for (string& name : result)
        cout << name << '\n';
}
