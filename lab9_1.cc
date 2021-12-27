#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<vector<int>> L;
vector<vector<int>> S;

int CommonOrder(string x, string y, string &z)
{
    L = vector<vector<int>>(y.size() + 1, vector<int>(x.size() + 1, 0));
    S = vector<vector<int>>(y.size() + 1, vector<int>(x.size() + 1, 0));
    for (int i = 1; i <= y.size(); i++)
    {
        for (int j = 1; j <= x.size(); j++)
        {
            if (x.at(j - 1) == y.at(i - 1))
            {
                L.at(i).at(j) = L.at(i - 1).at(j - 1) + 1;
                S.at(i).at(j) = 1;
            }
            else if (L.at(i).at(j - 1) >= L.at(i - 1).at(j))
            {
                L.at(i).at(j) = L.at(i).at(j - 1);
                S.at(i).at(j) = 2;
            }
            else
            {
                L.at(i).at(j) = L.at(i - 1).at(j);
                S.at(i).at(j) = 3;
            }
        }
    }
    int i = y.size(), j = x.size();
    while (i > 0 && j > 0)
    {
        if (S.at(i).at(j) == 1)
        {
            z.insert(0, 1, x.at(j - 1));
            i--;
            j--;
        }
        if (S.at(i).at(j) == 2)
        {
            j--;
        }
        if (S.at(i).at(j) == 3)
        {
            i--;
        }
    }
}

int main()
{
    string x = "acbbabdbb";
    string y = "abcbdb";
    string z;
    CommonOrder(x, y, z);
    return 0;
}