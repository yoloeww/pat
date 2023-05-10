#include <iostream>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    bool st[256] = {0};
    b += '#';
    for (int i = 0, j = 0; i < a.size(); i++) {
        char x = toupper(a[i]);
        char y = toupper(b[j]);
        if (x == y) j ++;
        else {
            if (!st[x]) cout << x,st[x] = true;
        }
    }
    return 0; 
    
}
