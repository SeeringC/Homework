#include <iostream>
using namespace std;


int main()
{	
	
	for (int i = 0; i <= 23; i++)
	{
		if (i == 0) cout << "12 midnight\n";
		else if (1 <= i && i <= 11) cout << i << "am\n";
		else if (i == 12) cout << "12 noon\n";
		else cout << i - 12 << "pm\n";
	}
	return 0;
}