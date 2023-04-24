#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
// 计算 a+b并以标准格式输出总和----也就是说，
// 从最低位开始每隔三位数加进一个逗号（千位分隔符），
// 如果结果少于四位则不需添加。
int main() {
    int a, b;
    cin >> a >> b;
    int c = a + b;
    string s = to_string(c);
    string t;
    if(s.size() >= 4) {
    for (int i = s.size() - 1, j = 0; i >= 0; i --) {
        t = s[i] + t;
        j ++;
        if (j % 3 == 0 && s[i - 1] != '-' && i)
        t = ',' + t;
    }
    //reverse(t.begin(),t.end());
 
    cout << t << endl;
    }
    else
    cout << s << endl;
    return 0;
}
