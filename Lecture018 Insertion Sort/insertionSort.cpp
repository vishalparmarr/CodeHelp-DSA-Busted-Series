#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int> &arr){
    
    for(int i = 1; i < arr.size(); i++){
 
        int temp = arr[i];
        int j = i - 1;

        for(; j >= 0; j--){
            
            if(arr[j] > temp) {
                //shift
                arr[j+1] = arr[j];
            }
            else { // ruk jao
                break;
            }            
        }
        //copy temp value
        arr[j+1] = temp;  
    } 
}

int main(){

    vector<int> a;

}