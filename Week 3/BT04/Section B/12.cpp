#include <iostream>
using namespace std;
int sum(int a[], int first, int last)
{
    int sum = 0;
    for (int i = first; i <= last; i++)
    {
        sum += a[i];
    }
    return sum;
}
int main()
{
    int T; cin >> T;
lap:
    while (T != 0)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 1; i < n - 1; i++)
        {
            if (sum(a, 0, i - 1) == sum(a, i + 1, n - 1))
            {
                cout << "YES" << endl;
                T--;
                goto lap;
            }
        }
        cout << "NO" << endl;
        T--;
    }
}

