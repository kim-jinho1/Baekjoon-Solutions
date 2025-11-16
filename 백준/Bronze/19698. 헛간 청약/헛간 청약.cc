#include <iostream>
using namespace std;
int main() {
    int n, w, h, l;
    cin >> n >> w >> h >> l;
    int cnt = (w / l) * (h / l);
    if (cnt > n) 
        cnt = n;
    cout << cnt;
}