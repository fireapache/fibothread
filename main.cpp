#include <iostream>
#include <stdlib.h>
#include <pthread.h>

using namespace std;

typedef unsigned int uint;

int fibonacci(uint n);

int fibonacci(uint n)
{
	if (n == 0) return 0;
	if (n < 3) return 1;

	return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		cout << "Indique o numero de casas para o calculo do fibonacci!" << endl;
		return 1;
	}

	int n = atoi(argv[1]);

	if (n < 0)
	{
		cout << "Numero invalido!" << endl;
	}

	uint fibo = (uint)n;

	fibo = fibonacci(fibo);

	cout << fibo << endl;

	return 0;
}