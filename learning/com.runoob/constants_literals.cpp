#include <iostream>
using namespace std;


#define LENGTH 10
#define WIDTH 5
#define NEWELINE '\n'


int main()
{
	cout << "Hello\tWorld!\n\n";


	int area;
	area = LENGTH * WIDTH;
	cout << area;
	cout << NEWELINE;


	const int RADIUS = 20;
	const float PI = 3.14159255f;
	float circle = 2 * PI * RADIUS;
	cout << circle << endl;


	return 0;
}