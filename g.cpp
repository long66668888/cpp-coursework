#include <iostream>
using namespace std;
void wellcome();
int max1111(int num1, int num2);
int main() {

   cout << "uuuuuuuuuuuu" << max1111(444, 66) << endl;
   int n = 10;
   int m = 20;
   int res = max1111(n, m);
   cout << "res11111=" << res << "\n";

   res = max1111(44, 61);
   cout << "res2222=" << res << "\n";

   wellcome();
   res = max1111(88, 11);
   cout << "res333333333333=" << res << "\n";
   return 0;
}
void wellcome() {
   cout << "欢迎你来c++的世界" << "\n";
}
// 函数返回两个数中较大的那个数

int max1111(int num1, int num2)
{
   // 局部变量声明
   int result;

   if (num1 > num2)
       result = num1;
   else
       result = num2;

   return result;
}
