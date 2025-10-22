#include <iostream>
using namespace std;
int main() {
    string me, t;
    int n, cnt=0;
    cin >> me >> n;
    while(n--) { 
        cin >> t;
        if(t==me) 
            cnt++;
    }
    cout << cnt;
}