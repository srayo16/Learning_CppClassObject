#include <iostream>
using namespace std;

class SUM
{
public:
    void sum(int x, long y)
    {
        cout << x + y << endl;
    };
    void sum(int x, int y, int z)
    {
        cout << x + y + z << endl;
    }
};

int main()
{
    SUM s1, s2;
    s1.sum(5, 5);

    return 0;
}