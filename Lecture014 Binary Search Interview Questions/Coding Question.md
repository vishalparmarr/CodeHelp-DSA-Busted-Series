# Coding Questions :-

1. [Search In Rotated Sorted Array](https://www.naukri.com/code360/problems/search-in-rotated-sorted-array_1082554?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2)

2. [Square Root of a number](https://www.naukri.com/code360/problems/square-root_893351?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2) 

``` cpp
1. int getPivot(vector<int>& arr, int n) {

    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;

    while(start < end ) {

        if(arr[mid] >= arr[0])
            start = mid + 1;
        
        else
            end = mid;
        
        mid = start + (end - start) / 2;
    }
    return start;
}

int binarySearch(vector<int>& arr, int s, int e, int key) {

    int start = s;
    int end = e;

    int mid = start + (end - start) / 2;

    while(start <= end) {

        if(arr[mid] == key)
            return mid;
        
        if(key > arr[mid]) 
            start = mid + 1;
        
        else
            end = mid - 1;
        
        mid = start + (end-start)/2;
    }
    return -1;
}

int search(vector<int>& arr, int n, int k) {
   
    int pivot = getPivot(arr, n);

    if( k >= arr[pivot] && k <= arr[n-1])
        return binarySearch(arr, pivot, n-1, k);     //BS on second line
    
    else
        return binarySearch(arr, 0, pivot - 1, k);   //BS on first line
}

```

``` cpp
2. int floorSqrt(int n) {

    int start = 0;
    int end = n;
    long long int mid = start + (end - start) / 2;    
    long long int ans = -1;
    
    while(start <= end) {
            
        long long int square = mid * mid;
            
        if(square == n)
            return mid;
            
        if(square < n) {
            ans = mid;
            start = mid + 1;
        }
        else
            end = mid - 1;
            
        mid = start + (end - start) / 2; 
    }
    return ans;
  }
```