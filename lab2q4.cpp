#include <iostream>
using namespace std;

int main() {
	int a,b,c,d;
	cout<<"days = ";
	cin>>a;
	b=a/365;
	cout<<"years ="<<b<<endl;
	c=(a-365)/7;
	cout<<"weeks ="<<c<<endl;
	d=(a-365)-(c*7);
	cout<<"days ="<<d<<endl;
	// your code goes here
	return 0;
}
