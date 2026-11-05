#include <iostream>
using namespace std;

unsigned fac(unsigned i) {

   cout << "i=" << i << endl;
   int  f;
   if (i == 0)
       f = 1;
   //return 1;
   else
       f = i * fac(i - 1);
   //return   i * fac(i - 1);
   return f;

}
int main() {

   int res = fac(4);
   cout << res << endl;
   return 0;

}
