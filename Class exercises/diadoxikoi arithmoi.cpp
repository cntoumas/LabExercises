#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
	int x;
	int y=1;
	int z=2;
	cout << "Insert integer number: ";
	cin >> x;
	
	start:
		y++;
		z++;
	if (y*z>=x)
		{
			cout << "Y = " << y << "and Z = " << z;
		}
	else 
	{
		goto start;
	}
	
	return 0;
}
