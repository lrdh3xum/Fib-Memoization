/*
	Using memoization the results are stored in memory
	whenever a problem is solved for the first time.
	When the result is needed, a simple lookup is done.
*/
#include <iostream>

int lookup[128];

/*
	Initialize element value in lookup table.
	This is a constant that signifies the absence
	of a solution.
*/
void _init()
{
    int i;
	for (int i = 0; i < 128; i++)
	{
		lookup[i] = 0;
	}
}

int fib(int n)
{
	if (lookup[n] == 0)
	{
		if (n <= 1)
		{
			lookup[n] = n;
		}
		else
		{
			lookup[n] = fib(n - 1) + fib(n - 2);
		}
	}
	return lookup[n];
}

int main()
{
	int n = 9;
	_init();

	std::cout << "Fib num is: " << fib(n);

	return 0;
}
