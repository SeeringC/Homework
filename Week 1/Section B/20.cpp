#include <iostream>
using namespace std;

void CheckDivisibility(int x, int y)
{
	if (x % 7 == 0 && y % 7 == 0) cout << "true";
	else cout << "false";
}
int main()
{	
	int x, y; cin >> x >> y;
	CheckDivisibility(x, y);
	return 0;
}