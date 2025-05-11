#include <iostream>
using namespace std;

int main()
{
    int n, c = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int b;
        cin >> b;
        if (b < 2) continue;

        bool isTrue = true;
        for (int j = 2; j * j <= b; j++)
        {
            if (b % j == 0)
            {
                isTrue = false;
                break;
            }
        }
        if (isTrue) c++;
    }
    cout << c << endl;
}