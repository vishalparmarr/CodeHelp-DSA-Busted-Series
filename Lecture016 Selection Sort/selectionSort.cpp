#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector <int> &arr){

    for (int i = 0; i < arr.size() - 1 ; i++) {
        
        int minIndex = i;
        
        for(int j = i + 1; j < arr.size(); j++) {
            
            if (arr[j] < arr[minIndex]) 
                minIndex = j;
            
        }
        swap(arr[minIndex], arr[i]);
    }
}

int main (){

    vector <int> a = {5,2,7,9,10};
    selectionSort (a);

    for (int i = 0; i < a.size(); i++) 
    cout << a[i] << " ";
}