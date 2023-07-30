#include <vector>
#include <iostream>
using namespace std;

int findDuplicate(int arr[], int size) {
    
    int ans = 0;
    
    //XOR ing all array elements
    for (int i = 0; i < size; i++)
    	ans = ans ^ arr[i];
    
	
    //XOR [1, n-1]
    for(int i = 1; i < size; i++)
    	ans = ans ^ i;
    
    return ans;
}

int main(){

    int arr[5] = {2, 1, 2, 4, 3};
    int ans = findDuplicate(arr, 5);

    cout << ans;
}