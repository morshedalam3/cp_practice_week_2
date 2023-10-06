//Problem: https://codeforces.com/problemset/problem/102/B
#include<bits/stdc++.h>
using namespace std;

int sumOfDigits(const string& num) {
    int sum = 0;
    for (char digit : num) {
        sum += digit - '0';
    }
    return sum;
}

int countStepsToOneDigit(const string& num) {
    if (num.size() == 1) {
        return 0;
    } else {
        int sum = sumOfDigits(num);
        return 1 + countStepsToOneDigit(to_string(sum));
    }
}

int main() {
    string input;
    cin >> input;

    if (input == "0") {
        cout << "0" << endl;
    } else {
        int steps = countStepsToOneDigit(input);
        cout << steps << endl;
    }

    return 0;
}
