#include <iostream>

using namespace std;

string Fib(int n)
{
	if (n == 0) return "a";
	if (n == 1) return "b";
	return Fib(n-1) + Fib(n-2);
}

int main()
{
	cout << Fib(10);

	return 0;
}