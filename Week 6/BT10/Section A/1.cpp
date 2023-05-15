#include <iostream>

struct Point {
  int x;
  int y;
};

void print(const Point& p) {
  std::cout << "(" << p.x << ", " << p.y << ")";
}

int main() {
  Point p;
  p.x = 3;
  p.y = 5;

  print(p);

  return 0;
}

// Trong đoạn mã trên, chúng ta định nghĩa cấu trúc Point với hai trường x và y kiểu int 
// đại diện cho tọa độ x và tọa độ y của một điểm trong không gian 2 chiều.