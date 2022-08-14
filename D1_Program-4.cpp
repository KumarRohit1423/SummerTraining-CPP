#include "iostream"
using namespace std;
int main()
{
	int n1 = 2947;
	double n2 = 3457.987;
	long long int n3 = 893797863276;
	cout.width(12);
	cout.fill('+');
	cout<<n1<<"\n";
	cout.precision(7);
	cout.setf(ios::fixed);
	cout<<n2<<"\n";
	cout.unsetf(ios::fixed);
	cout<<n3<<"\n";
	return 0;
}