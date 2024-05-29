#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int> &arr) {
    
    for(int i = 1; i < arr.size(); i++){
 
        int temp = arr[i];
        int j = i - 1;

        for(; j >= 0; j--) {
            
            if(arr[j] > temp) 
                arr[j+1] = arr[j];
            else 
                break;          
        }
        arr[j+1] = temp;  
    } 
}

int main(){

    vector<int> arr = {4,52,5,2,15,67,2,35,67,78};
    insertionSort(arr);

    for(int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
}