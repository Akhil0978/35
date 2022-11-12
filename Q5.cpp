#include <iostream>
using namespace std;
template <class T1, class T2>
void ADD(T1 a, T2 b)
{
    cout << a + b << endl;
}

int main()
{
    ADD<int, int>(4, 8);
    return 0;
}
