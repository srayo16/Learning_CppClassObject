#include <iostream>
using namespace std;

class Glass
{

public:
    float left;
    float right;

    void display()
    {
        cout << "Left one: " << left << " "
             << "Right One: " << right << endl;
    }

    Glass(float x, float y)
    {
        left = x;
        right = y;
        display();
    }
};

int main()
{
    Glass Srayo(4.25, 2.75), Mariam(3.75, 2.75);

    return 0;
}