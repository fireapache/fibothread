#include <iostream>
#include <stdlib.h>
#include <pthread.h>

using namespace std;

#ifndef NULL
#define NULL 0
#endif

typedef unsigned int uint;

int fibonacci(uint n);

typedef struct Args
{
	uint n;
	uint result;
} FiboArgs;

void *fibonacci(void *arg)
{
	FiboArgs *fiboargs = static_cast<FiboArgs*>(arg);
	FiboArgs targ1, targ2;

	uint n = fiboargs->n;

	if (n == 0) fiboargs->result = 0;
	else if (n < 3) fiboargs->result = 1;
	else
	{
		//pthread_create();

		// =====================
		// Terminar!!!
		// =====================

		fiboargs->result = targ1.result + targ2.result;
	}

	return NULL;
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

	//fibo = fibonacci(fibo);

	cout << fibo << endl;

	return 0;
}