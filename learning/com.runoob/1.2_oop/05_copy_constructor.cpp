#include <iostream>

using namespace std;


class Line
{
	public:
		//Simple Constructor
		Line(int len);
		//Copy Constructor
		Line(const Line &obj);
		//Destructor
		~Line();
		
		int getLength(void);
		void setLength(int len);
		
	private:
		int *ptr;
};


Line::Line(int len)
{
	cout << "Simple Constructor Func : Line(int len)" << endl;
	//allocate memory for pointer
	ptr = new int;
	*ptr = len;
}

Line::Line(const Line &obj)
{
	cout << "Copy Constructor Func : Line(const Line &obj)" << endl;
	ptr = new int;
	//copy value
	*ptr = *obj.ptr;
}

Line::~Line(void)
{
	cout << "dellocate memory" << endl;
	delete ptr;
}

int Line::getLength(void)
{
	return *ptr;
}

void Line::setLength(int len)
{
	*ptr = len;
}

void display_with_nor(Line obj)
{
	cout << "display------------------------" << endl;
	cout << "line's size : " << obj.getLength() << endl;
	obj.setLength(20);
	cout << "line's size : " << obj.getLength() << endl;
}

void display_with_ptr(Line *obj)
{
	cout << "display_with_ptr---------------" << endl;
	cout << "line's size : " << obj->getLength() << endl;
	cout << "line's size : " << (*obj).getLength() << endl;
	obj->setLength(20);
	cout << "line's size : " << obj->getLength() << endl;
}

void display_with_ref(Line &obj)
{
	cout << "display_with_ref---------------" << endl;
	cout << "line's address : " << &obj << endl;
	cout << "line's size :" << obj.getLength() << endl;
	obj.setLength(30);
	cout << "line's size : " << obj.getLength() << endl;
}


int main()
{
	cout << "1.2.05_copy_constructor" << endl;	
	
	
	cout << endl << "--------------------------------" << endl;
	Line line(10);
	display_with_nor(line);
	display_with_ptr(&line);
	
	
	cout << endl << "--------------------------------" << endl;
	Line line2 = line;
//	display_with_nor(line2);
	display_with_ptr(&line2);
	display_with_ref(line2);
	
	
	cout << endl << "--------------------------------" << endl;
	Line *line3 = &line;
	display_with_ptr(line3);
	display_with_ref(*line3);
	
	
	return 0;
}
