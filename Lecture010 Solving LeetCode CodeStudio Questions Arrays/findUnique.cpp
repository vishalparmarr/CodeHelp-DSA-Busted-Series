#include <iostream>
using namespace std;

int findUnique(int arr[], int size) {
   	
    int ans = 0;
    
    for(int i = 0; i < size; i++)
        ans = ans ^ arr[i];
    
    return ans;
}

int main(){

    int arr[5] = {3,4,3,5,4};

    int ans = findUnique(arr, 5);
    cout << ans;
}