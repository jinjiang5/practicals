#include <iostream>

using namespace std;

enum CPU_Rank
{
    P1 = 1,
    P2,
    P3,
    P4,
    P5,
    P6,
    P7
};
class CPU
{
private:
    CPU_Rank rank;
    int frequency;
    float voltage;

public:
    CPU()
    {
        cout << "构造了一个CPU!" << endl;
    }
    ~CPU()
    {
        cout << "析构了一个CPU!" << endl;
    }

    CPU_Rank getRank() const { return rank; }
    int getFrequency() const { return frequency; }
    float getVoltage() const { return voltage; }

    void setRank(CPU_Rank rank)
    {
        this->rank = rank;
    }

    void setFrequency(int frequency)
    {
        this->frequency = frequency;
    }

    void setVoltage(float voltage)
    {
        this->voltage = voltage;
    }

    void run()
    {
        cout << "CPU开始运行!" << endl;
    }

    void stop()
    {
        cout << "CPU停止运行!" << endl;
    }
};

class RAM
{
public:
    RAM()
    {
        cout << "构造了一个RAM" << endl;
    }
    ~RAM()
    {
        cout << "析构了一个RAM" << endl;
    }
};

class CDROM
{
public:
    CDROM()
    {
        cout << "构造了一个CDROM" << endl;
    }
    ~CDROM()
    {
        cout << "析构了一个CDROM" << endl;
    }
};

class Computer
{
private:
    CPU cpu;
    RAM ram;
    CDROM cdrom;

public:
    Computer()
    {
        cout << "构造了一个Computer" << endl;
    }
    ~Computer()
    {
        cout << "析构了一个Computer" << endl;
    }
    void run()
    {
        cpu.run();
        cout << "Computer开始运行!" << endl;
    }
    void stop()
    {
        cpu.stop();
        cout << "Computer停止运行!" << endl;
    }
};

int main()
{
    Computer computer1;
    cout << "hello" << endl;
    return 0;
}