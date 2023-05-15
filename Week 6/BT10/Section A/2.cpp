#include <iostream>

struct Point {
  int x;
  int y;
};

void passByValue(Point p) {
  std::cout << "Inside passByValue: Address of p: " << &p << std::endl;
  std::cout << "Inside passByValue: p.x = " << p.x << ", p.y = " << p.y << std::endl;

  p.x = 10;
  p.y = 20;
}

void passByReference(Point& p) {
  std::cout << "Inside passByReference: Address of p: " << &p << std::endl;
  std::cout << "Inside passByReference: p.x = " << p.x << ", p.y = " << p.y << std::endl;

  p.x = 10;
  p.y = 20;
}

int main() {
  Point p;
  p.x = 3;
  p.y = 5;

  std::cout << "Address of p in main: " << &p << std::endl;
  std::cout << "Before passByValue: p.x = " << p.x << ", p.y = " << p.y << std::endl;
  passByValue(p);
  std::cout << "After passByValue: p.x = " << p.x << ", p.y = " << p.y << std::endl;

  std::cout << "\n";

  std::cout << "Before passByReference: p.x = " << p.x << ", p.y = " << p.y << std::endl;
  passByReference(p);
  std::cout << "After passByReference: p.x = " << p.x << ", p.y = " << p.y << std::endl;

  return 0;
}
