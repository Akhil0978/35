#include <iostream>
using namespace std;
class A
{
};

template <class T1>
class B : public A
{
public:
    T1 a;
};

int main()
{
    B<float> b;
    b.a = 10.1;
    cout << b.a << endl;
    return 0;
}
