#include <iostream>
using namespace std;

int sum (int *arr, int size) {

    //base case
    if (size == 0)
        return 0;
    
    if (size == 1)
        return arr[0];
    
    /* int remainingPart = sum(arr+1, size-1);
    int sum = arr[0] + remainingPart;
    return sum; */

    return arr[0] + sum(arr+1, size-1);
}

int main() {

    int arr[5] = {3, 2, 5, 1, 6};
    
    int ans = sum(arr, 5);
    cout << ans;
}