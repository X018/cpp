#include <iostream>

using namespace std;


class Box
{
		double width;
	
	public:
		friend void printWidth(Box box)	;
		void setWidth(double w);
};

void Box::setWidth(double w)
{
	width = w;
}


void printWidth(Box box)
{
	// printWidth is friend with box, can view all varaible
	cout << "Width of box : " << box.width << endl;
}


int main()
{
	cout << "1.2.06_friend_functions" << endl;
	cout << "-----------------------" << endl;
	
	Box box;
	box.setWidth(10.0);
	//use friend function
	printWidth(box);
	
	return 0;
}
