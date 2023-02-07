#include <iostream>
#include <math.h>
#include <time.h>

using namespace std;
void AliceGhiThe(int& The)
{
	The = rand() % 100 + 0;
}
int BobXemThe()
{
	return rand() % 2 + 1;

}
void ChonThe(int The1, int The2, int n)
{
	if (n == 1 && The1 >= 50) cout << "Hay chon the 1.";
	else if (n == 1 && The1 < 50) cout << "Hay chon the 2.";
	else if (n == 2 && The1 >= 50) cout << "Hay chon the 2.";
	else cout << "Hay chon the 1.";
}
int main()
{
	srand(time(NULL));  
	int The1, The2;
	AliceGhiThe(The1);
	AliceGhiThe(The2);	
	ChonThe(The1, The2, BobXemThe());

	return 0;
}