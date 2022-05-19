#include <iostream>
using namespace std;

void Heapp(int ar[], int x, int z)
{
	int n = z;
	int h = 2 * z + 1; 
	int l = 2 * z + 2; 
    if (h < x && ar[h] > ar[n])
		n = h;
	if (l < x && ar[l] > ar[n])
		n = l;
	if (n != z) 
	{
		swap(ar[z], ar[n]);
		Heapp(ar, z, n);
	}
}
void Heap_sortt(int ar[], int x)
{
	for (int z = x / 2 - 1; z >= 0; z--)
		Heapp(ar, x, z);
	for (int z = x - 1; z > 0; z--) 
	{
		swap(ar[0], ar[z]);
		Heapp(ar, z, 0);
	}
}
void S(int ar[], int x)
{
	int z;
	for (z = 0; z < x; ++z)
		cout << ar[z] << " ";
	cout << "\n";
}
int main()
{
	int ar[] = { 11, 21, 6, 1, 8, 15 };
	int x = sizeof(ar) / sizeof(ar[0]);

	Heap_sortt(ar, x);

	cout << "Sorted array is \n";
	S(ar, x);
}

