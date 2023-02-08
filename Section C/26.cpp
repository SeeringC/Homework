#include <iostream>
#include <algorithm>
using namespace std;

void ReadArray(int a[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cin >> a[i];
	}
}

void _Average(int a[], int size)
{
	double sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += a[i];
	}
	cout << "Mean: " << sum/size << endl;
}

void _Max(int a[], int size)
{
	int *ptr;
	ptr = max_element(a, a + size);
	cout << "Max: " << *ptr << endl;
}

void _Min(int a[], int size)
{
	int *ptr;
	ptr = min_element(a, a + size);
	cout << "Min: " << *ptr << endl;
}


int main()
{	
	int n; cin >> n;
	int a[n]; ReadArray(a, n);
	_Average(a, n);
	_Max(a, n);
	_Min(a, n);

	return 0;
}