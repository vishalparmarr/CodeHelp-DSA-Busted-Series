#include <iostream>
#include <math.h>
using namespace std;

int main (){

    int ans = 0, i = 0, n = 5;
    while(n != 0){

        int bit = n & 1;
        ans = (bit * pow(10,i)) + ans;
        n = n >> 1;
        i++;
    }
    cout << ans;
}