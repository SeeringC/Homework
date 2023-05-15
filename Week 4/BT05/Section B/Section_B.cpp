1. Hàm majority():
bool majority(bool a, bool b, bool c) {
    return (a + b + c >= 2);
}
2. Hàm eq():
bool eq(int arr1[], int arr2[], int n) {
    for (int i = 0; i < n; i++) {
        if (arr1[i] != arr2[i]) {
            return false;
        }
    }
    return true;
}
3. Trong vòng lặp for, hàm cube() sẽ chạy 1000 lần, từ i = 0 đến i = 999.

4. Chương trình sẽ in ra: "17 -17". Giải thích: Biến a không thay đổi giá trị sau khi gọi hàm negate(), vì tham số a được truyền vào hàm theo kiểu pass-by-value.

5. Để kiểm tra đúng/sai của các cài đặt hàm min(), ta có thể sử dụng các bộ test sau:
#include <iostream>

int min(int a, int b, int c, int d) {
   if (a <= b && a <= c && a <= d) return a;
   if (b <= c && b <= d) return b;
   if (c <= d) return c;
   return d;
}

int min(int a, int b, int c, int d) {
   int min = a;
   if (b < min) min = b;
   if (c < min) min = c;
   if (d < min) min = d;
   return min;
}

int min(int a, int b, int c, int d) {
   if (a < b && a < c && a < d) return a;
   if (b < c && b < d) return b;
   if (c < d) return c;
   return d;
}

int min(int a, int b, int c, int d) {
   if (a <= b) {
      if (a <= c) {
         if (a <= d)  return a;
         else return d;
      }
      if (c <= d) return c;
      else return d;
   }
   if (b <= c) {
      if (b <= d) return b;
      else return d;
   }
   else if (c <= d) return c;
   return d;
}

int min(int a, int b) {
   if (a <= b) return a;
   else        return b;
}

int min(int a, int b, int c, int d) {
   return min(min(a, b), min(c, d));
}

int main() {
    // Test case 1
    int result1 = min(1, 2, 3, 4);
    std::cout << "Result 1: " << result1 << std::endl;  

    // Test case 2
    int result2 = min(-1, 0, 1, 2);
    std::cout << "Result 2: " << result2 << std::endl;
}


7. D
8. A
9. B
10. B

11. C

12. B

13. D

14. D

15. B

16. D

17. A

18. A

19. B

20. C

21. B

22. C

23. A 
24. A

25. A 

26. B
