#include <iostream>
using namespace std;
int show(int a, int b) {
   cout << "a-b=" << a - b << endl;
   return a - b;
}
double show(double a, double b) {
   cout << "a-b=" << a - b << endl;
   return a - b;
}
int show(int a, int b, int c) {
   cout << "a-b-c=" << a - b - c << endl;
   return a - b - c;
}

double show(double a, double b, double c) {
   cout << "a-b-c=" << a - b - c << endl;
   return a - b - c;
}


int main()
{
   int type = 2 * show(9, 6);
   cout << "type=" << type << endl;
   cout << show(9, 6, 1) << endl;

   show(9.56, 4.06);
   show(9.56, 4.5, 1.06);
   show('97', 8);
   return 0;
}
