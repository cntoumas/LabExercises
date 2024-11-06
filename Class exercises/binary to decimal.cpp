#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
int sum; 
int array[5];
int i;
int value=0;
	for (i=4; i>=0; i--)
	{
		cout << "Insert 1 or 0:";
		cin >> array[i];
	}
for (i=0; i<5; i++)
{
	value = value + array[i]*pow((double) 2, (double) i);
}
cout << value; 
	return 0;
	
}
