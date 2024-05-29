#include <iostream>
using namespace std;

int firstoccurence (int arr[], int size, int key) {

    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = 0;

    while (start <= end) {

        if (key == arr[mid]) {
            ans = mid;
            end = mid - 1;
        }

        else if (key < arr[mid])
            end = mid - 1;
        
        else
            start = mid + 1;
        
        mid = start + (end - start) / 2;
    }
    return ans;
}

int lastoccurence (int arr[], int size, int key) {

    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = 0;

    while (start <= end) {

        if (key == arr[mid]) {
            ans = mid;
            start = start + 1;
        }

        else if (key < arr[mid])
            end = mid - 1;
        
        else
            start = mid + 1;
        
        mid = start + (end - start) / 2;
    }
    return ans;
}

inline int Totaloccurence (int arr[], int size, int key) {
    return ((lastoccurence(arr,size,key) - firstoccurence(arr,size,key)) + 1);
}

int main () {

    int arr[7] = {1,2,3,3,3,3,5};
    int ans = Totaloccurence(arr,7,3);
    cout << ans;
}