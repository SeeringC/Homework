#include <iostream>
using namespace std;

int main()
{
   char a[4] = "abc";
   for (char *cp = a; (*cp) != '\0'; cp += 2)
   {
      cout << (void *)cp << " : " << (*cp) << endl;
   }

   // Kích thước của kiểu char
   cout << "Kích thước của kiểu char: " << sizeof(char) << endl;

   return 0;
}
