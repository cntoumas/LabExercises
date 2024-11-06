#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
	float a,b,c,d,x1,x2,x;
	cout << "Insert a, b, c values: ";
	cin >> a;
	cin >> b;
	cin >> c;
	d = (b*b)-(4*a*c);
	if (d>=0)
		{
		x1 = (-b+sqrt((double) d))/(2*a);
		x2 = (-b-sqrt((double) d))/(2*a);
		}
		cout << "X1 =" << x1 << endl;
		cout << "X2 =" << x2 << endl;
	else if (d==0) 
	{
		x1 = (-b)/(2*a);
		cout <<"X ="<< x1 << endl;
	}
	else
		cout << "There are no real solutions";
	return 0;
}
