#include <iostream>

using namespace std;

class Vehicle
{
private:
    int maxspeed;
    int weight;

public:
    Vehicle()
    {
        cout << "构造了一个Vehicle" << endl;
    }
    ~Vehicle()
    {
        cout << "析构了一个Vehicle" << endl;
    }

    void Run()
    {
        cout << "开始运行!" << endl;
    }
    void Stop()
    {
        cout << "停止运行!" << endl;
    }
};

class Bicycle : virtual public Vehicle
{
private:
    int height;

public:
    Bicycle() {
        cout << "构造了一个Bicycle" << endl;
    }
    ~Bicycle() {
        cout << "析构了一个Bicycle" << endl;
    }
};

class Motorcar : virtual public Vehicle
{
private:
    int seatnum;

public:
    Motorcar() {
        cout << "构造了一个Motorcar" << endl;
    }
    ~Motorcar() {
        cout << "析构了一个Motorcar" << endl;
    }
};

class Motorcycle : public Bicycle, public Motorcar
{
public:
    Motorcycle() {
        cout << "构造了一个Motorcycle" << endl;
    }
    ~Motorcycle() {
        cout << "析构了一个Motorcycle" << endl;
    }
};

int main()
{
    Motorcycle motorcycle;
    motorcycle.Run();
    motorcycle.Stop();
    return 0;
}