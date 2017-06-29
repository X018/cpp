#include <iostream>

using namespace std;


class Box
{
	public:
		double length;
		double width;
		double height;
		
		// declare member functions
		double getVolumn(void);
		double setLength(double len);
		double setWidth(double wid);
		double setHeight(double hei);
};


// define member functions
double Box::getVolumn(void)
{
	cout << "volumn = " << length << " * " << width \
		 << " * " << height << endl;
	return length * width * height;
}

double Box::setLength(double len)
{
	length = len;
}

double Box::setWidth(double wid)
{
	width = wid;
}

double Box::setHeight(double hei)
{
	height = hei;
}


int main()
{
	cout << "1.2.02_class_memeber_functions" << endl;
	
	cout << "--------------------------------" << endl;
	
	Box box1;
	Box box2;
	double volumn = 0.0;
	
	// set variables of box1
	box1.setLength(6.0);
	box1.setWidth(7.0);
	box1.setHeight(5.0);
	
	// set variables of box2
	box2.setLength(12.0);
	box2.setWidth(13.0);
	box2.setHeight(10.0);
	
	// show volumn of box1
	volumn = box1.getVolumn();
	cout << "The volumn of box1 is : " << volumn << endl;
	
	cout << "\n";
	
	// show volumn of box2
	volumn = box2.getVolumn();
	cout << "The volumn of box2 is : " << volumn << endl;
	
	
	return 0;
}


