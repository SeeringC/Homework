#include <iostream>

int* createLocalPointer()
{
    int x = 10;
    int* ptr = &x; // Con trỏ trỏ tới biến địa phương x
    return ptr;
}

int main()
{
    int* localPtr = createLocalPointer(); // Nhận con trỏ từ hàm createLocalPointer()
    // Khi chương trình thoát khỏi phạm vi của hàm createLocalPointer(), biến địa phương x đã bị hủy.
    // Con trỏ localPtr vẫn trỏ đến vùng nhớ không hợp lệ.
    std::cout << *localPtr; // Truy cập vào vùng nhớ không hợp lệ dẫn đến undefined behavior
    delete localPtr; // Giải phóng con trỏ trỏ đến vùng nhớ không hợp lệ
    return 0;
}
