//Problem: https://atcoder.jp/contests/abc191/tasks/abc191_b?lang=en
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x;cin>>n>>x;
    int a[n];
    for (int i = 0; i <n; i++)
    {
        cin>>a[i];
    }
    vector<int>b;
    for (int i = 0; i < n; i++)
    {
       if (a[i] !=x)
       {
         b.push_back(a[i]);
       }
    }
    for (int i = 0; i <b.size(); i++)
    {
        cout<<b[i]<<" ";
    }
    return 0;
}