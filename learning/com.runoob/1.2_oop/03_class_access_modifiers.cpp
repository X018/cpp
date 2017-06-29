#include <iostream>

using namespace std;


class Line
{
	public:
		double length;
		void setLength(double len);
		double getLength(void);
};

/////////////////////////////////////////////////////////////
void Line::setLength(double len)
{
	length = len;
}

double Line::getLength(void)
{
	return length;
}


/////////////////////////////////////////////////////////////
class Box
{		
	private:
		double width;
		
	public:
		double length;
		void setWidth(double wid);
		double getWidth(void);
		
	protected:
		double height;
};

void Box::setWidth(double wid)
{
	width = wid;
}

double Box::getWidth(void)
{
	return width;
}


/////////////////////////////////////////////////////////////
// derived class from Box
class SmallBox : Box
{
	public:
		void setSmallHeight(double hei);
		double getSmallHeight(void);
};

void SmallBox::setSmallHeight(double hei)
{
	height = hei;
}

double SmallBox::getSmallHeight(void)
{
	return height;
}


/////////////////////////////////////////////////////////////
class A
{
	public:
		int a;
		A()
		{
			a1 = 1;
			a2 = 2;
			a3 = 3;
			a = 4;	
		}
		
		void fun()
		{
			cout << "a : " << a << endl;
			cout << "a1 : " << a1 << endl;
			cout << "a2 : " << a2 << endl;
			cout << "a3 : " << a3 << endl;
		}
		
	public:
		int a1;
	
	protected:
		int a2;
		
	private:
		int a3;
};


class APublic : public A
{
	public:
		int a;
		APublic(int i)
		{
			A();
			a = i;
		}
		
		void fun()
		{
			cout << "a : " << a << endl;
			cout << "a1 : " << a1 << endl;
			cout << "a2 : " << a2 << endl;
			//Error : it has no access for visit private memeber
			//cout << "a3 : " < a3 << endl;
		}
};


class AProtected : protected A
{
	public:
		int a;
		AProtected(int i)
		{
			A();
			a = i;
		}
		
		void fun()
		{
			cout << "a : " << a << endl;
			cout << "a1 : " << a1 << endl;
			cout << "a2 : " << a2 << endl;
			//Error : it has no access for visit private memeber
			//cout << "a3 : " < a3 << endl;
		}
};


class APrivate : private A
{
	public:
		int a;
		APrivate(int i)
		{
			A();
			a = i;
		}
		
		void fun()
		{
			cout << "a : " << a << endl;
			cout << "a1 : " << a1 << endl;
			cout << "a2 : " << a2 << endl;
			//Error : it has no access for visit private memeber
			//cout << "a3 : " < a3 << endl;
		}
};


/////////////////////////////////////////////////////////////
int main()
{
	cout << "1.2.03_class_access_modifiers" << endl;
	
	cout << endl << "--------------------------------" << endl;
	Line line;
	
	// set length of line
	line.setLength(6.0);
	cout << "Length of line is : " << line.getLength() << endl;
	
	// get length of line without member function
	line.length = 10.0;
	cout << "Length of line is : " << line.length << endl;
	
	
	cout << endl << "--------------------------------" << endl;
	Box box;
	// set length of box without member function
	box.length = 10.0;
	cout << "Lenght of box is : " << box.length << endl;
	
	//set width of box without member function
	// box.width = 10;
	
	//set width of box with member function
	box.setWidth(10);
	cout << "Width of box is : " << box.getWidth() << endl;
	
	
	cout << endl << "--------------------------------" << endl;
	SmallBox smallBox;
	// set height of sBox with member function
	smallBox.setSmallHeight(5.0);
	cout << "Height of sBox is : " << smallBox.getSmallHeight() << endl;
	
	
	cout << endl << "--------------------------------" << endl;
	APublic aPublic(10);
	cout << "aPublic.a is : " << aPublic.a << endl;
	cout << "aPublic.a1 is : " << aPublic.a1 << endl;
	//Error : protected memeber
	//cout << "aPublic.a2 is : " << aPublic.a2 << endl;
	//Error : private member
	//cout << "aPublic.a3 is : " << aPublic.a3 << endl;
	
	
	cout << endl << "--------------------------------" << endl;
	AProtected aProtected(10);
	cout << "aProtected.a is : " << aProtected.a << endl;
	//Error : public + protected -> protected member
	//cout << "aProtected.a1 is : " << aProtected.a1 << endl;
	// Error : protected memeber
	//cout << "aProtected.a2 is : " << aProtected.a2 << endl;
	//Error : private member
	//cout << "aProtected.a3 is : " << aProtected.a3 << endl;
	
	
	cout << endl << "--------------------------------" << endl;
	APrivate aPrivate(10);
	cout << "aPrivate.a is : " << aPrivate.a << endl;
	//Error : public + protected -> protected member
	//cout << "aPrivate.a1 is : " << aPrivate.a1 << endl;
	// Error : protected memeber
	//cout << "aPrivate.a2 is : " << aPrivate.a2 << endl;
	//Error : private member
	//cout << "aPrivate.a3 is : " << aPrivate.a3 << endl;	
	
	
	return 0;
}
