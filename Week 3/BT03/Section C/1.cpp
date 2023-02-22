#include <iostream>
using namespace std;

void SetArray (int n, int a[])
{
    for (int  i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}
void IsEqual (int n, int a[])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                cout << "Yes";
                return;
            }
        }
    }
    cout << "No";
}
int main()
{
    int n; cin >> n;
    int a[n];
    SetArray(n, a);
    IsEqual(n, a);
    return 0;
}
