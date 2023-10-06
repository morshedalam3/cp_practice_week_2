//Problem: https://codeforces.com/problemset/problem/1669/B
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        
        for (int i = 0; i < n; i++) {
            cin >> a[i]; 
        }
        
        map<int, int> mp;
        int result = -1;

        for (int i = 0; i < n; i++) {
            mp[a[i]]++;
            if (mp[a[i]] == 3) { 
                result = a[i];
                break;
            }
        }
        
        cout << result << endl;
    }
      
    return 0;
}
