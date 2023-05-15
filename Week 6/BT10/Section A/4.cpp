#include <iostream>

struct Point {
  int x;
  int y;
};

int main() {
  Point p;

  std::cout << "Address of p: " << &p << std::endl;
  std::cout << "Address of p.x: " << &(p.x) << std::endl;
  std::cout << "Address of p.y: " << &(p.y) << std::endl;

  return 0;
}

// Khi chạy chương trình trên, ta có thể nhận thấy sự tương đối giữa các địa chỉ của các trường x và y so với địa chỉ của biến p. 
// Một số điểm quan sát là:

// - Địa chỉ của biến p chính là địa chỉ bắt đầu của biến p.
// - Địa chỉ của trường x có thể gần với địa chỉ của biến p (tùy vào cách trình biên dịch sắp xếp trường dữ liệu trong cấu trúc).
// - Địa chỉ của trường y sẽ cách xa địa chỉ của biến p và trường x.

// Tuy nhiên, vị trí cụ thể của các trường x và y trong bộ nhớ có thể thay đổi 
// tùy vào các yếu tố khác như cách trình biên dịch và bố trí bộ nhớ của hệ thống.