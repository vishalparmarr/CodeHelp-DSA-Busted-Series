# Coding Questions :-

1. [Selection Sort](https://www.naukri.com/code360/problems/selection-sort_981162?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2)

``` cpp
1. void selectionSort(vector <int> &arr) {

    for (int i = 0; i < arr.size() - 1 ; i++) {
        
        int minIndex = i;
        
        for(int j = i + 1; j < arr.size(); j++) {
            
            if (arr[j] < arr[minIndex]) 
                minIndex = j;
            
        }
        swap(arr[minIndex], arr[i]);
    }
}
```