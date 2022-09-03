#include <iostream>

using namespace std;

class test{
	string name;
	int roll;
	char sec[1];

public:
	test()
	{
		cout << "Enter your name : ";
		cin >> name;
		cout << "Enter your roll number : ";
		cin >> roll; 
		cout << "Enter your section : ";
		cin >> sec;
		cout << endl;
	}
	void show()
	{
		cout << name << "\t" << roll << "\t" << sec;
	}
};
int main()
{
	test t;
    t.show();

	return 0;
}