#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n,i,x,y;
    cin >> n;

    vector<int> divisors(n);
    for (i = 0; i < n; i++) {
        cin >> divisors[i];
    }

    sort(divisors.begin(), divisors.end());

    x = divisors[n - 1];
    y = 1;

    for (int i = n - 2; i >= 0; i--) {
        if (x % divisors[i] != 0) {
            y = divisors[i];
            break;
        }
    }

    cout << x << " " << y << endl;

    return 0;
}
