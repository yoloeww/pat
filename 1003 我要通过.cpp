#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    for (int i = 2; i <= n / i; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main() {
    int n;
    int res = 0;
    cin >> n;
    for (int i = 2; i <= n; i ++) {
        int t = i + 2;
        if (isPrime(t) && isPrime(i))
            res ++;
    }
    cout << res;
    return 0;
}
