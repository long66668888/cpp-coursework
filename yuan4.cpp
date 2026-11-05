// Myarr.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <iomanip>
using namespace std;



int main()
{
    int n[] = {10,9,8,7,6,5,4,3,2}; // n 是一个包含 10 个整数的数组
     int size = sizeof(n) / sizeof(n[0]);
     int sum = 0;

     // 初始化数组元素

     cout << "Element" << setw(13) << "Value" << endl;

     // 输出数组中每个元素的值
     for (int j = 0; j < size; j++)
     {
         cout << setw(7) << j << setw(13) << n[j] << endl;
         sum += n[j];

     }
     cout << "sum=" << sum << "    n[size-1]"<<n[size-1]<<endl;
     
    int aa2[4][2];//  未赋值
    int aa[4][2] = {};//已赋值，元素值默认0
    cout << aa[3][0] << endl;
    cout << aa[3][1] << endl;

    cout << aa[0][0] << endl;
    int  aa1[][4] = { {10,11,12,5},
                      {13,14,15,6},
                      {16,16,18,0}
    };
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << aa1[i][j] << endl;
        }
    }

    aa1[1][2] = 100;
    cout << aa1[1][2] << endl;
    return 0;
	
	}












