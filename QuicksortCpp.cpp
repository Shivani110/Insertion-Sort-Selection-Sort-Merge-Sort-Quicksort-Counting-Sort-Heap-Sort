#include <iostream>
using namespace std;
void swap(int* p, int* q)
{
	int x = *p;
	*p = *q;
	*q = x;
}
int partition (int ar[], int h, int l)
{
	int pv = ar[l]; 
	int a = (h - 1); 

	for (int b = h; b < l ; b++)
	{
		if (ar[b] <= pv)
		{
			a++; 
			swap(&ar[a], &ar[b]);
		}
	}
	swap(&ar[a + 1], &ar[l]);
	return (a + 1);
}
void Quick_sortt(int ar[], int h, int l)
{
	if (h < l)
	{
		int y = partition(ar, h, l);
		Quick_sortt(ar, h, y - 1);
		Quick_sortt(ar, y + 1, l);
	}
}
void Se(int ar[], int s)
{
	for (int a = 0; a < s; a++)
		cout << ar[a] << " ";
	cout << endl;
}
int main()
{
	int ar[] = {5, 8, 1, 10, 2, 6};
	int z = sizeof(ar) / sizeof(ar[0]);
	
	Quick_sortt(ar, 0, z - 1);
	cout << "The array after sorting: \n";
	Se(ar, z);
	return 0;
}

