#include <iostream>
using namespace std;

#define PI 3.14

struct circle {
	float radius;
	
	
	float perimeter (){
		return 2*PI*radius;
	}
	
	void doub (float scale){
		radius = radius*scale;
	}
	
	void output (){
		cout << "The value of the radius is: " << radius << endl;
	}
	
	void print (){
		cout << "Den evales times" << endl;
	}

	void print (int x) {
		cout << "H timi einai: " << x << endl;
	}

	void print (int x, int y){ 
		cout << "To athroisma einai: " << x+y << endl;
	}
};




int main (){
	circle c1;
	circle *ptr;
	ptr = &c1;
	ptr->radius = 10;
	c1.output();
	cout << c1.perimeter() << endl;
	c1.doub(7);
	c1.output();
	cout << c1.perimeter() << endl;
	c1.print();
	c1.print(5);
	c1.print(5,4);
	
	return 0;
}
