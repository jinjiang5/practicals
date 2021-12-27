#include <iostream>

using namespace std;

double C[5][5];
int R[5][5];

double OptimalBST(double p[], int n)
{
    int i, j, k, d;
    int min, mink, sum;
    for (i = 1; i <= n; i++)
    {
        C[i][i - 1] = 0;
        C[i][i] = p[i - 1];
        R[i][i] = i;
    }
    C[n + 1][n] = 0;
    for (d = 1; d < n; d++)
    {
        for (i = 1; i <= n - d; i++)
        {
            j = i + d;
            min = 1000;
            mink = i;
            sum = 0;
            for (k = i; k <= j; k++)
            {
                sum = sum + p[k - 1];
                if (C[i][k - 1] + C[k + 1][j] < min)
                {
                    min = C[i][k - 1] + C[k + 1][j];
                    mink = k;
                }
            }
            C[i][j] = min + sum;
            R[i][j] = mink;
        }
    }
    return C[1][n];
}

int main()
{
    double a[] = {0.1, 0.2, 0.4, 0.3};
    cout << "平均查找次数为:" << OptimalBST(a, 4) << endl;
    return 0;
}