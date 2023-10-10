#include<bits/stdc++.h>
using namespace std;

int minDifference(vector<string> words) {
    int n = words.size();
    int m = words[0].size();
    
    int minDiff = INT_MAX;
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < 26; j++) {
            int totalDiff = 0;
            for (int k = 0; k < n; k++) {
                int diff1 = abs(words[k][i] - 'a' - j);
                int diff2 = abs(words[k][i] - 'a' - (j - 1));
                int diff3 = abs(words[k][i] - 'a' - (j + 1));
                totalDiff += min(diff1, min(diff2, diff3));
            }
            minDiff = min(minDiff, totalDiff);
        }
    }
    
    return minDiff;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, m;
        cin >> n >> m;
        
        vector<string> words(n);
        for (int i = 0; i < n; i++) {
            cin >> words[i];
        }
        
        int result = minDifference(words);
        cout << result << endl;
    }
    
    return 0;
}
