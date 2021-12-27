#include <iostream>

using namespace std;

class Vehicle
{
public:
    virtual void Run()
    {
        cout << "Vehicle开始运行!" << endl;
    }
    virtual void Stop()
    {
        cout << "Vehicle停止运行!" << endl;
    }
};

class Bicycle : virtual public Vehicle
{
public:
    void Run()
    {
        cout << "Bicycle开始运行!" << endl;
    }
    void Stop()
    {
        cout << "Bicycle停止运行!" << endl;
    }
};

class Motorcar : virtual public Vehicle
{
public:
    void Run()
    {
        cout << "Motorcar开始运行!" << endl;
    }
    void Stop()
    {
        cout << "Motorcar停止运行!" << endl;
    }
};

class Motorcycle : public Bicycle, public Motorcar
{
public:
    void Run()
    {
        cout << "Motorcycle开始运行!" << endl;
    }
    void Stop()
    {
        cout << "Motorcycle停止运行!" << endl;
    }
};

int main()
{
    Vehicle vehicle;
    Bicycle bicycle;
    Motorcar motorcar;
    Motorcycle motorcycle;
    vehicle.Run();
    vehicle.Stop();
    bicycle.Run();
    bicycle.Stop();
    motorcar.Run();
    motorcar.Stop();
    motorcycle.Run();
    motorcycle.Stop();
    Vehicle *p;
    p = &vehicle;
    p->Run();
    p->Stop();
    p = &bicycle;
    p->Run();
    p->Stop();
    p = &motorcar;
    p->Run();
    p->Stop();
    p = &motorcycle;
    p->Run();
    p->Stop();
    return 0;
}