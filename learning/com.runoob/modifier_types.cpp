#include <iostream>
using namespace std;


class Test1
{
public:
	// 普通构造函数
	Test1(int n)
	{
		num = n;
	};

private:
	int num;
};


class Test2
{
public:
	explicit Test2(int n)
	{
		num = n;
	};

private:
	int num;
};


int main()
{
	// 有符号短整数
	short int i;
	// 无符号短整数
	short unsigned int j;

	j = 50000;
	i = j;
	cout << i << " " << j << endl;


	// 隐式调用其构造函数，成功
	Test1 t1 = 12;
	
	// 编译错误，不能隐式调用其构造函数
	// Test2 t2 = 12;

	// 显式调用成功
	Test2 t2(12);


	return 0;
}