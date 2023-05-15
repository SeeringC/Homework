#include <iostream>
#include <vector>

using namespace std;


void printPartitions(vector<int>& partition) {
    for (int num : partition) {
        cout << num << " ";
    }
    cout << endl;
}


void findPartitions(int n, vector<int>& partition, int sum) {
    if (sum == 0) {
        printPartitions(partition);
        return;
    }

    for (int i = 1; i <= n && i <= sum; i++) {
        partition.push_back(i);
        findPartitions(i, partition, sum - i);
        partition.pop_back();
    }
}

int main() {
    int n;
    cout << "Nhap mot so nguyen duong: ";
    cin >> n;

    vector<int> partition;
    findPartitions(n, partition, n);

    return 0;
}
