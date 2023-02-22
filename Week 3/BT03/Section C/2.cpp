#include <iostream>
using namespace std;

void IsParallel(string a)
{
    for (int i = 0; i < (int)a.size()/2; i++)
    {
        for (int j = (int)a.size() - 1; j > (int)a.size()/2; j--)
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
    string a; cin >> a;
    IsParallel(a);
    return 0;
}
