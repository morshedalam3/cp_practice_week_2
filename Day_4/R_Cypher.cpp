#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
           cin>>a[i];
        }
        vector<pair<int,string>>moves(n);
        for (int i = 0; i < n; i++) {
            cin >> moves[i].first >> moves[i].second;
        }
       vector<int> originalSequence(n, 0);
       for (int i = 0; i <n; i++) {
        int finalDigit = a[i];
        int totalMoves = moves[i].first;
        string moveString = moves[i].second;
         for (char move : moveString) {
            if (move == 'U') {
                finalDigit = (finalDigit -1 +10) % 10;
            } else {
                finalDigit = (finalDigit +1) % 10;
            }
        }
        originalSequence[i] = finalDigit;
    }
        for (int i = 0; i < n; i++) {
        cout << originalSequence[i] << " ";
    }
     cout<<endl;  
        
    }
      
    return 0;
}