//Problem: https://www.spoj.com/problems/CSUMQ/en/
#include<bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;

    vector<long long> numbers(N); 

    for (int i = 0; i < N; ++i) {
        cin >> numbers[i];
    }

    int Q;
    cin >> Q;

    while (Q--) {
        int i, j;
        cin >> i >> j;

        long long sum = 0;

        for (int k = i; k <= j; ++k) {
            sum += numbers[k];
        }

        cout << sum << endl;
    }

    return 0;
}