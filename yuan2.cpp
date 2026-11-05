#include <iostream>
using namespace std;
short int x(unsigned short int &a, unsigned short int &b) {
	short int c;
	if (b == 0) {
		c = -1;
		return c;
	}
	else {
		c = a / b;
		return c;
	}
}
	int main() {
	unsigned short int a, b;
	
   cout << "请输入a,b" << "\n";
   cin >> a >> b;
	short int y = x(a,b);
	cout << "c==" << y<< "\n";	
}
