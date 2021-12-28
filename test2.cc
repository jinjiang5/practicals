#include <iostream>

using namespace std;

template<typename T>
void swap1(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}
template<typename T>
void swap2(T *a, T *b)
{
    T temp = *a;
    *a = *b;
    *b = temp;
}
template<typename T>
void swap3(T a, T b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 5, b = 7;
    cout << "初始:\t\t\t\ta=" << a << " b=" << b << endl;
    swap1(a, b);
    cout << "swap1(T &a, T &b)交换后:\ta=" << a << " b=" << b << endl;
    swap2(&a, &b);
    cout << "swap2(T *a, T *b)交换后:\ta=" << a << " b=" << b << endl;
    swap3(a, b);
    cout << "swap3(T a, T b)交换后:\t\ta=" << a << " b=" << b << endl;
    return 0;
}