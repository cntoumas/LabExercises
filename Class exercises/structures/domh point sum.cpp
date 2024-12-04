#include <iostream>
using namespace std;

struct point {
	float x;
	float y;
	float sum;
};

void printsum (float *var){
	
	cout << "The sum is: "<< *var << endl;
}

float sum (float var1, float var2){
	float sum;
	sum = var1 + var2;
	return sum;
}

int main () {
	int i;
	point var[3];
	for (i=0; i<3; i++){
		cout << "Insert real number for x" << endl;
		cin >> var[i].x;
		cout << "Insert real number for y" << endl;
		cin >> var[i].y;
		var[i].sum = sum(var[i].x, var[i].y);
		printsum(&var[i].sum);
	}
	return 0;
}
