#include <iostream>
using namespace std;

int main()
{
   double a[4] = {1.0, 2.0, 3.0, 4.0};
   for (double *cp = a; cp < a + 4; cp++)
   {
      cout << (void *)cp << " : " << (*cp) << endl;
   }

   // Kích thước của kiểu double
   cout << "Kích thước của kiểu double: " << sizeof(double) << endl;

   return 0;
}
