#include <iostream>
#include <algorithm>
using namespace std;

void ReadArray(int a[])
{
	for (int  i = 0; i < 5; i++)
	{
		cin >> a[i];
	}
}
void Middle (int a[])
{
	sort(a, a + 5);
	cout << a[2];
}
int main()
{	
	int a[5];
	ReadArray(a);
	Middle(a);
	return 0;
}