#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
 int x,total,t,n;
 cout << "Enter the number of test cases : ";
  cin>> n;
  for (t=0;t<n;t++)
 {
     cout << "Enter the number of kms travelled :";
     cin >> x;
  if (x<=300)
  {
  cout << "The total cost of travel is 3000 rupees"<< endl;
  }
  else
  {
  	total=x*10;
  	cout << total << " rupees" << endl; 
  }
 cout << endl;
}
return (0);
}
