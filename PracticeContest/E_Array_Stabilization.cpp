#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    int instability1 = a[n - 1] - a[1];
    int instability2 = a[n - 2] - a[0];
    int min_instability = min(instability1, instability2);

    cout << min_instability << endl;

    return 0;
}
