#include <iostream>
#include <string.h>
#include <cmath>
using namespace std;

class Student
{

private:
    string name;
    int id;
    float CGPA;

public:
    Student()
    {
    }

    Student(string x, int y, float z)
    {

        name = x;
        id = y;
        CGPA = z;
    }

    void showAvarage(Student s1, Student s2)

    {

        cout << "Average: " << (s1.CGPA + s2.CGPA) / 2.0 << endl;
    }
};

int main()
{
    Student s1("Srayo", 25, 4.25), s2("Shihab", 26, 4.27), s3;

    s3.showAvarage(s1, s2);

    return 0;
}