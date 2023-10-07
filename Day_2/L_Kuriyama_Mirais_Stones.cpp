//Problem: https://codeforces.com/problemset/problem/433/B
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> originalCosts(n);
    vector<long long> sortedCosts(n);

    for (int i = 0; i < n; ++i) {
        cin >> originalCosts[i];
        sortedCosts[i] = originalCosts[i];
    }

    sort(sortedCosts.begin(), sortedCosts.end());

    vector<long long> prefixSum(n + 1);
    vector<long long> prefixSumSorted(n + 1);

    for (int i = 1; i <= n; ++i) {
        prefixSum[i] = prefixSum[i - 1] + originalCosts[i - 1];
        prefixSumSorted[i] = prefixSumSorted[i - 1] + sortedCosts[i - 1];
    }

    int m;
    cin >> m;

    while (m--) {
        int type, l, r;
        cin >> type >> l >> r;

        if (type == 1) {
           
            long long totalCost = prefixSum[r] - prefixSum[l - 1];
            cout << totalCost << endl;
        } else {
            long long totalCost = prefixSumSorted[r] - prefixSumSorted[l - 1];
            cout << totalCost << endl;
        }
    }

    return 0;
}

