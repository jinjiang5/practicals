#include <iostream>

using namespace std;

int main(){
    int k(1), sum(0);
    for(;k<=10;k++){
        sum += k;
    }
    cout << "sum=" << sum << endl;
    return 0;
}