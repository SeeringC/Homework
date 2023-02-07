#include <iostream>
#include <cmath>
using namespace std;

struct Coords
{
	double x;
	double y;
	Coords(double _x, double _y)
	{
		x = _x;
		y = _y;
	}	
	void Distance(Coords A, Coords B)
	{
		cout << sqrt((A.x - B.x)*(A.x - B.x) + (A.y - B.y)*(A.y - B.y));
	}
};

int main()
{	
	double x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
	Coords A = Coords(x1, y1);
	Coords B = Coords(x2, y2);
	A.Distance(A, B);
	
	return 0;
}