#include <iostream>
using namespace std;
template <class T1, class T2>
void add(T1 x, T2 y)
{
    cout << x + y;
}

int main()
{
    add<int, float>(2, 3.5);
    return 0;
}
