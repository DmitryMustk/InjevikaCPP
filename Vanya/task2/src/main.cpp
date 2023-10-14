#include <iostream>
#include <random>
using namespace std;

#define size 10
#define rand_max 100

int main(void)
{
	int a[size], buf = 0;
	srand(time(0));
	for (int i = 0; i < size; i++)
		a[i] = rand() % rand_max;

	for (int i = 0; i < size; i++)
		cout << a[i] << ' ';
	cout << '\n';

	for (int j = 1; j < size; j++)
	{
		for (int i = 0; i < size - 1; i++)
		{
			if (a[i] > a[i + 1])
			{
				buf = a[i];
				a[i] = a[i + 1];
				a[i + 1] = buf;
			}	
		}
	}

	for (int i = 0; i < size; i++)
		cout << a[i] << ' ';
	cout << '\n';

	return 0;
}
