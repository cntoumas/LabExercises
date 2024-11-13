//Symphlwnw ta 15 prwta stoixeia tou pinaka me sygkekrimenh sxesh

#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
	double y[15];
	double  max_value, min_value;
	int i;
	const double pi = 3.1415;
	for (i=0; i<15; i++){
		y[i]= cos((double)(2*pi*(i+1))/15);
		cout << "The values of y for i=" << i  << "is :" << y[i] << endl;
	}
	min_value = y[0];
	max_value = y[0];
	for (i=0; i<15; i++){
		if (y[i] > max_value){
			max_value = y[i];
		}
		if(y[i] < min_value){
			min_value = y[i];
		}	
	}
	cout << "The minimum value is:" << min_value << endl;
	cout << "The maximum value is:" << max_value << endl;
	return 0;
}
