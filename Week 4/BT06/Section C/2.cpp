#include <iostream>
#include <vector>
#include <string>

using namespace std;


void printPermutations(string prefix, int N, int K, vector<bool>& used) {
    
    if (prefix.length() == K) {
        cout << prefix << endl;
        return;
    }

   
    for (int i = 0; i < N; i++) {
        
        if (!used[i]) {
            
            used[i] = true;

            
            printPermutations(prefix + char('a' + i), N, K, used);

            
            used[i] = false;
        }
    }
}

int main() {
    int N, K;
    cout << "Nhap N: ";
    cin >> N;
    cout << "Nhap K: ";
    cin >> K;

   
    if (N < K) {
        cout << "Khong the tao tu co do dai K lon hon N." << endl;
        return 0;
    }

   
    vector<bool> used(N, false);

   
    printPermutations("", N, K, used);

    return 0;
}
