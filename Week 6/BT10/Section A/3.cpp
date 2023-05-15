#include <iostream>

struct Point {
  int x;
  int y;
};

Point mid_point(const Point& p1, const Point& p2) {
  Point mid;
  mid.x = (p1.x + p2.x) / 2;
  mid.y = (p1.y + p2.y) / 2;
  return mid;
}

int main() {
  Point p1, p2;
  p1.x = 1;
  p1.y = 2;
  p2.x = 3;
  p2.y = 4;

  Point mid = mid_point(p1, p2);

  std::cout << "Mid point coordinates: (" << mid.x << ", " << mid.y << ")" << std::endl;

  return 0;
}
