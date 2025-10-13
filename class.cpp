#include<iostream>
using namespace std;
class Student
{
	public:
		void display()
		{
			cout<<"welcome to c++ lab"<<endl;
		}
		void sum()
		{
			int a,b;
			cout<<"enter values:"<<endl;
			cin>>a>>b;
			cout<<"sum : "<<a+b;
		}
};

int main()
{
	Student s;
	Student s1;
	s1.sum();
	s.sum();
	return 0;
}
