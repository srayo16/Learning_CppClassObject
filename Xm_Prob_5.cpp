#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class SUM
{
public:
    void sum(int a, int b)
    {
        cout << a + b << endl;
    }
    void sum(long a, long b)
    {
        cout << a + b << endl;
    }
};

int main()
{
    SUM s1, s2;
    s1.sum(5, 5), s2.sum(4, 4);
    return 0;
}