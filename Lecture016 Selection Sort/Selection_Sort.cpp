#include <iostream>
using namespace std;

void selectionSort(int arr[], int size){

    for( int i = 0; i < size - 1; i++) {

       int minIndex = i;

        for(int j = i + 1; j < size; j++){

            if(arr[j] < arr[minIndex])
                minIndex = j;
        }
        swap(arr[minIndex], arr[i]); 
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
    selectionSort (arr, size);
    printArray(arr,size);
}