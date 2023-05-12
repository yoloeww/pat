#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        long long a,b,c;
        cin >> a >> b >> c;
        if (a + b > c) {
            cout << "Case #" << i <<": true" ;
        }
        else {
            cout << "Case #" << i <<": false" ;
        }
    }
    return 0;
}
