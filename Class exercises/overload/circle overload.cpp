#include <iostream>
using namespace std;
#define PI 3.1415

class circle {
	public: 
		double aktina; 
		
		double give_embado (){
			double temp 
			temp = PI*aktina*aktina;
			return temp;			
		}
		
		kyklos(double a=1){
			aktina = a;
		}
		~kyklos(){
		}
		
		circle operator*(double mult){
			circle cTemp;
			cTemp.aktina = this->aktina * mult;
			return cTemp;
		}
		
		circle operator+(circle c2){
			circle cTemp;
			cTemp.aktina= this->aktina+c2.aktina;
			return cTemp;		
		}
		
};


int main() {
	float eisodos
	circle kyklos1(10);
	circle kyklos2, kyklos3;
	
	double e, pos;
	e = kyklos1.give_embado()
	cout << "Area tou kyklou : " << e << endl;
	cout << "Scale factor: " << endl;
	cin << eisodos;
	kyklos2 = kyklos1 * eisodos
	e = kyklos2.give_embado
	
}
