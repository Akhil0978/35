#include <iostream>
using namespace std;
template <class T1, class T2, class T3>
T3 Largest(T1 x, T2 y, T3 z)
{
    if (x > y && x > z)
        return x;
    else if (y > z && y > x)
        return y;
    else
        return z;
}

int main()
{
    cout << Largest<int, float, float>(1, -1.100, 69);
    return 0;
}
