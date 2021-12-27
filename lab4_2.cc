#include <iostream>

using namespace std;

class BaseClass
{
public:
    BaseClass()
    {
        cout << "构造基类对象!" << endl;
    }
    ~BaseClass()
    {
        cout << "析构基类对象!" << endl;
    }
};

class DeriveClass : public BaseClass
{
public:
    DeriveClass()
    {
        cout << "构造派生类对象!" << endl;
    }
    ~DeriveClass() {
        cout << "析构派生类对象!" << endl;
    }
};

int main()
{
    DeriveClass a;
    return 0;
}