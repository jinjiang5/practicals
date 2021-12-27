#include <iostream>

using namespace std;

struct NodeType
{
    int no;  //作业序号
    int t;   //执行时间
    int mno; //机器序号
    bool operator<(const NodeType &other) const
    {
        return t > other.t; //按t越小越优先出队
    }
};

int main()
{

    return 0;
}