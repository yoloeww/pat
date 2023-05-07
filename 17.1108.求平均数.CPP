#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;

    int cnt = 0;    // 合法数字个数
    double sum = 0;
    while (n --) {
        string num;
        cin >> num;
        double x;
        
 
       bool success = true;
       try
        {
            size_t idx = sizeof(num); // size type 用来记录大小的数据类型
            x = stof(num, &idx);      // 字符串转换为float型
            // stof判断"5.2abc"这类字符串时视"5.2"为合法,"abc"不合法,但实际上5.2abc不合法
            if (idx < num.size()) success = false; // 经stof处理后变短的字符串不合法
        }
        catch(...)                    // 捕捉所有类型的异常 
        {
            success = false;          // 所有不合法的输入数字都设为error
        }
     if (x < -1000 || x > 1000) success = false;
     
     int k = num.find('.');
     if (k != -1 && num.size() - k > 3)  success = false;
     
      if (success) cnt ++, sum += x;
      else cout<<"ERROR: "<<num <<" "<< "is not a legal number" << endl;
     }
   if (cnt > 1) printf("The average of %d numbers is %.2lf\n", cnt, sum / cnt);
    else if (cnt == 1) printf("The average of 1 number is %.2lf\n", sum);
    else cout << "The average of 0 numbers is Undefined";
  
    return 0;
}
