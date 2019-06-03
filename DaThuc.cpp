#include <iostream>
using namespace std;
#include "DaThuc.h"
int main()
{
	DaThuc a(3);
	cout<<a<<endl;
	a.SetHeSo(3,4);
	cout<<a<<endl;
	DaThuc b(2);
	DaThuc c=a+b;
	cout<<c<<endl;
	return 0;
}
