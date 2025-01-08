#include <iostream>
using namespace std; 

class circle {
	public: 
		double radius, circumference;
		
		void set_radius (double &r){
			radius = r;
		}
		
		double set_circumference(){
			return circumference=3.14*2*radius;
		}
		
		circle(){
			cout << "Circle created" << endl;
			radius = 1;
		}
		
		circle(double r){
			radius = r;
		} 
		
		~circle(){
			cout << "Circle destroyed" << endl;
		}
	
	
};

int main (){
	circle kyklos1, kyklos2(4);
	double r, circ1, circ2;
	circ1 = kyklos1.set_circumference();
    circ2 = kyklos2.set_circumference();
	cout << "The circumference of the circle 1 is: " << circ1 << endl;
	cout << "The circumference of the circle 2 is: " << circ2 << endl;
	return 0;
}
