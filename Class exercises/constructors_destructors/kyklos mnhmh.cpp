#include <iostream>
using namespace std;
#define PI 3.1415

class kyklos { 
	public: 
		double aktina;
		
		kyklos(double a=1){
			aktina=a;
		}
		~kyklos(){
			cout << "O kyklos katastrafhke" << endl;
		}
		
		void set_aktina (double r){
			aktina=r;
		}
		
		double give_embado(){
			return PI*aktina*aktina;
		}

};

int main(){
	
	kyklos *obj;
	obj = new kyklos(5);
	double r, area;
	cin >> r;
	obj->set_aktina(r);
	area = obj->give_embado();
	cout << "To embado einai: " << area << endl;
	
	delete obj;
	
	
	return 0;
}
