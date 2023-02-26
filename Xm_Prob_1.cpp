#include <iostream>
using namespace std;

class BoxWhich
{
public:
    double length;
    double width;
    double height;

    BoxWhich()
    {
        length = 0;
        width = 0;
        height = 0;
        display();
    }
    BoxWhich(double x, double y, double z)
    {
        length = x;
        width = y;
        height = z;
        display();
    }
    void display()
    {
        cout << "Box Area: " << getArea() << endl;
    };
    double getArea()
    {

        // double result;
        return 2 * ((length * width) + (width * height) + (height * length));
        // return result;
    }
};

int main()
{
    BoxWhich empty, result(1, 1, 1), result2(2, 2, 2);
    // BoxWhich result(1,1,1);
    return 0;
}