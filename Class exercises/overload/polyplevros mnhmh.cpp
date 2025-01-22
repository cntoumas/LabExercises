#include <iostream>
using namespace std;

class shape {
	public:
		int edges;
		double *len;
		
		shape (){
			edges=0;
			len=NULL;
		}	
		
		~shape (){
			delete [] len;
		}
		
		void set_edges(int a){
			len = new double[a];
			edges = a;
		}
		
		void set_len(int i, double m){
			*(len+i) = m;
		}
		
		double give_circ(){
			int i;
			double temp=0;
			for (i=0; i<edges; i++){
				temp = temp + *(len+i);
			}
			return temp;
		}
		
	
};







int main (){
	shape polyplevro;
	int a,i;
	double m,p;
	
	cout << "Orise plevres" << endl;
	cin >> a;
	polyplevro.set_edges(a);
	for (i=0; i<a; i++){
		cout << "Orise mikos plevras" << endl;
		cin >> m;
		polyplevro.set_len(i,m);
		}
	p = polyplevro.give_circ();
	cout << "H perimetros einai: " << p << endl;
	return 0;
}
