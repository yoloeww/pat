#include<iostream>
using namespace std;
const int N = 100;
char g[N][N];
int main() {
    string str;
    cin >> str;
    int n = str.size();
    int n1,n2;
    n1 = (n + 2) / 3;
    n2 = n + 2 - n1 * 2;
    int k = 0;
    for (int i = 0; i < n1; i++) {
       g[i][0] = str[k ++];
    }
    for (int i = 1; i < n2; i++) {
        g[n1 - 1][i] = str[k++];
    }
    for (int i = n1 - 2; i >= 0; i--) {
        g[i][n2 - 1] = str[k ++];
    }
    
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (g[i][j]) cout << g[i][j];
            else cout << " ";          
        }
       cout << endl;
    }
    return 0;
}
