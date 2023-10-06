//Problem: https://codeforces.com/problemset/problem/1676/B
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        int minCandies = a[0];
        int total = 0;

        for (int i = 1; i < n; i++) {
            if (a[i] > minCandies) {
                int extra = a[i] - minCandies;
                total += extra;
            }
        }

        cout << total << endl;
    }

    return 0;
}
