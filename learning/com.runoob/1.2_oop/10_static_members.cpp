#include <iostream>

using namespace std;


class Box
{
	public:
		static int objectCount;
		
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


int Box::objectCount = 0;


int main()
{
	cout << "1.2.10_static_members" << endl;
	cout << "---------------------" << endl;
	
	Box box1(3.3, 1.2, 1.5);
	Box box2(8.5, 6.0, 2.0);
	cout << "Total objects : "	<< Box::objectCount << endl;
	
	
	return 0;	
}
