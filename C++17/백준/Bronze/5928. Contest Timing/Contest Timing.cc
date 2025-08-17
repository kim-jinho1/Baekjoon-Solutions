#include <iostream>

using namespace std;

int main() {
    int D, H, M;
    cin >> D >> H >> M;
    
    int start_total_minutes = 11 * 24 * 60 + 11 * 60 + 11;
    int end_total_minutes = D * 24 * 60 + H * 60 + M;
    int elapsed_minutes = end_total_minutes - start_total_minutes;
    
    if (elapsed_minutes < 0)
        cout << -1 << endl;
    else
        cout << elapsed_minutes << endl;
}