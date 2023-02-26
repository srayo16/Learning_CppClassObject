#include <iostream>
using namespace std;

class Person
{
public:
    int roll;
    float gpa;
};

int main()
{
    Person Srayo, Mariam;

    Srayo.roll = 54;
    Srayo.gpa = 4.50;

    cout << Srayo.roll << endl
         << Srayo.gpa << endl;

    Mariam.roll = 30;
    Mariam.gpa = 4.50;

    cout << Mariam.roll << endl
         << Mariam.gpa << endl;

    return 0;
}