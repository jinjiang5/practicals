#include <iostream>
#include <random>

using namespace std;

int count;
void create_random_list(int list[], int n)
{
    for (int i = 0; i < n; i++)
    {
        //list[i] = random() % 100000;
        random_device rd;
        mt19937 gen(rd());
        uniform_int_distribution<> distrib(1, 1000000);
        list[i] = distrib(gen);
    }
}

void Merge(int r[], int r1[], int s, int m, int t)
{
    int i = s, j = m + 1, k = s;
    while (i <= m && j <= t)
    {
        if (r[i] <= r[j])
        {
            r1[k++] = r[i++];
        }
        else
        {
            r1[k++] = r[j++];
        }
    }
    while (i <= m)
    {
        r1[k++] = r[i++];
    }
    while (j <= t)
    {
        r1[k++] = r[j++];
    }
}

void MergeSort(int r[], int s, int t)
{
    int m, r1[10000];
    if (s == t)
    {
        //count += 1;
        return;
    }
    else
    {
        m = (s + t) / 2;
        //count += 1;
        MergeSort(r, s, m);
        MergeSort(r, m + 1, t);
        Merge(r, r1, s, m, t);
        for (int i = s; i <= t; i++)
        {
            count += 1;
            r[i] = r1[i];
        }
    }
}

int Partition(int r[], int first, int end)
{
    int i = first, j = end;
    while (i < j)
    {
        while (i < j && r[i] <= r[j])
        {
            count +=1;
            j--;
        }
        if (i < j)
        {
            int temp = r[i];
            r[i] = r[j];
            r[j] = temp;
            i++;
        }
        while (i < j && r[i] <= r[j])
        {
            count +=1;
            i++;
        }
        if (i < j)
        {
            int temp = r[i];
            r[i] = r[j];
            r[j] = temp;
            j--;
        }
    }
    return i;
}

void QuickSort(int r[], int first, int end)
{
    int pivot;
    if (first < end)
    {
        pivot = Partition(r, first, end);
        QuickSort(r, first, pivot - 1);
        QuickSort(r, pivot + 1, end);
    }
}

int main()
{
    int N;
    cout << "input N:";
    cin >> N;
    count = 0;
    int a[N];
    int b[N];
    create_random_list(a, N);
    for(int i = 0; i < N; i++)
    {
        b[i] = a[i];
    }
    MergeSort(a, 0, N);
    cout << "MergeSort count:" << count << endl;
    count = 0;
    QuickSort(b, 0, N);
    cout << "QuickSort count:" << count << endl;
    return 0;
}
/*
Data            1000       2000       3000       4000       5000       6000
MergeSort       9987       21964      34917      47917      61822      75822
QuickSort       7464       17471      29027      44403      49960      65039
*/