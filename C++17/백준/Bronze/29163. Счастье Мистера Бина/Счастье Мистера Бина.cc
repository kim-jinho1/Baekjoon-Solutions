#include <iostream>
using namespace std;

int main() {
	int a, n = 0, m = 0;
cin >> a;
for (int i = 0; i < a; i++) {
    int b;
    cin >> b;
    if (b % 2 == 0) n++;
    else m++;
}
cout << ((n > m) ? "Happy" : "Sad") << endl;

}
