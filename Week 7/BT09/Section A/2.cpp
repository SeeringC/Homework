int* p = new int;
int* p2 = p;
*p = 10;
delete p;
p = nullptr; // Gán p thành nullptr để tránh truy cập vào địa chỉ đã được giải phóng
*p2 = 100;
cout << *p2;
delete p2;
p2 = nullptr; // Gán p2 thành nullptr để tránh truy cập vào địa chỉ đã được giải phóng
