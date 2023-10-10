#include<bits/stdc++.h>
using namespace std;

int minDifference(vector<string> words) {
     vector<int> ans;
     for (int i = 0; i < words.size(); i++)
    {
      string s = words[i];
      for (int j = 0; j < words.size(); j++)
      {
        if (i == j)
          continue;
        string s2 = words[j];
        int cnt = 0;
        for (int k = 0; k < s.size(); k++)
        {
          if (s[k] == s2[k])
            continue;
          else
            cnt += abs(s[k] - s2[k]);
        }
        ans.push_back(cnt);
      }
    }
    sort(ans.begin(), ans.end());
    return ans[0];
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
