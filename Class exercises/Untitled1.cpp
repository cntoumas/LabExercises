#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
int main()
{
	int x;
	int i;
	int N;
	int j;
	cout<<"Give a Number:";
	cin>>N;
	
	for(x=1; x<=(N-1); x++)
	{
		for(j=1; j<=(N-1-x); j++)
		{
			cout<<' ';
		}
		for(i=1; i<=(2*x-1); i++)
		{
			cout<<"*";	
		}
		cout<<endl;
		
			
	}
		
	return 0;
}
