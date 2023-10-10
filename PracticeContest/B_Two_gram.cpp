#include<bits/stdc++.h>
using namespace std;
string findMostFrequentTwoGram(string s,int n) {
    map<string, int> twoGramCount;
    for (int i = 0; i < n - 1; i++) {
        string twoGram = s.substr(i, 2);
        twoGramCount[twoGram]++;
    }

    string mostFrequentTwoGram;
    int maxCount = 0;

    // Find the most frequent two-gram
    for (const auto& pair : twoGramCount) {
        if (pair.second > maxCount) {
            maxCount = pair.second;
            mostFrequentTwoGram = pair.first;
        }
    }

    return mostFrequentTwoGram;
}

int main() {
    int n;cin>>n;
    string s;
    cin >> s;
    string result = findMostFrequentTwoGram(s,n);
    cout << result << endl;
    return 0;
}
