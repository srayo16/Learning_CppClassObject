#include <iostream>
using namespace std;

class Person
{
public:
    int roll;
    float gpa;

    void setValue(int x, double y)
    {
        roll = x;
        gpa = y;
        display();
    };

    void display()
    {
        cout << roll << endl
             << gpa << endl;
    };
};

Person Srayo, Mariam;
int main()
{

    Srayo.setValue(25, 4.25);
    // Srayo.display();

    Mariam.setValue(5, 3.25);

    return 0;
}