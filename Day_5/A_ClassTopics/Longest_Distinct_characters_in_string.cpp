//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars (string S);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;

        cout << longestSubstrDistinctChars (S) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends


int longestSubstrDistinctChars (string S)
{
    int n = S.size();
    int maxLen = 0;
    int i = 0, j = 0;
    unordered_map<char, int> charIndex;

    while (j < n) {
        if (charIndex.find(S[j]) != charIndex.end()) {
            i = max(charIndex[S[j]] + 1, i);
        }
        charIndex[S[j]] = j;
        maxLen = max(maxLen, j - i + 1);
        j++;
    }

    return maxLen;
}