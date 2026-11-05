//#include <iostream>
//using namespace std;
//void wellcome(int a);
//int myadd(int nn);
//int max1111(int num1, int num2);
//
//int a1dea2cifang(int a1, int a2) {
//    int res = 1;
//    for (int i = 0; i < a2; i++) {//2的5次方
//
//        res *= a1;
//    }
//    return res;
//}
//
//int main() {
//
//    int res = 1;
//    int an = 3;
//    int am = 5;
//    res = a1dea2cifang(an, am);
//    cout << "res=" << res << endl;
//
//    int n = 10;
//    //调用函数计算1-n的累加和
//    int readd = myadd(n);
//    wellcome(readd);
//
//    readd = myadd(5);
//    wellcome(readd);
//
//    /*
//        int m = 20;
//        int res = max1111(n, m);
//        cout<<"res11111="<<res<<endl;
//
//        res = max1111(44, 61);
//        cout << "res2222=" << res << endl;
//     */
//
//}
//int myadd(int nn) {
//    //计算1-nn的累加和
//    int sum = 0;
//    for (int i = 1; i <= nn; i++) {
//        sum += i;
//
//    }
//    return sum;
//}
//
//void wellcome(int a) {
//    cout << "欢迎你来c++的世界a=" << a << endl;
//}
//// 函数返回两个数中较大的那个数
//
//int max1111(int num1, int num2)
//{
//    wellcome(num1);
//    cout << "-----------------" << endl;
//    wellcome(num2);
//    // 局部变量声明
//    int result;
//
//    if (num1 > num2)
//        result = num1;
//    else
//        result = num2;
//
//    return result;
//}
