#include <iostream>
using namespace std; 

class square {
	public: 
		double plevra;
		
		double circum (){
			double circ; 
			return circ = 4*plevra;
		}
		
		square (double b=1){
			plevra=b;
		}
		
		~square (){
			cout << "KASTROFHTETRAGONOY" << endl;;
		}
	
};

class rect: public square {
	public: 
		double z;
		double area (){
			double area;
			area = z*plevra*plevra;
		}
		
		rect (double d, double h=1){
			plevra=d;
			z=h;
		}
		
		~rect (){
			cout << "KATASTROFHPARALLHLOGRAMOU" << endl;
		}
};

int main(){  

	rect obj(5, 10);
	double out1, out2;
	
	out1 = obj.circum();
	out2 = obj.area();
	
	cout << "H perimetros ths bashs einai: " << out1 << endl;
	cout << "To embado tou parallhlepipedou einai: " << out2 << endl;
	return 0;
}
