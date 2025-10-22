#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, cnt = 0, want = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 0; i < n; i++)
    {
        if (v[i] == want)
        {
            cnt++;
            want = (want + 1) % 3;
        }
    }
    cout << cnt << endl;
}