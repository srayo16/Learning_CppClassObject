/*Car and Bus are different types of vehicles. Car has its private property speed and passenger. The Bus also
has the same property. Both the vehicle’s speed depends on its engine and passenger depends on number of
sits given when a Car of a Bus is created.
You are assigned to the task of comparing the two types of vehicles by their speed.
Now translate the scenario to a C++ program, by creating the classes and comparing the speed of two objects
of the classes Bus and Car.*/

#include <iostream>
using namespace std;

class CAR
{
public:
    int speed;
    int passenger;

    CAR()
    {
    }
    CAR(int x, int y)
    {

        speed = x;
        passenger = y;
    }
};

class BUS
{
public:
    int speed;
    int passenger;

    BUS()
    {
    }

    BUS(int x, int y)
    {

        speed = x;
        passenger = y;
    }
};

int comparing()
{
    CAR obj1;
    BUS obj2;

    if (obj1.speed > obj2.speed)
    {
        cout << "CAR is fast!" << endl;
        return (obj1.speed - obj2.speed);
    }
    else
    {
        cout << "BUS is fast!" << endl;
        return (obj2.speed - obj1.speed);
    }
};

int main()
{
    CAR ob1(100, 20);
    BUS obj2(80, 30);
    int result = comparing();
    cout << result << endl;

    return 0;
}
