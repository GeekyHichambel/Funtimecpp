//Head or tail
#include <iostream>
#include <random>
#include <time.h>
 using namespace std;
 class hort{
 public:
 	int num;
 	string o,p;
void input() 
{
	cout << "*******Enter h for head,t for tails*******"<<endl;
	cout <<"Enter first person's choice : "<<endl;
	cin >> o;
	cout <<"Enter second person's choice : "<<endl;
	cin >>p;
}

 rnd()
{
	num=rand()%2;
	return num;
}

	solve()
	{
  		if (num==1)
  		{
  			cout <<"It's head"<<endl;
  		}
  		else
  		{
  				cout <<"It's tails"<<endl;
            }
    }
};
int main()
{
	char ch;
	int num=0;
	do
	{
	
	srand((time(0)));
	hort i;
	i.input();
	hort r;
	r.rnd();
	hort s;
	s.solve();
	cout <<"Do you wish to continue"<< "\t" <<"enter y for yes"<< "\t" <<"enter n for no"<<endl;
    cin >>ch;
}
    while (ch=='y');
}
	
