#include <iostream>

using namespace std;
//1,3,5,7,9
bool BinarySearch(int a[], int n, int x, int &i, int &j)
{
    int left = 0;
    int right = n - 1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (x == a[mid])
        {
            i = j = mid;
            return true;
        }
        if (x > a[mid])
            left = mid + 1;
        else
            right = mid - 1;
    }
    i = right;
    j = left;
    return false;
}

int main()
{
    int n, x, i, j;
    cout << "输入数组的长度:";
    cin >> n;
    int a[n];
    cout << "输入数组:";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "输入要查找的数:";
    cin >> x;
    if (BinarySearch(a, n, x, i, j))
    {
        cout << "位置为:" << i + 1 << endl;
    }
    else
    {
        if(x < a[0]){
            cout << "数组中没有小于" << x << "的数" << endl;
        } else {
            cout << "小于" << x << "的最大数位置:" << i + 1 << endl;
        }
        if(x > a[n - 1]){
            cout << "数组中没有大于" << x << "的数" << endl;
        } else {
            cout << "大于" << x << "的最小数位置:" << j + 1 << endl;
        }   
    }
    return 0;
}
