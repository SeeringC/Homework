#include <iostream>
using namespace std;

void IsPrime(int n)
{
    if (n < 2)
    {
        cout << "no";
        return;
    }
    for (int i = 2; i <= n/2 ; i++)
    {
        if (n % i == 0)
        {
            cout << "no";
            return;
        }
    }
    cout << "yes";
}
int main()
{
    int n; cin >> n;
    IsPrime(n);
    return 0;
}
