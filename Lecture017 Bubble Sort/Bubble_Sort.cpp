#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size){

    for( int i = 1; i < size; i++) {

        for(int j = 0; j < size - i; j++){

            if(arr[j] > arr[j+1])
            swap(arr[j], arr[j+1]);
        } 
    }
}

void printArray(int array[], int size) {

  for (int i = 0; i < size; i++) 
    cout << array[i] << " ";
  
  cout << endl;
}

int main() {
    
    int arr[] = {20, 12, 10, 15, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    bubbleSort (arr, size);
    printArray(arr,size);
}