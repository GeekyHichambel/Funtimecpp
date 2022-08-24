//creating a pyramid using iostream
#include <iostream>
//using standard lib
using namespace std;
 int main()
 {
  int x,y,n,i=0;
  cout << "Enter the number of levels for pyramid ";
  cin >> n;
//work under progress
 for (x=1;x<=n;++x,i=0)/*for printing rows*/
  {
   for (y=1;y<=n-x;++y)/*for providing spaces*/
   {
    cout << " ";
   }
   while (i !=2*x-1)/*for changing rows*/
   {
    cout << "*";
    ++i;
   }
   cout << endl;
 }
return 0;
}
