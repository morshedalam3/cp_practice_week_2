// Problem: https://codeforces.com/problemset/problem/271/A
#include<bits/stdc++.h>
using namespace std;
bool hasDistinctDigits(int year) {
    set<int> digits;

    while (year > 0) {
        int digit = year % 10;

        if (digits.find(digit) != digits.end()) {
            return false;
        }

        digits.insert(digit);
        year /= 10;
    }

    return true;
}

int findDistinctYear(int year) {
    while (true) {
        year++;
        if (hasDistinctDigits(year)) {
            return year;
        }
    }
}

int main() {
    int givenYear;
    cin >> givenYear;

    int result = findDistinctYear(givenYear);
    cout << result << endl;

    return 0;
}