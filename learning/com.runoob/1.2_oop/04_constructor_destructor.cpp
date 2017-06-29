#include <iostream>

using namespace std;


class Line
{
	public:
		void setLength(double len);
		double getLength(void);
		//Constructor
		Line(void);
		Line(double len);
		Line(double len, double wei);
		
		//destructor
		~Line();
		
	private:
		double length;
		double weight;
};


Line::Line(void)
{
	cout << "Object is being created!" << endl;
}

Line::~Line(void)
{
	cout << "Object is being deleted!" << endl;
}

Line::Line(double len)
{
	cout << "Object is being created! length = " << len << endl;
	length = len;
}

Line::Line(double len, double wei)
:length(len)
,weight(wei)
{
	cout << "Object is being created! length = " << len \
		 << ", weight = " << wei << endl;
}

double Line::getLength(void)
{
	return length;
}

void Line::setLength(double len)
{
	length = len;
}


int main()
{
	cout << "1.2.04_constructor_destructor" << endl;	
	
	
	cout << endl << "--------------------------------" << endl;
	Line line;
	//set length
	line.setLength(6.0);
	cout << "Length of line is : " << line.getLength() << endl;
	
	
	cout << endl << "--------------------------------" << endl;
	Line line1(10.0);
	cout << "Length of line1 is : " << line1.getLength() << endl;
	//set length
	line1.setLength(6.0);
	cout << "Length of line1 is : " << line1.getLength() << endl;
	
	
	cout << endl << "--------------------------------" << endl;
	Line line2(8.0, 12.0);
	cout << "Length of line2 is : " << line2.getLength() << endl;
	//set length
	line1.setLength(16.0);
	cout << "Length of line2 is : " << line2.getLength() << endl;
	
	
	
	return 0;
}
