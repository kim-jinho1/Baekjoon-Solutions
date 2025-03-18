#include <iostream>
using namespace std;

int main() {
    int a, b, c = 0, d = 0;
    cin >> a >> b;
   
    int a1 = a;
    int b1 = b;
  
    int k = 2, w = 1;
    c=0;
    if(a > b){
        c = b;
    }
    else{
        c = a;
    }

    for(int i = c; i > 0;i--){
        if(a % k == 0 && b % k == 0){
            w = k;
        }
        k++;
    }

    if(w != 1){
        cout << w << endl;
    }
    else{
        cout << 1 << endl;
    }

    a = a1;
    b = b1;
    c = a;
    d = b;
    while (true) {
        if (a == b) {
            cout << a << endl;
            break;
        }
        else if (a < b) {
            a = a + c;
        }
        else if (a > b) {
            b = b + d;
        }
    }
    return 0;
}