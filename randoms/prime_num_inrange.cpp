#include <iostream>
using namespace std;
 int main()
{
	//prime numbers in range
	int a,b,i,j;
	//input
	cout << ("Enter the range for finding prime numbers") <<endl;
	cin >> a;
	cin >> b;

cout << ("The prime numbers from ") << a << (" to ") << b << (" are:") <<endl;
//Calc
for (i=a;i<=b;i++)//Driver Loop for the numbers
	           {
	               int inc=0;
	               for(j=2;j<=i/2;j++)//Testing Loop
	                   {
	                    if (i%j==0)
	                     {
	                        inc++;
	                        break;
	                     }
	                    }
	                     if (inc==0 && i!=1)
	                     { 
	                        printf("%d\n",i);
	                     }
	           }
	           cout << ("<------->");
return 0;
}