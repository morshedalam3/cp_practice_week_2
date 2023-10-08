#include <bits/stdc++.h>
using namespace std;

bool isValid(string s) {
    int countT = 0;
    int counti = 0;
    int countm = 0;
    int countu = 0;
    int countr = 0;

    for (char c : s) {
        if (c == 'T') {
            countT++;
        } else if (c == 'i') {
            counti++;
        } else if (c == 'm') {
            countm++;
        } else if (c == 'u') {
            countu++;
        } else if (c == 'r') {
            countr++;
        } else {
            return false;
        }
    }
    
    return countT == 1 && counti == 1 && countm == 1 && countu == 1 && countr == 1;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        if (n == 5) {
            if (isValid(s)) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
