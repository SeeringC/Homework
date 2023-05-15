char* a = new char[10];
char* c = a + 3;
for (int i = 0; i < 9; i++) a[i] = 'a'; 
a[9] = '\0';
cerr <<"a: " << "-" << a << "-" << endl;
cerr <<"c: " << "-" << c << "-" << endl;
delete c;
cerr << "a after deleting c:" << "-" << a << "-" << endl; 

// lệnh in cerr cuối cùng sẽ không chạy như mong muốn. 
// Đó là do việc giải phóng bộ nhớ thông qua delete c là không hợp lệ vì c 
// chỉ trỏ tới một phần của mảng a. 
