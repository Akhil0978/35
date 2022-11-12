#include <iostream>
using namespace std;
template <class T1, class T2, class T3>
T3 largest(T1 x, T2 y)
{
    return (x > y) ? x : y;
}

int main()
{
    cout << largest<int, float, float>(10.90, 100.1);
    return 0;
}
