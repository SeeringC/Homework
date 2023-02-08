#include <iostream>
#include <cmath>
using namespace std;

void MaxWithoutIf (int a, int b)
{
	cout << (a + b + abs(a-b))/2;
}
int main()
{	
	int a, b; cin >> a >> b;
	MaxWithoutIf(a, b);
	return 0;
}