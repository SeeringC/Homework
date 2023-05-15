#include <iostream>
#include <string>

using namespace std;

// Hàm in ra một dòng gồm M dấu cách và N dấu '*'
void printLine(int M, int N) {
    string line = string(M, ' ') + string(N, '*');
    cout << line << endl;
}

// Hàm in ra tam giác hình sao
void printTriangle(int height) {
    for (int i = 1; i <= height; i++) {
        int numSpaces = height - i;
        int numStars = 2 * i - 1;
        printLine(numSpaces, numStars);
    }
}

int main() {
    int height;
    cout << "Nhap chieu cao tam giac: ";
    cin >> height;
    
    printTriangle(height);
    
    return 0;
}
