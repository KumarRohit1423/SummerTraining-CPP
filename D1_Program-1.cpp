#include "iostream"
using namespace std;
class A1
{
	int a;
public:
	A1()
	{
		a=0;
	}
	void putdata()
	{
		cout<<"Enter a number: ";
		cin>>a;
	}
	void showdata()
	{
		cout<<"Entered Number: "<<a<<"\n";
	}
};
int main()
{
	A1 obj1;
	obj1.putdata();
	obj1.showdata();
	return 0;
}