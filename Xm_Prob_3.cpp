#include <iostream>
#include <cmath>
using namespace std;

class Right_Triangle
{
public:
    int p;
    int b;

    Right_Triangle(int x, int y)
    {
        p = x;
        b = y;
    };

    double area()
    {
        double result = 0.5 * p * b;
        cout << "Area: " << result << endl;
        return result;
    };

    double diagonal()
    {
        double result = sqrt((p * p) + (b * b));
        cout << "Diagonal: " << result << endl;
        return result;
    };
};

int main()
{
    Right_Triangle myInput(5, 4);

    myInput.area();
    myInput.diagonal();

    return 0;
}