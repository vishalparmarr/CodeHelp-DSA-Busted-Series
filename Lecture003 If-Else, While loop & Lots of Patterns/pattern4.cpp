/*
            1
            1 2
            1 2 3
            1 2 3 4
         */

#include<iostream>
using namespace std;

int main() {

    int i = 1,n;
    cin >> n;

    while(i <= n){

        int j = 1;
        
        while(j <= i){

            cout << j << " ";
            j++;
        }
        cout << endl;
        i++;
    } 
}