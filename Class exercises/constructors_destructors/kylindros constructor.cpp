#include <iostream>
using namespace std;
#define PI 3,1415

class circle {
	protected: 
		double aktina;
	
	public: 
	double perimetros (){
		double circ;
		circ = 2*PI*aktina;
		return circ;
	}
	circle(double a){
		aktina = a;
	} 
	~circle(){
		cout << "KATASTROFHKYKLOU" << endl;
	}
};

class cylinder: public circle {
	public:
	double h, d;
	
	double mass (){
		double mass;
		mass = PI*aktina*aktina*h*d;
		return mass;	
	}
	
	cylinder(double a, double b=1, double c=1) : circle(a){
		d=c;
		h=b;
		aktina=a;		
	}
	
	~cylinder (){
		cout << "KATASTROFHKYLINDROU" << endl;
	}

};


int main () {
	cylinder obj(20, 5, 2);
	double circum, mass;
	circum=obj.perimetros();
	mass=obj.mass();
	cout << "H perimetros einai: " << circum << endl;
	cout << "H maza einai: " << mass << endl;
	return 0;
}
