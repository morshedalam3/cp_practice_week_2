//Problem: https://codeforces.com/problemset/problem/26/A
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}

int countDistinctPrimeDivisors(int num) {
    int count = 0;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0 && isPrime(i)) {
            ++count;
            while (num % i == 0) {
                num /= i;
            }
        }
    }
    if (num > 1 && isPrime(num)) {
        ++count;
    }
    return count;
}

int countAlmostPrimes(int n) {
    int count = 0;
    for (int i = 2; i <= n; ++i) {
        if (countDistinctPrimeDivisors(i) == 2) {
            ++count;
        }
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    int result = countAlmostPrimes(n);
    cout<< result << endl;
    return 0;
}
