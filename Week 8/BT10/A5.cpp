#include <iostream>
#include <cstring>

struct Data {
    int numbers[5];
    char name[10];
};

int main() {
    Data original;
    original.numbers[0] = 1;
    strcpy(original.name, "John");

    Data copy = original;

    // Thay đổi dữ liệu trong bản sao
    copy.numbers[0] = 10;
    strcpy(copy.name, "Alice");

    // In dữ liệu của biến gốc
    std::cout << "Original: " << original.numbers[0] << ", " << original.name << std::endl;
    // Kết quả: Original: 10, Alice

    return 0;
}

// Trong ví dụ trên, khi chúng ta thay đổi dữ liệu trong biến copy, 
// dữ liệu trong biến original cũng bị thay đổi. 
// Điều này xảy ra vì hai biến có trường dữ liệu là mảng và phép gán chỉ sao chép nông.