#include <iostream>
using namespace std;

int main() {
	float a,b,c,d,e,f,g,h;
	cout<<"physics = ";
	cin>>a;
	cout<<" chem = ";
	cin>>b;
	cout<<" bio = ";
	cin>>c;
	cout<<" maths = ";
	cin>>d;
	cout<<" computer science = ";
	cin>>e;
	f=a+b+c+d+e;
	cout<<" total = "<<f<<endl;
	g=f/5;
	cout<<" average = "<<g<<endl;
	h=(f/500)*100;
	cout<<" percentage = "<<h<<endl;
	// we assume that max mark is 500
	// your code goes here
	return 0;
}
