# Coding Quesion

1. Build Min Heap: [https://www.codingninjas.com/studio/problems/build-min-heap_1171167?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar]

``` cpp
1. void heapify (vector<int> &arr, int n, int i) {

    int smallest = i;
    int left = 2*i + 1;
    int right = (2*i) + 2;
    
    if(left < n && arr[smallest] > arr[left])
        smallest = left;
    
    if(right < n && arr[smallest] > arr[right])
        smallest = right;
    
    if(smallest != i) {
        swap(arr[smallest], arr[i]);
        heapify(arr, n, smallest);
    }
}

vector<int> buildMinHeap(vector<int> &arr) {

    int n = arr.size(); 
    for(int i = (n/2)-1; i >= 0; i--)
        heapify(arr, n, i);
    
    return arr;
}
```
