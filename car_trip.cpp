#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
 int x,total,t;
 cout << "Enter the number of kms travelled :";
 cin >> x;
 cout << "Enter the number of test cases :";
 cin >> t;
 for (t<=100;t++;) 
 {
  if (x<=300)
  {
  cout << "The total cost of travel is 3000 rupees"<< endl;
  }
  else
  {
  	total=x*10;
  	cout << total << " rupees" << endl; 
  }
 return (0);
}
}
