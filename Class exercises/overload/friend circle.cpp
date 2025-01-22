#include <iostream>
using namespace std;

class kyklos{
	private: 
		double aktina;
	public: 
		kyklos (double a=1){
			aktina=a;
		}
		~kyklos(){
			cout << "KYKLOS DESTROYED";
		}
		
		double give_embado(){
			return 3.14*aktina*aktina;
		}
		
		friend kyklos operator*(kyklos k, double n){
			kyklos cTemp;
			cTemp.aktina = k.aktina * n;
			return cTemp;
		}
		
		friend kyklos operator+(kyklos k, kyklos kk){
			kyklos cTemp;
			cTemp.aktina = kk.aktina + k.aktina;
			return cTemp;
		}
};

int main(){
	
	kyklos k1(10);
	kyklos k2, k3;
	double e, scale;
	
	e = k1.give_embado();
	cout << "To embado tou k1 einai: " << e << endl;
	cout << "Dwse scale factor" << endl;
	cin >> scale;
	k2 = k1 * scale;
	e = k2.give_embado();
	cout << "To embado tou k2 einai: " << e << endl;
	k3 = k1 + k2;
	e = k3.give_embado();
	cout << " To embado tou k3 einai: " << e << endl;
	
	
	
	
	return 0;
}
