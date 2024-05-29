# Coding Questions :-

1. [First and Last Position of an Element In Sorted Array](https://www.naukri.com/code360/problems/first-and-last-position-of-an-element-in-sorted-array_1082549?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2)

2. [Peak Index in a Mountain Array](https://leetcode.com/problems/peak-index-in-a-mountain-array/)

``` cpp
1. int first(vector<int>&arr,int n, int key) {
    
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    
    while(start <= end){
        if(arr[mid] == key) {
            ans = mid;
            end = mid - 1;
        }

        else if(key > arr[mid])
            start = mid + 1;
        
        else
            end = mid - 1;
        
        mid = start + (end-start)/2;     
    }
    return ans;
}

int last(vector<int>&arr,int n, int key){
    int start = 0;
    int end = n-1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    
    while(start <= end) {
        if(arr[mid] == key) {
            ans = mid;
            start = start + 1;
        }

        else if(key > arr[mid])
            start = mid + 1;
        
        else
            end = mid - 1;
        
        mid = start + (end-start)/2;     
    }
    return ans;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k) {
    
    pair<int,int> p;
    p.first = first(arr,n,k);
    p.second = last(arr,n,k);
    return p;
}
```

``` cpp
2. int peakIndexInMountainArray(vector<int>& arr) {
    
    int start = 0;
    int end = arr.size() - 1;
	
    int mid = start + (end - start) / 2;

	while (start < end) {

		if(arr[mid] < arr[mid + 1])
     		start = mid + 1;
    	else
      		end = mid;
    
		mid = start + (end - start) / 2;
	}
	return start;
    }
```