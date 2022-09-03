#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	int i;
	char str[200];
	string fin;
	for (i=1;i<=10;i++)//taking 10 inputs
	{
		cout << "Enter the string :";
		cin.getline(str, sizeof(str));
		cout << "Your string :" << str << endl;
		fin=fin +" "+ str;
	}
    cout << "Final String is :" << fin;
	return (0);
}
