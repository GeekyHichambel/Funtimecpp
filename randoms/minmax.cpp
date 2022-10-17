#include <bits/stdc++.h>
using namespace std;
class solution{
public:
 int findsum(int a[],int n)
 {
 	int max=a[0];
 	int min=a[0];
 	for (int i=1;i<n;++i)
 	{
 		 if (a[i]>max)
 		 {
 		 	max=a[i];
 		 }
 		 if (a[i]<min)
 		 {
 		    min=a[i];
 	     }
 	 
 	}
    int sum=min+max;
 	cout << sum;
 }
};

int main()
{ 
    solution s;
    int l=5;
    int arr[l]={-2, 1, -4, 5, 3};
    s.findsum(arr,l);
	return 0;
}