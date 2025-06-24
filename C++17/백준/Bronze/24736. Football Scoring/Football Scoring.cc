#include <iostream>
using namespace std;

int calcScore(int t, int f, int s, int p, int c) {
    return t * 6 + f * 3 + s * 2 + p * 1 + c * 2;
}

int main() {
    int t1, f1, s1, p1, c1;
    int t2, f2, s2, p2, c2;

    cin >> t1 >> f1 >> s1 >> p1 >> c1;
    cin >> t2 >> f2 >> s2 >> p2 >> c2;

    int score1 = calcScore(t1, f1, s1, p1, c1);
    int score2 = calcScore(t2, f2, s2, p2, c2);

    cout << score1 << " " << score2 << endl;
}
