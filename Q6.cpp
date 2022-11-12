#include <iostream>
using namespace std;
template <class T1, class T2>
void sum(T1 *arr, T2 size)
{
    T1 temp = 0;
    for (int i = 0; i < size; i++)
        temp += arr[i];
    cout << temp << endl;
}

int main()
{
    float arr[] = {1, -2, 3.9, 4, 0};
    sum<float, int>(arr, 5);
    return 0;
}
