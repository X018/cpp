//////////////////////////////////////////////////////////
//1. �ļ�����: 
#include <iostream>
#include <vector>

using namespace std;

//�������vector��ֵ
void dump_vec(vector <int> *vec)
{
	cout << "vec's capacity : " << vec->capacity() << endl;
	cout << "vec's size : " << vec->size() << endl;
	
	//����һ 
    vector<int>::iterator iter = vec->begin();  
    while (iter != vec->end())  
    {
    	cout << *iter << "\t";
    	iter++;
	}
	
//    //������ 
//	for(vector<int>::iterator iter=vec->begin(); iter!=vec->end(); iter++)
//	{
//		cout << *iter ;
//	}

	cout << endl << endl; 
}


int main()
{
	//////////////////////////////////////////////////////////
	//2. ��������:
	// һά����
	vector <int> a;
	// ��ά
	vector <int*> aa;
	// ��ά
	vector <int**> aaa;
	
	//////////////////////////////////////////////////////////
	//�����÷� 
	int b = 5;
	a.push_back(b);
	a.push_back(8);
	a.push_back(10);
	a.push_back(22);
	cout << "a's capacity : " << a.capacity() << endl;
	cout << "a[0] : " << a[0] << endl;
	cout << "--------------------------------" << endl << endl;
	
	//////////////////////////////////////////////////////////
	//3.2  ��ϸʵ��
	dump_vec(&a);
	
	cout << "a.push_back(2)" << endl;
	a.push_back(2);
	dump_vec(&a);
	
	cout << "a.pop_back()" << endl;
	a.pop_back();
	dump_vec(&a);
	
	cout << "a.at(0): " << a.at(0) << endl; 
	cout << "a.back(): " << a.back() << endl; 
	cout << "a.front(): " << a.front() << endl; 
	cout << endl;
	
	cout << "a.max_size(): " << a.max_size() << endl; 
	cout << "a.capacity(): " << a.capacity() << endl; 
	cout << "a.size(): " << a.size() << endl; 
	cout << endl;

	cout << "a.resize(2)" << endl;
	a.resize(2);
	dump_vec(&a);
	
	cout << "a.resize(4)" << endl;
	a.resize(4);
	dump_vec(&a);
	
	cout << "a.resize(9)" << endl;
	a.resize(9);
	dump_vec(&a);
	
	cout << "a.reserve(6)" << endl;
	a.reserve(6);
	dump_vec(&a);
	
	cout << "a.reserve(10)" << endl;
	a.reserve(10);
	dump_vec(&a);
	
	//a.insert(pos,elem);  ��posλ�ò���һ��elem����
	cout << "a.insert(a.begin() + 4, 9)" << endl;
	//����������ȡֵ����Ϊvector��capacity���ӻ����·����ڴ� 
	vector<int>::iterator pos = a.begin() + 3;
	for(int i=0; i<3; i++)
	{	
		pos = a.begin() + 3;
		a.insert(pos + i, 9);
	}
	dump_vec(&a);
	
	//a.erase(beg,end)-ɾ��[beg,end)��������� 
	cout << "a.erase(pos)" << endl;
	a.erase(pos);
	dump_vec(&a);
	
	cout << "a.erase(pos, pos+2)" << endl;
	a.erase(pos, pos+2);
	dump_vec(&a);
	
	//a.rbegin() ����һ���������������ָ������c�����һ��Ԫ��
	//a.rend() ����һ���������������ָ������c�ĵ�һ��Ԫ��ǰ���λ��
	cout << "a.rbegan() & a.rend()" << endl;
	for(vector<int>::reverse_iterator r_iter=a.rbegin(); r_iter!=a.rend(); r_iter++)
	{
		cout << *r_iter << "\t";
	}
	cout << endl;
	dump_vec(&a);
	
	//a.swap(b) ����һ��vector��������
	vector <int> m;
	m.push_back(1);
	m.push_back(2);
	m.swap(a);
	dump_vec(&a);
	
	//a.empty() �ж�vector�Ƿ�Ϊ��
	cout << "a.empty() : " << a.empty() << endl;
	cout << endl;
	
	//a.clear() ��յ�ǰ��vector
	cout << "a.clear()" << endl;
	a.clear();
	cout << "a.empty() : " << a.empty() << endl;

	
	/////////////////////////////////////////////////
	/////////////////////////////////////////////////
	/////////////////////////////////////////////////
	/////////////////////////////////////////////////
	
	
	return 0;
}
