#include<bits/stdc++.h>
using namespace std;

int findUniquePyani(const vector<int>& pyanis) {
    unordered_map<int, int> pyaniCount;
    
    for (int pyani : pyanis) {
        pyaniCount[pyani]++;
    }
    
    for (const auto& pair : pyaniCount) {
        if (pair.second == 1) {
            return pair.first;
        }
    }

    return -1;
}

int main() {
    int N;
    cin >> N;
    vector<int> pyanis;
    
    for (int i = 0; i < N; i++) {
        int pyani;
        cin >> pyani;
        pyanis.push_back(pyani);
    }
    
    int unique = findUniquePyani(pyanis);
    
    if (unique != -1) {
        cout << unique << endl;
    } 

    return 0;
}
