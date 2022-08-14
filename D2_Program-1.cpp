#include <iostream>
using namespace std;
class Student
{
private:
    int rlno;

public:
    Student()
    {
        rlno = 0;
    }
    void inputroll()
    {
        cout << "Enter roll number: ";
        cin >> rlno;
    }
    int retrlno()
    {
        return rlno;
    }
};
class Test : protected Student
{
protected:
    float sub1, sub2;

public:
    Test()
    {
        sub1 = 0.0;
        sub2 = 0.0;
    }
    void inputmarks()
    {
        cout << "Enter marks in both subjects: ";
        cin >> sub1 >> sub2;
    }
};
class Sports
{
    double ped;

public:
    Sports()
    {
        ped = 0.0;
    }
    void ipspm()
    {
        cout << "Enter Marks in Physical Education: ";
        cin >> ped;
    }
    double retped()
    {
        return ped;
    }
};
class result : protected Test, protected Sports
{
private:
    int roll;
    float rest;

public:
    void work()
    {
        inputroll();
        roll = retrlno();
        inputmarks();
        ipspm();
        rest = sub1 + sub2 + retped();
    }
    void display()
    {
        cout << "Roll Number: " << roll << "\n";
        cout << "Total Marks: " << rest;
    }
};
int main()
{
    int ns;
    cout << "Enter number of students: ";
    cin >> ns;
    result ob[2];
    for (int i = 0; i < 2; i++)
    {
        cout << "\nStudent " << i + 1 << " :\n";
        ob[i].work();
    }
    for (int i = 0; i < 2; i++)
    {
        cout << "\nStudent " << i + 1 << " :\n";
        ob[i].display();
    }
    return 0;
}