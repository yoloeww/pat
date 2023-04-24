#include<iostream>
#include<vector>
#include<string>
using namespace std;
const int N = 100;
struct s{
     string id;
     string t1;
     string t2;
}s[N];
int main() {
    int n;
    cin >> n;
    for (int i= 0; i < n; i++) {
        cin >> s[i].id >> s[i].t1 >> s[i].t2;
    }
    string imin, imax, tmin = "9999999999", tmax = "0";
    for (int i = 0; i < n; i++) {
        if (s[i].t1 < tmin) {
            tmin = s[i].t1;
            imin = s[i].id;
        }
        if (s[i].t2 > tmax) {
            tmax = s[i].t2;
            imax = s[i].id;
        }
    }
    cout << imin << " " << imax;
    return 0;
}
