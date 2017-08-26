#include <iostream>
using namespace std;

int main() {
	 int radius,diameter,circumference,area;

    cout<<"Enter radius of circle = ";

    cin>>radius;

    diameter=2*radius;
    circumference=2*3.14*radius;
    area=3.14*radius*radius;
    cout<<"diameter of circle is="<<diameter<<endl;
    cout<<"circumference of circle is="<<circumference<<endl;
    cout<<" Area of circle is= "<<area<<endl;
	// your code goes here
	return 0;
}
