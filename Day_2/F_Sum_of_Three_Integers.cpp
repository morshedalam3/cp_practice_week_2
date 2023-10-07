// problem: https://atcoder.jp/contests/abc051/tasks/abc051_b?lang=en
#include<bits/stdc++.h>
using namespace std;
int countAssignments(int K, int S) {
    int count = 0;

    for (int a = 0; a <= K; ++a) {
        for (int b = 0; b <= K; ++b) {
            int c = S - a - b;
            if (c >= 0 && c <= K) {
                count++;
            }
        }
    }

    return count;
}

int main() {
    int K, S;
    cin >> K >> S;

    int result = countAssignments(K, S);
    cout << result << endl;

    return 0;
}