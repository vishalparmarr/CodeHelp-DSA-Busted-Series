// Number of Set bits

#include <iostream>
#include <math.h>
using namespace std;

int binary(int n){

    int ans = 0;
    int i = 0;
    while(n != 0){

        int bit = n&1;
        ans = (bit * pow(10,i)) + ans;
        n= n >> 1;
        i++;
    }
    return ans;
}

int count(int n){

    int count = 0;
    int c = binary(n);

   for(int i =31; i>=0; i--){
        if((1LL<<i)&n) 
        count++;
    }

    return count;
}

int main(){

    int a, b;
    cin >> a >> b;

    int num1 = count(a);
    int num2 = count(b);

    cout << num1 + num2;
}