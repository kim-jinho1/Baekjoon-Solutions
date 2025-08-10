#include <iostream>
using namespace std;

int main() {
    int a,b,c,d;
    if(!(cin>>a>>b>>c>>d)) return 0;
    int sum = a+b+c+d;
    cout << sum/60 << '\n' << sum%60 << '\n';
}
