# Coding Questions :-

1. [Bubble Sort](https://www.naukri.com/code360/problems/bubble-sort_980524?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2)

``` cpp
1. void bubbleSort(int arr[], int size) {

    for( int i = 1; i < size; i++) {

        for(int j = 0; j < size - i; j++) {

            if(arr[j] > arr[j+1])
                swap(arr[j], arr[j+1]);
        } 
    }
}
```