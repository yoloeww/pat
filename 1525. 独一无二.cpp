#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//数列中，只出现过一次且排位最靠前的那个数字就是中奖号码。
const int N = 1000010;
int a[N];
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    unordered_map<int,int> mp;
    for (int i = 0; i < n; i ++) {
        mp[a[i]]++;
    }
    int flag = 0;
    for (int i = 0; i < mp.size(); i++) {
        if (mp[a[i]] == 1) {
            cout << a[i];
            flag = 1;
            return 0;
        }
    }
    if (flag == 0)
    cout << "None" << endl;
    return 0;
}
