#include <iostream>
using namespace std;
long long  cheng(int x, int n);
long long jia(long long a, long long b);
int main() {
	
		
	int a=789, b=616546;
	long long abc = jia(a, b);
	cout << "jia=" << abc;
	int x, n;
   cout << "请输入x";
	cin >> x;
	cout << "请输入n";
	cin >> n;
	long long res = cheng(x, n);
   cout << "uuuuuuuuu=" << res << "\n";
}

long long cheng(int x, int n) {
	long long  p = x;
	int i = 1;
	do {
		i++;
		p = p * x;
	} while (i < n);
		
	return p;
}
long long jia(long long a, long long b) {
	long long c = a;
	long long d = a;
	while (c <b) {
		c++;
	    d += c;
	}
	return d;
}
