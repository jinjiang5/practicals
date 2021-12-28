#include <iostream>

using namespace std;

int SearchTag(int a[], int n)
{
    int left = 0;
    int right = n - 1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (mid == a[mid])
            return mid;
        if (mid > a[mid])
            left = mid + 1;
        else
            right = mid - 1;
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
    cout << "下标与值相等的数的下标为:" << SearchTag(a, n) << endl;
    return 0;
}