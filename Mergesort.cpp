#include <iostream>  
using namespace std;  

void Merge(int ar[], int first, int middle, int last)    
{    
    int x, y, z;  
    int a = middle - first + 1;    
    int b = last - middle;    
      
    int l_ar[a], r_ar[b];  
    for (int x = 0; x < a; x++)    
      l_ar[x] = ar[first + x];    
    for (int y = 0; y < b; y++)    
      r_ar[y] = ar[middle + 1 + y];    
      
    x = 0; 
    y = 0;   
    z = first;
      
    while (x < a && y < b)    
    {    
        if(l_ar[x] <= r_ar[y])    
        {    
            ar[z] = l_ar[x];    
            x++;    
        }    
        else    
        {    
            ar[z] = r_ar[y];    
            y++;    
        }    
        z++;    
    }    
    while (x<a)    
    {    
        ar[z] = l_ar[x];    
        x++;    
        z++;    
    }    
      
    while (y<b)    
    {    
        ar[z] = r_ar[y];    
        y++;    
        z++;    
    }    
}    
  
void Merge_sort(int ar[], int first, int last)  
{  
    if (first < last)   
    {  
        int middle = first +(last - first) / 2;
		  
        Merge_sort(ar, first, middle);  
        Merge_sort(ar, middle + 1, last);  
        Merge(ar, first, middle, last);  
    }  
}  
   
void S(int ar[], int p)  
{    
    for (int x = 0; x < p; x++)  
        cout<<ar[x]<<" ";  
       cout<<endl; 
}  
  
int main()  
{  
    int ar[] = { 6, 9, 2, 10, 11 ,3 };  
    int p = sizeof(ar) / sizeof(ar[0]);   
    
    Merge_sort(ar, 0, p - 1);
	  
    cout<<"\n the array elements after sorting: \n";  
    S(ar, p);  
    return 0;  
}  


