# Coding Quesion

1. K-th Largest Sum Subarray: [https://www.codingninjas.com/studio/problems/k-th-largest-sum-contiguous-subarray_920398?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar]
2. 

``` cpp
1. int getKthLargest(vector<int> &arr, int k) {

    priority_queue <int, vector <int>, greater <int>> pq;
    
    int n = arr.size();
    for (int i = 0; i<n; i++) {
        int sum = 0;
        for(int j = i; j<n; j++) {
            sum += arr[j];

            if(pq.size() < k)
                pq.push(sum);

            else if (sum > pq.top()) {
                    pq.pop();
                    pq.push(sum);
            }
        }
    }
    return pq.top();
}
```

``` cpp
2. 
```
