#include <iostream>
using namespace std;
int main()
{
    int n, num1 = 0, num2 = 0;
    string s;
    cin >> n >> s;
    
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
            num1++;
        else
            num2++;
    }

    cout << (num1 > num2 ? "A" : num1 < num2 ? "B" : "Tie") << endl;
}