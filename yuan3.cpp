#include <iostream>
using namespace std;
void x(int a,int c) {
	cin>> a;
	int b;
	do {
		b = a / 2;
		c = a % 2;
		a = b;
	} 
	while (a == 0);
	return ;


}
int main() {

}
