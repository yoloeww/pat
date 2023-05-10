#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int a,b;
    cin >> a >> b;
    int c = a + b;
    string s = to_string(c);

    string t;
    if(s.size() >= 4) {
        for (int i = s.size() - 1, j = 0; i >= 0; i --) {
            t = s[i] + t;
            j ++;
            if (j % 3 == 0 && s[i - 1] != '-' && i) {
                t = ',' + t;
            }
        } 
        cout << t << endl;
    } 
    else 
    cout << s;
    return 0;
}
