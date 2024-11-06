#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
int N;
float out, sum=0;

	for (N=0; N<=10; N++)
	{
		out = (float) (2*N+1)/(4*N+3);
		sum = sum + out;
		cout << "Apotelesma gia N =" << N << ":" << out << endl;
	}
	cout << "Teliko apotelesma: " << sum << endl;
	return 0;	
}
