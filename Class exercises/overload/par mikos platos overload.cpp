#include <iostream>
using namespace std;

class paral{
	public:
		double mikos, platos;
		
		paral(double m=0, double p=0){
			mikos = m;
			platos = p;
		}
		
		paral operator+(paral par){
			paral pTemp;
			pTemp.mikos = this->mikos+par.mikos;
			pTemp.platos = this->platos+par.platos;
			return pTemp;
		}
		
		paral operator==(paral par){
			
			if ((this->mikos == par.mikos) && (this->platos == par.platos)){
				return true;
			}
			else {
				return false;
			}
		
		}
		
		
	
};

int main (){
	paral par1(0,0), par2(0,0), par3(0,0);
	bool i;
	
	cout << "Dwse mikos kai platos" << endl;
	cin >> par1.mikos;
	cin >> par1.platos;
	cin >> par2.mikos;
	cin >> par2.platos;
	
	par3 = par1+par2;
	
	cout << "Mikos par3: " << par3.mikos << endl;
	cout << "Platos par3: " << par3.platos << endl;
	
	// edw grafeis if (p1 == p2) gia na kaneis cout gia eksodo
	
	
	
	
	return 0;
}
