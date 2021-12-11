//Sina Khorashahi - 98440373
//2
#include <iostream>

int fib(int);

int main()
{
	int n, i;
	std::cout << "n: ";
	std::cin >> n;
	std::cout << fib(n);
	return 0;
}

int fib(int n) 
{
	if ((n == 1) || (n == 0)) 
		return(n);
	else 
		return(fib(n - 1) + fib(n - 2));
}
