#include <iostream>

using namespace std;


int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    
    return a;
}

bool areCoprime(int a, int b) {
    return gcd(a, b) == 1;
}

int main() {
    int a, b;
    cout << "Nhap hai so nguyen duong a va b: ";
    cin >> a >> b;
    
    if (areCoprime(a, b)) {
        cout << a << " va " << b << " la nguyen to cung nhau.";
    } else {
        cout << a << " va " << b << " khong la nguyen to cung nhau.";
    }
    
    cout << endl;
    
    return 0;
}
