#include <iostream>

using namespace std;

struct Date
{
    int year,month;
    int day;
    int hour;
    int minute;
    int second;
};

int main()
{
    Date date;
    cout << "输入年份:";
    cin >> date.year;
    if (date.year < 0)
    {
        cout << "年份应大于等于0,你输入的是:" << date.year << endl;
        return 1;
    }
    cout << "输入月:";
    cin >> date.month;
    if (date.month < 1 || date.month > 12)
    {
        cout << "月份应在1-12之间,你输入的是:" << date.month << endl;
        return 1;
    }
    cout << "输入日:";
    cin >> date.day;
    if (date.day < 1 || date.day > 31)
    {
        cout << "日应在1-31之间,你输入的是:" << date.day << endl;
        return 1;
    }
    cout << "输入小时:";
    cin >> date.hour;
    if (date.hour < 0 || date.hour > 23)
    {
        cout << "小时应在0-23之间,你输入的是:" << date.hour << endl;
        return 1;
    }
    cout << "输入分钟:";
    cin >> date.minute;
    if (date.minute < 0 || date.minute > 59)
    {
        cout << "分钟应在0-59之间,你输入的是:" << date.minute << endl;
        return 1;
    }
    cout << "输入秒:";
    cin >> date.second;
    if (date.second < 0 || date.second > 59)
    {
        cout << "秒应在0-59之间,你输入的是:" << date.second << endl;
        return 1;
    }

    cout << date.year << "年" << date.month << "月" << date.day << "日 " << date.hour << ":" << date.minute << ":" << date.second;
    return 0;
}