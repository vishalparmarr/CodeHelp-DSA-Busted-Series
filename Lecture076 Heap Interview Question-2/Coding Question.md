# Coding Quesion

1. K-th Largest Sum Subarray: [https://www.codingninjas.com/studio/problems/k-th-largest-sum-contiguous-subarray_920398?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar]
2. Merge K Sorted Arrays: [https://www.codingninjas.com/studio/problems/merge-k-sorted-arrays_975379?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar]

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
2. class node {
    
    public:
    int data;
    int i;
    int j;

    node(int data, int row, int col) {
        this -> data = data;
        this -> i = row;
        this -> j = col;
    }
};

class compare {
    public:
    bool operator() (node* a, node* b) {
        return a-> data > b -> data;
    }
};

vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k) {

    priority_queue < node*, vector <node*>, compare > minHeap;
    
    //step1 insert all first elements of karrays in heap
    for (int i = 0; i < k; i++) {
        node *tmp = new node(kArrays[i][0], i, 0);
        minHeap.push(tmp);
    }
    //step2
    vector <int> ans;
    while (!minHeap.empty()) {
        node* tmp = minHeap.top();
        ans.push_back(tmp -> data);
        minHeap.pop();

        int i = tmp -> i;
        int j = tmp -> j;

        if(j+1 < kArrays[i].size()) {
            node* next = new node(kArrays[i][j+1], i, j+1);
            minHeap.push(next);
        }
    }
    return ans;
}
```

``` cpp
3. 
```
