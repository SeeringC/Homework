#include <iostream>
using namespace std;

void swap_pointers(char** x, char** y)
{
   char* tmp;
   tmp = *x;
   *x = *y;
   *y = tmp;
}

int main()
{
   char a[] = "I should print second";
   char b[] = "I should print first";

   char* s1 = a;
   char* s2 = b;
   swap_pointers(&s1, &s2);
   cout << "s1 is " << s1 << endl;
   cout << "s2 is " << s2 << endl;
   return 0;
}

// Hàm swap_pointers trong code trên không hoạt động như mong muốn vì các con trỏ x và y được truyền vào hàm chỉ là bản sao của địa chỉ của các con trỏ s1 và s2 trong hàm main(). 
// Việc thay đổi giá trị của x và y trong hàm swap_pointers không ảnh hưởng đến địa chỉ của s1 và s2 trong main().