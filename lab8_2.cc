#include <iostream>

using namespace std;

int SearchTag(int a[], int n, int x)
{
    int left = 0;
    int right = n - 1;
    while (left < right)
    {
        int mid = (left + right) / 2;
        x = mid + 1;
        if (x == a[mid])
            return mid;
        if (x > a[mid])
            right = mid - 1;
        else
            left = mid + 1;
    }
    return -1;
}

int main()
{
    int n;
    cout << "输入数组的长度:";
    cin >> n;
    int a[n];
    cout << "输入数组:";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "位置与值相等的数的位置为:" << SearchTag(a, n, 0) + 1 << endl;
    return 0;
}