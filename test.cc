#include <iostream>
#include <algorithm>
#include <vector>
#include <random>

using namespace std;

void create_random_list(vector<int> nums, int n)
{
    for (int i = 0; i < n; i++)
    {
        //list[i] = random() % 100000;
        random_device rd;
        mt19937 gen(rd());
        uniform_int_distribution<> distrib(1, 1000000);
        nums.push_back(distrib(gen));
    }
}

int main(int argc, char **argv)
{
    int N;
    N = atoi(argv[1]);
    vector<int> nums;
    create_random_list(nums, N);
    sort(nums.begin(), nums.end());
    return 0;
}