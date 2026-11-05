#include <iostream>
using namespace std;
void a(int& a, int& b) {
   cout << "a=" << a << "   b=" << b << endl;
   int temp = a;
   a = b;
   b = temp;
   cout << "a=" << a << "   b=" << b << endl;
}
int main() {
   
   int x = 5;
   int y = 10;
   cout << "x=" << x << "   y=" << y << endl;

   a(x, y);
   cout << "x=" << x << "   y=" << y << endl;
   int a1 = 10;
   int& da1 = a1;//取别名
   cout <<"a1 的内存地址="<< & a1 << endl;//&叫取地址
   cout << "da1 的内存地址=" << &da1 << endl;

   da1 = 999;
   cout << "a1==========" << a1 << endl;
   a1 = 888;
   cout << "da1==========" << da1 << endl;


   int b = 11;
   int c = b;
   cout << "b 的内存地址=" << &b << endl;
   cout << "c 的内存地址=" << &c << endl;
   
   return 0;
}
