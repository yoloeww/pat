
13


3
#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;

    if (s[0] == '-') cout << '-';

    int k = s.find("E");
//    +1.23400E-03 中 取出 123400
//    并且将会转化成 0.123400
    string a = s[1] + s.substr(3, k - 3);
    int b = stoi(s.substr(k + 1));
//    小数点向左移动一位，缩小十倍，b++
    b ++ ;

//    +1.23400E-03 -> 0.00 123400
    if (b <= 0) a = "0." + string(-b, '0') + a;
//    -1.2E+10 -> -12 000 000 000
    else if (b >= a.size()) a += string(b - a.size(), '0');
//    +1.234E2 -> 123.4
    else a = a.substr(0, b) + '.' + a.substr(b);

    cout << a << endl;

    return 0;
}

