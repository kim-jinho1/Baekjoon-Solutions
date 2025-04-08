#include <iostream>

using namespace std;
int main()
{
    int arr[26] = { 3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10 };
    char a[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char s[16];
    int cnt = 0;
    cin >> s;
    for (int i = 0; s[i] != '\0'; i++)
        for (int j = 0; j < 26; j++)
            if (s[i] == a[j])
                cnt += arr[j];
    cout << cnt;

}