#include <iostream>

using namespace std;

int main(){
    int k(1), sum(0);
    do{
        sum += k;
        k++;
    } while(k <= 10);
     cout << "sum=" << sum << endl;
    return 0;
}