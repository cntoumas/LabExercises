// grafw class me complex arithmous. sthn mainrizw to c kai kanw prosthesh migadikwn

#include <iostream>
using namespace std; 

class complex{
	public:
		double x, y;
	
		complex (double a=1, double b=1){
			x=a;
			y=b;
		}
		~complex(){
			cout << "O arithmos katastrafhke"<< endl;
		}
		void set_complex (){
			cin >> x;
			cin >> y;			
		}
		
		complex operator+(complex c){
			complex cTemp;
			cTemp.x = this->x + c.x;
			cTemp.y = this->y + c.y; 
			return cTemp;
		}
		
		
	
	
};

int main (){
	complex a, b, c;
	a.set_complex();
	b.set_complex();
	c = a + b;
	cout << "O arithmos einai: " << c.x << "+ i" << c.y << endl;
		
	
	return 0;
}
