#include <bits/stdc++.h>
using namespace std;

void swap(int *p, int *q)
{
	int t = *p;
	*p = *q;
	*q = t;
}

void Selection(int ar[], int x)
{
	int a, b, low;

	for (a = 0; a < x-1; a++)
	{
		low = a;
		for (b = a+1; b < x; b++)
		if (ar[b] < ar[low])
			low = b;

		swap(&ar[low], &ar[a]);
	}
}
void S(int ar[], int z)
{
	int a;
	for (a=0; a < z; a++)
		cout << ar[a] << " ";
	cout << endl;
}
int main()
{
	int ar[] = {30 ,20 ,5, 10, 11};
	int x = sizeof(ar)/sizeof(ar[0]);
	Selection(ar, x);
	cout << "The array after sorting: \n";
	S(ar, x);
	return 0;
}


