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
		
		int comapre(Box box)
		{
			return this->Volumn() > box.Volumn();
		}
		
	private:
		double length;
		double width;
		double height;
};


int main()
{
	cout << "1.2.08_this_pointer" << endl;
	cout << "-------------------" << endl;
	
	Box box1(3.3, 1.2, 1.5);
	Box box2(8.5, 6.0, 2.0);
	
	if(box1.comapre(box2))
	{
		cout << "box2 is smaller than box1!" << endl;
	}
	else
	{
		cout << "box2 is equal to or larger than box1!" << endl;
	}
	
	return 0;
}
