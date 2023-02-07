#include <iostream>
using namespace std;

void LeapYear(int n)
{
	if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0) cout << "true";
	else cout << "false";
}
int main()
{
	int n;
	cin >> n;
	LeapYear(n);
	return 0;
}