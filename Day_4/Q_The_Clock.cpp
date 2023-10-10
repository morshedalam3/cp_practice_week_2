#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(const string& time) {
    return (time[0] == time[4] && time[1] == time[3]);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        int x;
        cin >> s >> x;

        int count = 0;
        string currentTime = s;

        set<string> palindromes;
        for (int hh = 0; hh <= 23; hh++) {
            for (int mm = 0; mm <= 59; mm++) {
                string time = (hh < 10 ? "0" : "") + to_string(hh) + ":" + (mm < 10 ? "0" : "") + to_string(mm);
                if (isPalindrome(time)) {
                    palindromes.insert(time);
                }
            }
        }
         
        while (true) {
            if (palindromes.count(currentTime)) {
                count++;
            }

            int hh = stoi(currentTime.substr(0, 2));
            int mm = stoi(currentTime.substr(3, 2));

            mm += x;
            hh += mm / 60;
            mm %= 60;
            hh %= 24;

            currentTime = (hh < 10 ? "0" : "") + to_string(hh) + ":" + (mm < 10 ? "0" : "") + to_string(mm);

            if (currentTime == s) {
                break;
            }
        }

        cout << count << endl;
    }

    return 0;
}
