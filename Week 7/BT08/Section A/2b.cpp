#include <iostream>
using namespace std;

int main()
{
   int a[4] = {1, 2, 3, 4};
   for (int *cp = a; cp < a + 4; cp++)
   {
      cout << (void *)cp << " : " << (*cp) << endl;
   }

   // Kích thước của kiểu int
   cout << "Kích thước của kiểu int: " << sizeof(int) << endl;

   return 0;
}
