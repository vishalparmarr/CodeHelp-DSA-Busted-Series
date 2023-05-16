#include <vector>
#include <iostream>
using namespace std;

void bubbleSort(vector<int> &arr, int n)
{   
    for(int i = 1; i < n; i++) {
        //for round 1 to n-1
        bool swapped = false;
        
        for(int j =0; j < n - i; j++) {
            
            //process element till n-i th index
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false) {
            //already sorted
            break;
        }  
    }
}

void printArray(vector<int> &array, int size) {

  for (int i = 1; i < size; i++) 
    cout << array[i] << " ";
}

int main(){

    vector<int> arr = {20, 12, 10, 15, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    bubbleSort (arr, size);
    printArray(arr,size);
    cout << endl << arr.capacity();
}
