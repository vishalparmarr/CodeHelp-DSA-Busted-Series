# Coding Quesion

1. Kth smallest element: [https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1]
2. Is Binary Tree Heap: [https://practice.geeksforgeeks.org/problems/is-binary-tree-heap/1]
3. Merge two binary Max heaps: [https://practice.geeksforgeeks.org/problems/merge-two-binary-max-heap0144/1]
4. Minimum Cost of ropes: [https://practice.geeksforgeeks.org/problems/minimum-cost-of-ropes-1587115620/1]
5. Convert BST to Min Heap: [https://www.geeksforgeeks.org/convert-bst-min-heap/]

``` cpp
1. class Solution {
    public:
    int kthSmallest(int arr[], int l, int r, int k) {
        
        priority_queue <int> pq;
        
        for(int i = 0; i < k; i++)
            pq.push(arr[i]);
        
        for (int i = k; i<=r; i++) {
            if(arr[i] < pq.top()){
                pq.pop();
                pq.push(arr[i]);
            }
        }
        return pq.top();
    }
};
```

``` cpp
2. class Solution {
  public:
  
    int countNodes(struct Node* root) {
        //base case
        if(root == NULL)
            return 0;
            
        int ans = 1 + countNodes(root -> left) + countNodes(root -> right);
        return ans;
    }
    
    bool isCBT(struct Node* root, int index, int count) {
        //base case
        if(root == NULL)
            return true;
        
        if (index >= count)
            return false;

        else {
            int left = isCBT(root -> left, 2*index+1, count);
            int right = isCBT(root -> right, 2*index+2, count);
            return(left && right);
        }
        
    }
    
    bool isMax(struct Node* root) {
        //base case 
        if(root -> left == NULL && root -> right == NULL)
            return true;
            
        if(root -> right == NULL)
            return (root -> data > root -> left -> data);
        
        else {
            int left = isMax(root -> left);
            int right = isMax(root -> right);
            
            return (left && right && (root -> data > root -> left -> data) && (root -> data > root -> right -> data));
        }
    }
  
    bool isHeap(struct Node* tree) {
        
        int index = 0;
        int totalcount = countNodes(tree);
        
        if(isCBT(tree, index, totalcount) && isMax(tree))
            return true;
        else
            return false;
    }
};
```

``` cpp
3. class Solution{
    public:
    
    void heapify(vector <int> &ans, int n, int i) {
        
        int largest = i;
        int left = 2*i + 1;
        int right = 2*i + 2;
        
        if(left < n && ans[largest] < ans[left])
            largest = left;
            
        if(right < n &&ans[largest] < ans[right])
            largest = right;
            
        if(largest != i){
            swap(ans[largest], ans[i]);
            heapify(ans, n, largest);
        }
    }
    
    vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
        //step1 Merge both arrays into one
        vector <int> ans;
        for(auto i:a)
            ans.push_back(i);
        for(auto i:b)
            ans.push_back(i);
            
        //step2 buid heap using merged array
        int size = ans.size();
        for(int i = size/2 - 1; i >= 0; i--)
            heapify (ans, size, i);
            
        return ans;
    }
};
```

``` cpp
4. class Solution {
    public:
    long long minCost(long long arr[], long long n) {
        
        priority_queue <long long, vector <long long>, greater <long long>> pq;
        
        for (int i = 0; i<n; i++)
            pq.push(arr[i]);
            
        long long cost = 0;
        
        while (pq.size() > 1) {
            long long a = pq.top();
            pq.pop();
            
            long long b = pq.top();
            pq.pop();
            
            long long sum = a + b;
            cost += sum;
            
            pq.push(sum);
        }
        return cost;
    }
};
```

``` cpp
5. class Solution{
  public:
  
    void inorder (Node* root, vector <int> &ans) {
        //base case
        if(root == NULL)
            return;
            
        inorder(root->left, ans);
        ans.push_back(root -> data);
        inorder(root->right, ans);
    }
    
    int i = 0;
    void preorder (Node* root, vector <int> &ans) {
        //base case
        if(root == NULL)
            return;
        if(i < ans.size())
            swap(root-> data, ans[i++]);
            
        preorder(root->left, ans);
        preorder(root->right, ans);
    }
    
    void convertToMaxHeapUtil(Node* root) {
        
        vector <int> ans;
        inorder(root, ans);
        preorder(root, ans);
    }    
};
```
