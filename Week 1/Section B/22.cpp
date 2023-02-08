#include <iostream>
#include <cmath>
using namespace std;

void BMI(double w, double h)
{
	cout << w/(h*h);
}
int main()
{	
	double weight, height; cin >> weight >> height;
	BMI(weight, height);
	return 0;
}