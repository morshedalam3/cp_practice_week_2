#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> flats(n);
    for (int i = 0; i < n; i++) {
        cin >> flats[i];
    }

    int k = 0;

    for (int i = 1; i < n - 1; i++) {
        if (flats[i - 1] == 1 && flats[i] == 0 && flats[i + 1] == 1) {
            k++;
            flats[i + 1] = 0;
        }
    }

    cout << k << endl;

    return 0;
}
