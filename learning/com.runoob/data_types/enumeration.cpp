#include <iostream>

using namespace std;

enum color
{
	red,
	green,
	blue
};

enum days
{
	one,
	two,
	three
};


int main()
{
	enum color c = blue;	
	cout << sizeof(c) << endl;

	enum days day = one;
	switch(day)
	{
		case one:
		{
			cout << "one" << endl;
			break;
		}
		case two:
		{
			cout << "two" << endl;
			break;
		}
		case three:
		{
			cout << "three" << endl;
			break;
		}
	}

	enum times
	{
		first,
		second,
		third,
		forth,
		fifth
	} time;
	time = second;
	if(time == second)
	{
		cout << "Successed!" << endl;
	}

	return 0;
}