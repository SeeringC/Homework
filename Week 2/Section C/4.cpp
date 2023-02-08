#include <iostream>
using namespace std;

void DrawTriangle(int n)
{
   for (int i = 1; i <= n; i++)
   {
       for (int j = 1; j <= 2*n; j++)
       {
           if (j >= i && j <= 2*n - i)
           {
               cout << '*';
           }
           else
                cout << ' ';
       }
       cout << endl;
   }
}
int main()
{
    int n; cin >> n;
    DrawTriangle(n);
    return 0;
}
