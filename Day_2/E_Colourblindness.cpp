// Problem :https://codeforces.com/problemset/problem/1722/B
#include<bits/stdc++.h>
using namespace std;
bool areRowsColoredTheSame(string row1, string row2) {
    int n = row1.length();

    for (int i = 0; i < n; ++i) {
        if ((row1[i] != row2[i]) && (row1[i] == 'R' || row2[i] == 'R')) {
            return false;
        }
    }

    return true;
}

int main() {
    int t;cin>>t;
    while (t--)
    {
        int n;
    cin >> n;

    string row1, row2;
    cin >> row1 >> row2;

    bool result = areRowsColoredTheSame(row1, row2);

    if (result) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    }
    
    

    return 0;
}