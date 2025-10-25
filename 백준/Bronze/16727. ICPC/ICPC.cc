#include <iostream>
using namespace std;
int main() {
    int p1, s1, s2, p2;
    cin >> p1 >> s1 >> s2 >> p2;
    int persepolis = p1 + p2;
    int esteghlal  = s1 + s2;

    if (persepolis > esteghlal) 
        cout << "Persepolis";
    else if (persepolis < esteghlal) 
        cout << "Esteghlal";
    else if (p2 > s1) 
        cout << "Persepolis";
    else if (p2 < s1) 
        cout << "Esteghlal";
    else 
        cout << "Penalty";
}