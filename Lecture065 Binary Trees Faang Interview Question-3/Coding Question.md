# Coding Quesion

1. Sum of nodes on the longest path from root to leaf node: [https://practice.geeksforgeeks.org/problems/sum-of-the-longest-bloodline-of-a-tree/1]
2. Lowest Common Ancestor in a Binary Tree: [https://practice.geeksforgeeks.org/problems/lowest-common-ancestor-in-a-binary-tree/1]
3. K Sum Paths: [https://practice.geeksforgeeks.org/problems/k-sum-paths/1] 
4. Kth Ancestor in a Tree: [https://practice.geeksforgeeks.org/problems/kth-ancestor-in-a-tree/1]
5. Maximum sum of Non-adjacent nodes: [https://practice.geeksforgeeks.org/problems/maximum-sum-of-non-adjacent-nodes/1]

```cpp
1. class Solution {
    public:
    
    void solve (Node* root, int len, int &maxLen, int sum, int &maxSum) {
        //base case
        if(root == NULL) {
        
            if (len > maxLen) { 
                maxLen = len;
                maxSum = sum;
            }
            else if (len == maxLen) {
                maxSum = max(sum, maxSum);
            }
         return;
        }
        sum = sum + root -> data;
        
        solve (root -> left, len+1, maxLen, sum, maxSum);
        solve (root -> right, len+1, maxLen, sum, maxSum);
    }
    
    int sumOfLongRootToLeafPath(Node *root) {
        
        int len = 0;
        int maxLen = 0;
        
        int sum = 0;
        int maxSum = INT_MIN;
        
        solve (root, len, maxLen, sum, maxSum);
        return maxSum;
    }
};
```

``` cpp
2. class Solution {
   public:
    
    Node* lca(Node* root ,int n1 ,int n2 ) {

        if(root == NULL)
            return NULL;
            
        if(root -> data == n1 || root -> data == n2)
            return root;
            
        Node* left = lca(root -> left, n1, n2);
        Node* right = lca(root -> right, n1, n2);
        
        if(left != NULL && right != NULL) 
            return root;
        if(left != NULL) 
            return left;
        else 
            return right;
    }
};
```

``` cpp
3. class Solution {
  public:
  
    const int mod = 1e9+7;
    void solve(Node* root, int k, unordered_map<int, int>& sumCnt, int sum, int& cnt){
        if(root == NULL)
            return;
        // add current nodes data to sum and modify the map count
        sum += root -> data;
        // calculate cnt
        // if suppose k = 20 and current sum is 13, then if there exists a sum of 7 
        // already in map we can increase count
        cnt += sumCnt[sum - k] % mod;
        // store the current sum to map
        sumCnt[sum]+=1 % mod;
        // if current sum is equal to target sum
        if(sum == k)
            cnt+=1 % mod;
        // recursively call left and right
        solve(root -> left, k, sumCnt, sum, cnt);
        solve(root -> right, k, sumCnt, sum, cnt);
        // remove current sum count from map
        sumCnt[sum]--;
    }
    
    int sumK(Node *root, int k) {
        
        int count = 0;
        unordered_map<int, int> sumCount;
        int sum = 0;
        
        solve(root, k, sumCount, sum, count);
        return count;
    }
};
```

``` cpp
4.
```
