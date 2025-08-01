#include <iostream>
using namespace std;
int main() {
	int lv;
	cin >> lv;
	if (lv < 206) 
        cout << 1;
	else if (lv < 218) 
        cout << 2;
	else if (lv < 229) 
        cout << 3;
	else 
        cout << 4;
}