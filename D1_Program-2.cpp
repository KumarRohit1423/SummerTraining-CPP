#include <iostream>
using namespace std;
class A2
{
	int b;
public:
	A2()
	{
		b=0;
	}
	void putdata()
	{
		cout<<"Enter a number: ";
		cin>>b;
	}
	void showdata()
	{
		cout<<"Entered Number: "<<b<<"\n";
	}
};
int main()
{
	A2 ob1;
	A2 *ptr = &ob1;
	ptr->putdata();
	ptr->showdata();
	return 0;
}