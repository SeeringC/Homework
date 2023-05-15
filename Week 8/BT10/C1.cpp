#include <iostream>
#include <cstring>

struct String {
    int n;
    char* str;

    // Constructor
    String(const char* s) {
        n = strlen(s);
        str = new char[n + 1];
        strcpy(str, s);
    }

    // Destructor
    ~String() {
        delete[] str;
    }

    // Print function
    void print() const {
        std::cout << str << std::endl;
    }

    // Append function
    void append(const char* s) {
        int len = strlen(s);
        char* temp = new char[n + len + 1];
        strcpy(temp, str);
        strcat(temp, s);
        delete[] str;
        str = temp;
        n += len;
    }
};

int main() {
    String greeting("Hi");
    greeting.append(" there");
    greeting.print();

    return 0;
}
