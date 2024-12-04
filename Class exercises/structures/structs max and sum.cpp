// struct me int x, int y, boolean max, int sum 
// function me struct eisodo kai typwnei to sum kai to max
// function me struct gia eisodo x kai y

#include <iostream>
using namespace std; 

struct vars {
	int x;
	int y;
	int max;
	int sum;
};

void set_input (vars &ptr){
	cout << "Insert number for x" << endl;
	cin >> ptr.x;
	cout << "Insert number for y" << endl;
	cin >> ptr.y;
}

void max_and_sum (vars &ptr){
	ptr.sum = ptr.x + ptr.y;
	if (ptr.x > ptr.y) {
		ptr.max = ptr.x;
	}
	else if (ptr.x < ptr.y){
		ptr.max = ptr.y;
	}
	else{
		ptr.max = ptr.x;
	}
}

void print (vars &ptr){
	cout << "The max value is: " << ptr.max << endl;
	cout << "The sum is: " << ptr.sum << endl;
}

int main (){
	vars input;
	set_input(input);
	max_and_sum(input);
	print(input);
	
	return 0;
}

