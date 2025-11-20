#include <iostream>
using namespace std;
int main() {
    int s, m, l;
    cin >> s >> m >> l;
    int score = s * 1 + m * 2 + l * 3;
    if(score >= 10)
        cout << "happy";
    else
        cout << "sad";
}