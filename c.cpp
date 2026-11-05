#include <iostream>
using  namespace std;
int main() {
	int  a;
	a = 2;
	int b = a * 30;
   cout << "b===" << b;
	char c1 = 'a';//char是数字，赋值可以运算
	b = c1;
	cout << "b1===" << b<< endl;
	c1 = 97;
	cout << "c1===" << c1 << endl;
	char c2 = c1 + 1;
	cout << "c2===" << c2 << endl;

//常量
	const float PI = 3.14f;//默认是double，丢失精度，加了f才不会弹警告
	float d = c2 * PI;
	cout << "d======" << d << "\td======" << d << endl;
   int aa = 10;
   aa = aa + 2;
   aa += 2;//aa=aa+2;
   cout << "aa2222=====" << aa << endl;
   aa++;//aa自增1
   aa++;
   cout << "aa333=====" << aa << endl;
   //赋值
   aa = a = 5;
   cout << "aa=====  " << aa << "\t a=" << a << endl;

   //p31
   c1 = 10;
   aa = (c1 + 10, PI * 10);
   cout << "aaaaaaAAAA=====  " << aa << "\t a=" << a << endl;//无整体赋值（没括号）所以输出20

   int res333 = (aa = c1 + 10, aa * 10);
   cout << "res333=====  " << res333 << "\taa=" << aa << endl;


   double ccc = (c1 + 10, PI * 10);
   cout << "aaBBBB=====  " << ccc << "\t a=" << a << endl;

   int ba = 10;
   int rr = (ba += 10, ba * 4);
   cout << "ba=====  " << aa << "\t ba=" << ba << endl;
   cout << "rr=====  " << aa << "\t rr=" << rr << endl;

   a = 3 * 5, a * 4;
   cout << "a=====  " << a << "\t a=" << a << endl;

   cout << "a=====  " << (a = 3 * 5, a * 4) << endl;;
   int a111 = (a = 3 * 5, a * 4);

   cout << "a111=====  " << a111 << endl;
	return 1;
}
