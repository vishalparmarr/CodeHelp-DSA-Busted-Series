// Sum of an array

#include <iostream>
using namespace std;

int sum (int arr[], int size){

    int sum = 0;

    for (int i = 0; i < size; i++){
        sum = sum + arr[i];
    }

    return sum;
}

int main(){

    int size;
    cout << "Enter the size of an array = ";
    cin >> size;

    int a[100];

    for (int i = 0; i < size; i++){
        cin >> a[i];
    }

    cout << "Sum = "<< sum(a, size);

}