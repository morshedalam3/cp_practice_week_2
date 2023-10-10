#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;

    while (t--) {
        int L, v, l, r;
        cin >> L >> v >> l >> r;

        int lanterns_in_range = r / v - (l - 1) / v;
        int total_lanterns = L / v;

        int count = total_lanterns - lanterns_in_range;

        cout << count << endl;
    }

    return 0;
}
