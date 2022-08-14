#include <iostream>
using namespace std;
void swapper(int *a, int *b)
{
	int t;
	t = *a;
	*a = *b;
	*b = t;
}
int main()
{
	int n1, n2;
	cout << "Enter two numbers: ";
	cin >> n1 >> n2;
	cout << "Numbers before: ";
	cout << n1 << " " << n2 << "\n";
	cout << "Numbers after: ";
	swapper(&n1, &n2);
	cout << n1 << " " << n2 << "\n";
	return 0;
}