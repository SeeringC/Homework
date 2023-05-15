#include <iostream>
#include <vector>
#include <string>

using namespace std;


void printCombinations(string prefix, int start, int N, int K) {
    
    if (prefix.length() == K) {
        cout << prefix << endl;
        return;
    }

    
    for (int i = start; i < N; i++) {
        
        string newPrefix = prefix + char('a' + i);

        
        printCombinations(newPrefix, i + 1, N, K);
    }
}

int main() {
    int N, K;
    cout << "Nhap N: ";
    cin >> N;
    cout << "Nhap K: ";
    cin >> K;

    
    if (N < K) {
        cout << "Khong the tao tap hop co do dai K lon hon N." << endl;
        return 0;
    }

    
    printCombinations("", 0, N, K);

    return 0;
}
