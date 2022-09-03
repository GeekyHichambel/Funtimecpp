#include <iostream>
using namespace std;
	
int main()
{
 int i=1,j=1,a;
  do{
  cout << " ";
  i++;
}
      while (i<=2); 
                  cout << "*";
 
 do{
 cout << " ";
 j++;
 }
 while (j<=2);
 cout << endl;

 for(i=1;i<=5;i++)
 {
 	if (i==2||i==4){
 		printf("*");
 	}
 	else {
 		printf(" ");
 	}
    }
    cout <<endl;
 	for (i=1;i<=5;i++)
 	{
 		printf("*");
 	} 
cout << endl;
return 0;
}
