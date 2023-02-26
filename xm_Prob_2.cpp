#include <iostream>
using namespace std;

class BAT
{
private:
    float height;

public:
    void setHeight(double x)
    {
        height = x;
    };

    friend float width(BAT b);
};
float width(BAT b)
{
    return b.height * b.height;
};

int main()
{
    BAT myBat;
    myBat.setHeight(5.5);
    cout << "Result: " << width(myBat) << endl;

    return 0;
}