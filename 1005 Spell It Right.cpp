//给定一个非负整数N，你的任务是计算N的所有数字的总和，
//并以英语输出总和的每个数字。
#include<iostream>
#include<bits/stdc++.h>
const int N = 10;
using namespace std;
vector<string> res;
unordered_map<int,string> p;

int main() {
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
    string s;
    cin >> s;
    long long sum = 0;
    for(int i = 0; i < s.size();i++) {
        sum += s[i] - '0';
    }
    if (s == "0") {
        cout << "zero";
        return 0;
    }
    while(sum) {
        int t = sum % 10;
        res.push_back(p[t]);
        sum = sum / 10;
    }
    reverse(res.begin(),res.end());
    for (vector<string>::iterator it = res.begin(); it != res.end() - 1; it ++) {
        cout << *it << ' ' ;
    }
    vector<string>::iterator it = res.end() - 1;
	cout << *it << endl;
    return 0;
}
