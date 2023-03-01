#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a;
    vector<int> b;

    for (int i = 0; i < n; i++)
    {
        int number;
        cin >> number;
        a.push_back(number);
    }

    for (int i = 0; i < n; i++)
    {
        int number;
        cin >> number;
        b.push_back(number);
    }

    for (int number : b)
    {
        if (find(a.begin(), a.end(), number) == a.end())
        {
            cout << number;
        }
    }
    return 0;
}

