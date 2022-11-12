#include <iostream>
using namespace std;
template <class T1>
void Hash(T1 a)
{
    cout << a % 20 << endl;
}

int main()
{
    Hash<int>(2);
    return 0;
}
