#include <iostream>
using namespace std;
int main()
{
 int n,i;
 cout << "Enter the number : ";
 cin >> n;
 for(i=2;i<n;i++)
 {
    if ((n%i!=0)^(n==1)^(n==2))
    {
  	    cout << "The given number is prime";
        break;
    }
    else
    {
        cout << "The given number is not prime";
        break;
    }    
   cout << endl;
 }
 return(0);
}