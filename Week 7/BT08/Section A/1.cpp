#include <iostream>

void f(int xval)
{
   int x;
   x = xval;
   std::cout << "Địa chỉ của biến x trong hàm f(): " << &x << std::endl;
}

void g(int yval)
{
   int y;
   std::cout << "Địa chỉ của biến y trong hàm g(): " << &y << std::endl;
}

int main()
{
   f(7);
   g(11);
   return 0;
}

// Nhận xét về địa chỉ của hai biến x và y:

// Địa chỉ của biến x trong hàm f() và biến y trong hàm g() sẽ khác nhau.
// Địa chỉ của biến x trong hàm f() và biến y trong hàm g() được tính toán trong các vùng nhớ riêng biệt.
// Mỗi hàm được gọi sẽ có một khung đỉnh riêng trong bộ nhớ gọi là stack frame, và các biến cục bộ của hàm sẽ được lưu trữ trong khung đỉnh này.
// Khi hàm f() được gọi, một vùng nhớ mới được cấp phát cho biến x trong khung đỉnh của hàm f(). Do đó, địa chỉ của biến x trong hàm f() sẽ khác với địa chỉ của biến y trong hàm g().
// Khi hàm g() được gọi, một vùng nhớ mới được cấp phát cho biến y trong khung đỉnh của hàm g().