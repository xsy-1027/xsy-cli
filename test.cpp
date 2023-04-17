//modification--------test.cpp
#include <iostream>
using namespace std;
#include <string>

//类的对象作为另一个类的成员

class Phone    //手机类
{	
public:
 
	Phone(string PName)
	{
		cout<<"Phone()的有参构造函数调用"<<endl;
		m_PName = PName; 
	}
	~Phone()
	{
		cout<<"Phone()的析构函数调用"<<endl;
	}

	string m_PName;   //手机品牌的名称
};


class Person    //人类
{
public:


	Person(string name,string PName) :m_Name(name), m_Phone(PName)
	{
		//m_Name = name;
		//m_Phone = PName;
		//或饮食转换法：  Phone m_Phone = PName
		cout<<"Person()的有参构造函数调用"<<endl;
	}

	~Person()
	{
		cout<<"Person()的析构函数调用"<<endl;
	}
	string m_Name;
	Phone m_Phone;
};
//-----------------------------------------test01( )---------------
void test01()
{
	Person p1("张三","三星");

	cout<<"p1的名字： "<<p1.m_Name<<endl
		<<"p1的手机： "<<p1.m_Phone.m_PName<<endl;
}

int main()
{

	test01();
	system("pause");
	return 0;
} 
//当其他类的对象成员作为本类成员，构造函数先构造类对象
