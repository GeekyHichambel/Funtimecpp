#include <iostream>
 using namespace std;
 int main()
{
	int a,b,o=0;
	cout << "Enter the first number : ";
	cin >>a;
	cout << "Enter the second number : ";
	cin >>b;
	cout << endl;
    cout << "Enter 1 for sum, 2 for subtraction,3 for division, 4 for product and 5 for all : ";
    cin >> o;

    if (o==1)
    {
	cout <<"The sum of both the numbers is :" << a+b <<endl;
	}

    if (o==2)
    {
	 cout <<"The difference of both the numbers is :" << a-b <<endl;
    }

    if (o==3)
    {
     cout <<"The quotient of both the numbers is :" << a/b <<endl;
     cout <<"The remainder is : " << a%b <<endl;
    }

   if (o==4)
   {
    cout <<"The product of both the numbers is :" << a*b <<endl;
 	}
    if (o==5)
    {
        cout <<"The sum of both the numbers is :" << a+b <<endl;
        cout <<"The difference of both the numbers is :" << a-b <<endl;
        cout <<"The division of both the numbers is :" << a/b <<endl;
        cout <<"The remainder is : " << a%b <<endl;
        cout <<"The product of both the numbers is :" << a*b <<endl;
    }
 	
 	return 0;
 }
