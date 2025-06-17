#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main()
{
    int n, answer = 0;
    cin >> n;
    string str;

    for (int i = 0; i < n; i++)
    {
        unordered_map<char, int> m;
        bool groupWord = true;
        cin >> str;

        for (int j = 0; j < str.size(); j++)
        {
            if (m.count(str[j]))
            {
                if (m[str[j]] != j - 1)
                {
                    groupWord = false;
                    break;
                }
            }
            m[str[j]] = j;
        }

        if (groupWord)
            answer++;
    }

    cout << answer;
}
