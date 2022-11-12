#include <iostream>
using namespace std;
template <class T1, class T2>
void swap(T1 a, T2 b)
{
    cout << "a = " << b << ", b = " << a << endl;
}

int main()
{
    swap<int, float>(2, 420.10);
    return 0;
}
