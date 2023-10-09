# Coding Quesion

1. Height of Binary Tree: [https://practice.geeksforgeeks.org/problems/height-of-binary-tree/1]
2. Diameter of a Binary Tree: [https://practice.geeksforgeeks.org/problems/diameter-of-binary-tree/1]
3. Check for Balanced Tree: [https://practice.geeksforgeeks.org/problems/check-for-balanced-tree/1]
4. Determine if Two Trees are Identical: [https://practice.geeksforgeeks.org/problems/determine-if-two-trees-are-identical/1]
5. Sum Tree: [https://practice.geeksforgeeks.org/problems/sum-tree/1]

```cpp
1. class Solution {
    public:
    int height(struct Node* node) {
        //base case
        if(node == NULL)
            return 0;
        
        int left = height(node -> left);
        int right = height(node -> right);
        int ans = max(left,right) + 1;
        return ans;
    }
};
```

``` cpp
2. class Solution {
 
  private:
    
    pair<int,int> diameterfast(Node* root){
        //base case
        if(root == NULL){
            pair<int,int> p = make_pair(0,0); 
            return p;
        }
        
        pair<int,int> left = diameterfast(root -> left);
        pair<int,int> right = diameterfast(root -> right);
        
        int op1 = left.first;
        int op2 = right.first;
        int op3 = left.second + right.second + 1;
        
        pair<int,int> ans;
        ans.first = max(op1, max(op2, op3));
        ans.second =max(left.second, right.second) + 1;
        return ans;
    }
 
  public:
 
    int diameter(Node* root) {
       diameterfast(root).first;
    }
};
```

``` cpp
3. class Solution {
    private:
    
    pair <bool, int> isBalancedfast (Node* root){
        //base case
        if(root == NULL){
            pair<bool, int> p = make_pair(true, 0);
            return p;
        }
    
        pair<bool, int> left = isBalancedfast(root -> left);
        pair<bool, int> right = isBalancedfast(root -> right);
           
        bool leftAns = left.first;
        bool rightAns = right.first;
        bool diff = abs (left.second - right.second) <= 1;
        
        pair <bool, int> ans;
        ans.second = max(left.second, right.second) + 1;
        
        if(leftAns && rightAns && diff)
            ans.first = 1;
        else
            ans.first = 0;
            
        return ans;
    }
    public:
    
    bool isBalanced(Node *root) {
        return isBalancedfast(root).first;
    }
};
```

``` cpp
4. class Solution {
    public:
    
    bool isIdentical(Node *r1, Node *r2) {
      //base case
        if(r1 == NULL && r2 == NULL)
            return true;
        
        if(r1 == NULL && r2 != NULL)
            return false;
            
        if(r1 != NULL && r2 == NULL)
            return false;
            
        bool left = isIdentical(r1 -> left, r2 -> left);
        bool right = isIdentical(r1 -> right, r2 -> right);
        bool value = r1 -> data == r2 -> data;
        
        if(left && right && value)
            return true;
            
        else
            return false;
    }
}; 
```

``` cpp
5. class Solution {
    private:
        
        pair <bool, int> isSumTreeFast(Node* root) {
            //base case
            if(root == NULL) {
                pair <bool, int> p = make_pair(true, 0);
                return p;
            }
            
            if(root -> left == NULL && root -> right == NULL) {
                pair <bool, int> p = make_pair(true, root -> data);
                return p;
            }
            
            pair <bool, int> left = isSumTreeFast(root -> left);
            pair <bool, int> right = isSumTreeFast(root -> right);
            
            bool leftAns = left.first;
            bool rightAns = right.first;
            bool curr = root -> data == left.second + right.second;
            
            pair <bool, int> ans;
            
            if(leftAns && rightAns && curr) {
                ans.first = true;
                ans.second = 2*root -> data;
            }
            
            else
                ans.first = false;
                
            return ans;
        }

    public:
    
    bool isSumTree(Node* root) {
        return isSumTreeFast(root).first;
    }
}; 
```
