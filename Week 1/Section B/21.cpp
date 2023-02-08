#include <iostream>
#include <cmath>
using namespace std;

void SurfaceArea(double a, double b, double c)
{
	double s = (a + b + c)/2;
	double area = sqrt(s*(s-a)*(s-b)*(s-c));
	cout << area;
}
int main()
{	
	double a, b, c; cin >> a >> b >> c;
	SurfaceArea(a, b, c);
	return 0;
}