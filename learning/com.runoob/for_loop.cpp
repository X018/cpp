#include <iostream>
using namespace std;

int main()
{
	int my_array[5] = {1, 2, 3, 4, 5};

	// for (int &x : my_array)
	for (int i = 0; i < 5; ++i)
	{
		int &x = my_array[i];
		x *= 2;
		cout << x << endl;

		int y = my_array[i];
		y *= 2;
		cout << y << endl;
	}

	// for(auto &x : my_array)
	for (int i = 0; i < 5; ++i)
	{
		int x = my_array[i];
		cout << x << endl;

		int *y = &my_array[i];
		cout << y << "\t" << *y << endl;
	}
}