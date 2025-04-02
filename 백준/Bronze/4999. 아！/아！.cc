#include <iostream>

using namespace std;



int main(){
    string x, y;
    cin.tie(0);
    cout.tie(0);
    cin >> x >> y;
    if(x.size() >= y.size()) cout << "go";
    else cout << "no";
    return 0;
}