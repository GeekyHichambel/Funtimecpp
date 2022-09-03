#include <iostream>
#include <math.h>
using namespace std;
/*to find the volume of a cuboid*/
int main()
{
int l,b,h ;
cout << "Enter the lenght :";/*lenght*/
cin >> l;

cout << "Enter the breadth :";/*breadth*/
cin >> b;

cout << "Enter the height :";/*height*/
cin >> h;

int v,di;
v=l*b*h;
di=sqrt(l*l+b*b+h*h);/*diagonal of a cuboid*/

cout << "The volume is :" << v;
cout << endl;
cout << "The diagonal is :" << di;

return(0);
}
