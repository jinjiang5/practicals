#include <iostream>

using namespace std;

void Hanoi(int, char, char, char);

int main()
{
    Hanoi(4, 'A', 'B', 'C');
    return 0;
}

void Hanoi(int n, char A, char B, char C)
{
    if (n == 1)
    {
        cout << A << "-->" << C << endl;
    }
    else
    {
        Hanoi(n - 1, A, C, B);
        cout << A << "-->" << C << endl;
        Hanoi(n - 1, B, A, C);
    }
}