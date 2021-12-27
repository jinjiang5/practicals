#include <iostream>

using namespace std;

class Point
{
private:
    int _x, _y;

public:
    Point() {}

    Point(int x, int y)
    {
        _x = x;
        _y = y;
    }

    ~Point() {}

    Point &operator++()
    {
        _x++;
        _y++;
        return *this;
    }

    Point operator++(int)
    {
        Point temp(*this);
        _x++;
        _y++;
        return temp;
    }

    Point &operator--()
    {
        _x--;
        _y--;
        return *this;
    }

    Point operator--(int)
    {
        Point temp(*this);
        _x--;
        _y--;
        return temp;
    }
    void set(int x, int y){
        _x = x;
        _y = y;
    }
    int getX() const { return _x; }
    int getY() const { return _y; }
    void show() const
    {
        cout << _x << ", " << _y << endl;
    }
};

int main()
{
    Point point(0, 0);
    cout << "(++point): ";
    (++point).show();
    point.set(0, 0);
    cout << "(point++): ";
    (point++).show();
    point.set(0, 0);
    cout << "(--point): ";
    (--point).show();
    point.set(0, 0);
    cout << "(point--): ";
    (point--).show();
    return 0;
}