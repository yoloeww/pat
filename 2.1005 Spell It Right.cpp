#include<iostream>
#include<bits/stdc++.h>
const int N = 10;
using namespace std;
vector<string> res;
unordered_map<int,string> p;

int main() {
    string a;
    cin >> a;
     long long sum = 0;
    for(int i = 0; i < a.size(); i++) {
        sum += a[i] - '0';
    }
    if (a =="0") {
    cout << "zero";
    return 0;
    }
    p.insert(pair<int,string>(0,"zero"));
    p[1] = "one";
    p[2] = "two";
    p[3] = "three";
    p[4] = "four";
    p[5] = "five";
    p[6] = "six";
    p[7] = "seven";
    p[8] = "eight";
    p[9] = "nine";
    while (sum) {
        int t = sum % 10;
        res.push_back(p[t]);
        sum /= 10;
    }
    reverse(res.begin(),res.end());
    for (int x = 0; x < res.size() - 1; x ++) {
        cout << res[x] << " ";
    }
    cout << res[res.size() - 1];
    return 0;
}
