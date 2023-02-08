#include <iostream>
using namespace std;

void DrawTriangle(int n)
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = n; j >= i; j--)
		{
			cout << '*';
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