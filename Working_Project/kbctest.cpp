#include <iostream>//WORK DONE:))
#include <string>

using namespace std;
 int main()
 {
   cout << "Welcome to KBC" << endl;
  int a;
  string name,gender;
  
  cout << "Enter your name : " ;
  cin >> name;
  

  cout << "Your age here : " ;
  cin >> a;

  cout<< "Your gender here : " ;
  cin >> gender;
  cout << endl;

  cout<< "Your details are given below: " << endl;
  cout << " || ";
  cout  << "Name : " << name ;
  cout << " || ";
  cout << "Gender : "<< gender ;
  cout << " || ";
  cout << "Age : "<<a ;
  cout << " || ";

  cout << "Enter '1' for starting and '0' for exiting  ";
  int i;
  cin >> i;
  if (i==1)
  {
   cout << "Your first Question is : " <<endl;
   
   cout << "What is the national game of India?"<<endl;
   
   cout << "Option A : CRICKET   || Option B : HOCKEY"<<endl;
   
   cout << "Option C : BADMINTON || Option D : TENNIS"<<endl;
   int opt;
   cout << " <<   <<  Enter your Choice in terms of 1,2,3,4  >>   >> "<<endl;
   cin >> opt;
     if (opt==2)
             {
               cout << "Your answer is correct." <<endl;
              }
     else
         {
          cout <<"Better Luck Next Time" <<endl;
         }
  }
else{
     cout << "BYE BYE";
    } 
   cout <<endl;
 return 0;
 }