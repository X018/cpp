#include <iostream>
#include <vector>

using namespace std;


int main()
{
	vector<int> ivec;
	cout << "capacity(容器能存储数据的个数|容器 容量):" << ivec.capacity() << endl;
	cout << "size目前存在的元素数|元素个数:" << ivec.size() << endl;
	
	for(int i=0; i < 10; i++)
	{
		ivec.push_back(i);
		cout << "size:" << ivec.size() << endl;
		cout << "capacity:" << ivec.capacity() << endl;
	}
	
	while(ivec.size() != ivec.capacity())
	{
		ivec.push_back(0);
	}
	
	cout << "size = capacity. insert one element!" << endl;
	ivec.push_back(0);
	cout << "capacity:" << ivec.capacity() << endl;
	cout << "size:" << ivec.size() << endl;
	
	ivec.reserve(100);
	cout << "reverse(指定容器能存储数据的个数) capacity 100!" << endl;
	cout << "size:" << ivec.size() << endl;
	cout << "capacity:" << ivec.capacity() << endl;
	
	while(ivec.size() != ivec.capacity())
	{
		ivec.push_back(20);
	}
	
	cout << "size = capacity. insert on element!" << endl;
	ivec.push_back(0);
	cout << "size:" << ivec.size() << endl;
	cout << "capacity:" << ivec.capacity() << endl;
	
	ivec.resize(50);
	cout << "resize(重新指定有效元素的个数 ，区别与reserve()指定容量的大小)50!" << endl;
	cout << "size:" << ivec.size() << endl;
	cout << "capacity:" << ivec.capacity() << endl;
	
	ivec.resize(150);
	cout << "resize 150!" << endl;
	cout << "size:" << ivec.size() << endl;
	cout << "capacity:" << ivec.capacity() << endl;
	
	ivec.resize(250);
	cout << "resize 250!" << endl;
	cout << "size:" << ivec.size() << endl;
	cout << "capacity:" << ivec.capacity() << endl;
	
	return 0;
}
