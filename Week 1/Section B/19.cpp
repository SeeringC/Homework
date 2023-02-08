#include <iostream>
using namespace std;

bool Check(int x, int y, int z)
{
	if (x > y && y > z) return true;
	if (x < y && y < z) return true;
	return false;
}
int main()
{	
	int x, y, z; cin >> x >> y >> z;
	bool b = Check(x, y, z);
	cout << b;
	return 0;
}