#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class aa {
public:
    int a;
    string b;
    aa(int a, string b) : a(a), b(b) {}
};

int main()
{
    int a;
    cin >> a;
    vector<aa> v;
    for (int i = 0; i < a; i++)
    {
        int q;
        string w;
        cin >> q >> w;
        v.push_back(aa(q, w));
    }

    stable_sort(v.begin(), v.end(), [](const aa& x, const aa& y) {
        return x.a < y.a;
        });

    for (int i = 0; i < a; i++)
        cout << v[i].a << " " << v[i].b << "\n";
}