#include <iostream>
using namespace std;

int main ()
{
	int values[5];
	int i, sum=0;
	float average;
	// finding average
	for (i=0; i<5; i++){
	do 
	{
		cout << "Insert number: ";
		cin >> values[i];	
		
	} while (values[i] < 0);
	}	
	for (i=0; i<5; i++){
		sum+=values[i];
	}
	average = (float) sum/5;
	cout << "The average is: " << average << endl;
	// Values bigger than average
	for (i=0; i<5; i++){
		if (values[i] > average){
			cout << "Value is bigger than the average: " << values[i] << endl;
		}
	}
	return 0;
}
 
