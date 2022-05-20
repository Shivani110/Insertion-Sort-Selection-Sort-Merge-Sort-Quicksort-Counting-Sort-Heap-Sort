#include <iostream>
using namespace std;

void Counting_sortt(int ar[], int n) 
{
  int z[20];
  int a[20];
  int x = ar[0];
   for(int p = 1; p < n; p++) 
  {
    if (ar[p] > x)
      x = ar[p];
  }
  for (int p = 0; p <= x; ++p) 
  {
    a[p] = 0;
  }
  for (int p = 0; p < n; p++) 
  {
    a[ar[p]]++;
  }
  for (int p = 1; p <= x; p++) 
  {
    a[p] += a[p - 1];
  }
  for (int p = n - 1; p >= 0; p--) 
  {
    z[a[ar[p]] - 1] = ar[p];
    a[ar[p]]--;
  }
  for (int p = 0; p < n; p++) 
  {
    ar[p] = z[p];
  }
}
void S(int ar[], int n) 
{
  for (int p = 0; p < n; p++)
    cout << ar[p] << " ";
  cout << endl;
}

int main() 
{
  int ar[] = {13, 4, 2, 1, 11, 2};
  int n = sizeof(ar) / sizeof(ar[0]);
  Counting_sortt(ar, n);
  cout << "The array after sorting: \n";
  S(ar, n);
}


