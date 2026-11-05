#include <iostream>
using  namespace std;
int main() {
	int a = 10;
	cout << "a1=====" << a << endl;
	a++;
	cout << "a2=====" << a << endl;
	a = 100;
	int c = a++;
	cout << "a3=====" << a << endl;
	cout << "c1=====" << c << endl;
	a = 200;
	int d = --a;
	cout << "a4=====" << a << endl;
	cout << "d=====" << d << endl;
	a = 100;
	c = (a++);
	cout << "a3=====" << a << endl;
	cout << "c1=====" << c << endl;
}
