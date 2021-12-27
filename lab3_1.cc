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
    CPU(CPU_Rank rank, int frequency, float voltage)
    {
        setRank(rank);
        setFrequency(frequency);
        setVoltage(voltage);
        cout << "构造了一个CPU!" << endl;
    }
    ~CPU(){
        cout << "析构了一个CPU!" << endl;
    }

    CPU_Rank getRank() const { return rank; }
    int getFrequency() const { return frequency; }
    float getVoltage() const { return voltage; }

    void setRank(CPU_Rank rank){
        this->rank = rank;
    }

    void setFrequency(int frequency){
        this->frequency = frequency;
    }

    void setVoltage(float voltage){
        this->voltage = voltage;
    }

    void run(){
        cout << "CPU开始运行!" << endl;
    }

    void stop(){
        cout << "CPU停止运行!" << endl;
    }

};



int main()
{
    CPU cpu1(P1, 200, 3.5);
    cpu1.run();
    cpu1.stop();
    return 0;
}