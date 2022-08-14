#include <iostream>
using namespace std;
class A
{
    int m, n;

public:
    A()
    {
        m = 0;
        n = 0;
    }
    void setf()
    {
        cout << "Enter first number: ";
        cin >> m;
        cout << "Enter second number: ";
        cin >> n;
    }
    friend void sums(A ob1);
    void show()
    {
        cout << "\nNumber 1: " << m;
        cout << "\nNumber 2: " << n;
    }
};
void sums(A ob1)
{
    cout << "\nSum using Friends Function: " << (ob1.m) + (ob1.n);
}
int main()
{
    A ob1;
    ob1.setf();
    ob1.show();
    sums(ob1);
    return 0;
}
