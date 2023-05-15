#include <iostream>

char* weird_string() {
    char* c = new char[7]; 
    strcpy(c, "123345"); 

    return c;
}

int main() {
    char* result = weird_string();
    std::cout << result << std::endl;

    delete[] result; 

    return 0;
}


// mảng c là một mảng cục bộ trong hàm weird_string(), 
// tức là nó chỉ tồn tại trong phạm vi của hàm đó. 
// Khi hàm weird_string() kết thúc, 
// mảng c sẽ không còn tồn tại và con trỏ được trả về sẽ trỏ tới vùng nhớ không hợp lệ. 
// Điều này dẫn đến lỗi undefined behavior, 
// có thể làm cho chương trình hoạt động không đúng hoặc crash.