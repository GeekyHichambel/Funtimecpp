#include <bits/stdc++.h>
using namespace std;
class Solution{
public:	

  	int print2largest(int arr[], int n) {
  		for (int i=0;i<n;i++)
         for (int j=0;j<n-1;j++)
         	if (arr[j]>arr[j+1])
         	{
         		int t= arr[j];
         		arr[j]=arr[j+1];
         		arr[j+1]=t;
         	}
    		cout << arr[n-2];
  		}
};
int main()
{
	int n=6;
	int arr[n]={12,4,21,5,2,2};
    Solution s;
    s.print2largest(arr,n);
}
