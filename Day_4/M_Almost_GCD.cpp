#include<bits/stdc++.h>
using namespace std;

int main() {
   int n;cin>>n;

    vector<int> A(n);
    for (int i = 0; i < n; i++)
    {
       cin>>A[i];
    }
    

    int max_element = A[0];

    for (int num : A) {
        max_element = max(max_element, num);
    }

    unordered_map<int, int> divisor_count;

    for (int k = 2; k <= max_element; k++) {
        int count = 0;
        for (int num : A) {
            if (num % k == 0) {
                count++;
            }
        }
        divisor_count[k] = count;
    }

    int max_gcdness = 0;
    int result = -1;
    for (const auto& pair : divisor_count) {
        if (pair.second > max_gcdness) {
            max_gcdness = pair.second;
            result = pair.first;
        }
    }

    cout << result << endl;

    return 0;
}
