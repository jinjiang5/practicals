#include <iostream>

using namespace std;

const float PI = 3.1416;

int main()
{
    int iType;
    float radius, a, b, area;
    cout << "输入图形的类型(1:圆,2:长方形,3:正方形):";
    cin >> iType;
    switch (iType)
    {
    case 1:
    {
        cout << "输入圆的半径:";
        cin >> radius;
        area = radius * radius * PI;
        cout << "面积为:" << area << endl;
        break;
    }
    case 2:
    {
        cout << "输入长方形的长:";
        cin >> a;
        cout << "输入长方形的宽:";
        cin >> b;
        area = a * b;
        cout << "面积为:" << area << endl;
        break;
    }
    case 3:
    {
        cout << "输入正方形的边长:";
        cin >> a;
        area = a * a;
        cout << "面积为:" << area << endl;
        break;
    }
    default:
    {
        cout << "输入错误!\n请输入正确的图形类型(1:圆,2:长方形,3:正方形)\n你输入的是" << iType << endl;
    }
    }
    return 0;
}