#include <iostream>
using namespace std;


int main()
{	
	
	while(true)
	{
		int temp;
		int n; cin >> n;

		if (n == - 1) break;		
		else
		{
			temp = (n % 5 == 0 && n > 0) ? n/5 : -1; 
		}
		cout << temp << endl;
	}
	cout << "Bye!" << endl;
	return 0;
}