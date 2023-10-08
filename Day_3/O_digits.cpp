#include<bits/stdc++.h>
using namespace std;

int countDigitsInBaseK(int N, int K) {
    int count = 0;
    
    while (N > 0) {
        count++;
        N /= K;
    }
    
    return count;
}

int main() {
    int N, K;
    cin >> N >> K;
    
    int numDigits = countDigitsInBaseK(N, K);
    
    cout <<numDigits <<endl;
    
    return 0;
}
