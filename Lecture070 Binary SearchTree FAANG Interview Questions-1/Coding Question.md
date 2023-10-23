# Coding Quesion

1. Partial BST: [https://www.codingninjas.com/studio/problems/validate-bst_799483?leftPanelTab=0]
2. Find K-th smallest Element in BST: [https://www.codingninjas.com/studio/problems/find-k-th-smallest-element-in-bst_1069333?leftPanelTab=0]
3. 

```cpp
1. bool isBST(BinaryTreeNode<int> *root, int min, int max) {
    //base case
    if(root == NULL)
        return true;

    if(root -> data <= max && root -> data >= min) {
        bool left = isBST(root -> left, min, root -> data);
        bool right = isBST(root -> right, root -> data, max);
        return left && right;
    }
    else
        return false;
}

bool validateBST(BinaryTreeNode<int> *root) {   
    return isBST(root, INT_MIN, INT_MAX);
}
```

``` cpp
2. int solve(BinaryTreeNode<int>* root, int k, int &i) {
    //base case
    if(root == NULL)
        return -1;

    //Inorder Traversal    L
    int left = solve(root -> left, k, i);

    if(left != -1)
        return left;
    // N
    i++;
    if(i == k)
        return root -> data;
    // R
    return solve(root -> right, k, i);
}

int kthSmallest(BinaryTreeNode<int>* root, int k) {
    
    int i = 0;
    int ans = solve(root, k, i);
    return ans;
}
```
