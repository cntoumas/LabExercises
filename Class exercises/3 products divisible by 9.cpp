#include <iostream>
using namespace std;

int main ()
{
	int array[100];
	int i=0;
	while (i<100){
		array[i] = i*3;
		cout << "The value of the array is: " << array[i] << endl;
		if (array[i] % 9 == 0){
			cout << "This value" << "(" << i << ")" << "of the array is divisible by 9" << endl;
		}
		i++;
	}

	
	
	return 0;
}
