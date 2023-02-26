#include <iostream>
using namespace std;

class Student
{
public:
    int roll;
    double gpa;

    void display()
    {
        cout << roll << endl
             << gpa << endl;
    };
    Student()
    {
        cout << "Default constructor is working fine!" << endl;
    }
    Student(int x, double y)
    {
        roll = x;
        gpa = y;
        display();
    };
};

int main()
{
    Student object;
    Student Srayo(25, 5.25), Mariam(20, 4.50);

    return 0;
}