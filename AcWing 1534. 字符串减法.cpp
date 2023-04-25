#include <iostream>
#include <unordered_set>

using namespace std;

string s1, s2;

int main()
{
    getline(cin, s1);
    getline(cin, s2);

    unordered_set<char> hash;  // 定义哈希表
    for (auto c : s2) hash.insert(c);  // 将s2中的字符插入哈希表

    string res;
    for (auto c : s1)
        if (!hash.count(c))
            res += c;

    cout << res << endl;

    return 0;
}

