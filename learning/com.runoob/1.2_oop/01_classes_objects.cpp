#include <iostream>
using namespace std;

class Box
{
	public:
		// length 
		double length;
		// width
		double width;
		// height
		double height;
};


int main()
{
	Box box1;
	Box box2;
	double volumn = 0.0;
	
	// set variables of box1
	box1.length = 6.0;
	box1.width = 7.0;
	box1.height = 5.0;
	
	// set variables of box2
	box2.length = 12.0;
	box2.width = 13.0;
	box2.height = 10.0;
	
	// calculate box1's volumn
	volumn = box1.length * box1.width * box1.height;
	cout << "box1's volumn is : " << volumn << endl;
	
	// calculate box2's volumn
	volumn = box2.length * box2.width * box2.height;
	cout << "box2's volumn is : " << volumn << endl;
	
	
	return 0;
}
