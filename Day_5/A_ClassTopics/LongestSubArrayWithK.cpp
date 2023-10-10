#include<bits/stdc++.h>
using namespace std;
int longestSubarrayWithSumK(vector<int> a, long long k) {
    int i = 0, j = 0, mx = 0;
    long long sum = 0;
    int n = a.size();
     while (j < n)
    {
        sum += a[j];
        while (sum > k)
        {
            sum -= a[i];
            i++;
        }
        if (sum == k)
        {
            mx = max(mx, j - i + 1);
        }
        j++;
    }
    return mx;
}

int main(){
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int resutl = longestSubarrayWithSumK(a,k);
    return 0;
}
