#include <iostream>
using  namespace std;
int main()
{
		int x = 20;
		int y = 10;
		cout << "请输入x=";
		cin >> x;
		cout << "x=====" << x << endl;
		if (x > y) {
			cout <<"----------"<<endl<< "最大值x=" << x << endl;
		}
		else//if else语句算几句话问豆包，cout语句，基本逻辑
	if (x == y) {
				cout << "x=11111==" << x << endl;
				cout << "x======y=" << x << endl;;
	
			}
			else {
				cout << "x<y,最大值y=" << y << endl;
			}
	cout << 10 % 3 << endl;//取余数
	cout << 10 / 3 << endl;//取整数
	
	
	
	
	 }
	int n;
	for (n = 100; n <= 200; n += 2);
	{
		cout << n << "for次" << endl;
	}
	return 0;
}

