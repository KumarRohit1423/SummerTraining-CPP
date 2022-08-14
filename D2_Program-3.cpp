#include <iostream>
using namespace std;
class student
{
    int n;

public:
    student()
    {
        n = 0;
    }
    void setn(int nn)
    {
        n = nn;
    }
    void show()
    {
        cout << "Entered Number: " << n;
    }
};
int main()
{
    student ob1;
    student *ptr = &ob1;
    ptr->setn(4);
    ptr->show();
    return 0;
}