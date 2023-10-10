#include<bits/stdc++.h>
using namespace std;

int subtract_k_times(int n, int k) {
    for (int i = 0; i < k; i++) {
        if (n % 10 == 0) {
            n /= 10;
        } else {
            n -= 1;
        }
    }
    return n;
}

int main() {
    int n, k;
    cin >> n >> k;
    int result = subtract_k_times(n, k);
    cout << result << endl;
    return 0;
}
