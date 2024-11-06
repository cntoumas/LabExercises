#include <iostream>
#include <cmath>
using namespace std;
#define SIZE 10

int main ()
{
int binary [SIZE]={0};
int i=0;
int value;
int digit;

cout << "Insert number: ";
cin >> value;

while (1)
{
	if (value >= 1)
	{
		binary[digit]= value % 2;
		value = (float) value/2;
		cout << "digit:" << digit << "binary = " << binary[digit] << endl;
		digit++;
	}
	else
	{
		break;
	}
}
	cout << "The binary number is : ";
	for (i=digit-1; i>=0; i--)
	{
		cout << binary[i];
	}
	cout << endl;

	
	
	return 0;
}
