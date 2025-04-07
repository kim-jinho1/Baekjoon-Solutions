#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<vector<string>>v(15, vector<string>(15));
    string a;
    for (int i = 0; i < 5; i++)
    {
        getline(cin, a);
        for (int j = 0; j < a.length(); j++)
        {
            v[i][j] = a[j];
        }
    }

    for (int i = 0; i < 15; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (v[j][i] == " ") continue;

            cout << v[j][i];
        }
    }
}