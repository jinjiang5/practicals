#include <iostream>

using namespace std;

class Animal
{
private:
    int age;

public:
    Animal()
    {
    }
    ~Animal()
    {
    }
    void setAge(int age)
    {
        this->age = age;
    }

    int getAge() { return this->age; }
};

class Dog : public Animal
{
public:
    Dog() {}
    ~Dog() {}
    
    //void setAge(int age) { Animal::setAge(age); }
};

int main()
{
    Dog dog1;
    dog1.setAge(5);
    cout << dog1.getAge() << endl;
    return 0;
}