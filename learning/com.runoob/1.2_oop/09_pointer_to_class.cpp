#include <iostream>

using namespace std;


class Box
{
	public:
		Box(double l=2.0, double w=2.0, double h=2.0)
		{
			cout << "Constructor called." << endl;
			length = l;
			width = w;
			height = h;
		}
		
		double Volumn()
		{
			return length * width * height;
		}
		
	private:
		double length;
		double width;
		double height;
};


int main()
{
	cout << "1.2.09_pointer_to_class" << endl;
	cout << "-----------------------" << endl;
	
	Box box1(3.3, 1.2, 1.5);
	Box box2(8.5, 6.0, 2.0);
	Box *ptrBox;
	
	ptrBox = &box1;
	cout << "Volumn of box1 : " << ptrBox->Volumn() << endl;
	
	ptrBox = & box2;
	cout << "Volumn of box2 : " << ptrBox->Volumn() << endl;
	
	
	return 0;
}
