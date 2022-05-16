#include <iostream>
using namespace std;

void Insertion(int a[], int x)
{
	int m, k, n;
	for (m = 1; m < x; m++)
	{
		k = a[m];
		n = m - 1;

		while (m >= 0 && a[n] > k)
		{
			a[n + 1] = a[n];
			n = n - 1;
		}
		a[n + 1] = k;
	}
}

void SE(int a[], int x)
{
	int i;
	for (i = 0; i < x; i++)
		cout << a[i] << " ";
	cout << endl;
}

int main()
{
	int a[] = { 7,3,11,5,9,4 };
	int Z = sizeof(a) / sizeof(a[0]);

	Insertion(a, Z);
	SE(a, Z);

	return 0;
}


