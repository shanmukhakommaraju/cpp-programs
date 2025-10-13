#include<iostream>
using namespace std;
template<class T>
class Box
{
	private:
		T value;
	public:
	    Box(T v)
		{
		  value=v; 	
		}
	void display()
	    {
		   cout<<"value:"<<value<<endl;
	    }		
};
int main()
{
	Box<int>intBox(10);
	Box<double>doubleBox(10.5);
	Box<char>charBox('S');
	intBox.display();
	doubleBox.display();
	charBox.display();
	return 0;
}
