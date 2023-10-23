# Coding Quesion

1. Two Sum IV - Input is a BST: [https://www.codingninjas.com/studio/problems/two-sum-in-a-bst_1062631?leftPanelTab=0]
2. Flatten BST To A Sorted List: [https://www.codingninjas.com/studio/problems/flatten-bst-to-a-sorted-list_1169459?leftPanelTab=0]
3. Normal BST To Balanced BST: [https://www.codingninjas.com/studio/problems/normal-bst-to-balanced-bst_920472?leftPanelTab=0]
4. Preorder traversal of a BST: [https://www.codingninjas.com/studio/problems/preorder-traversal-to-bst_893111?leftPanelTab=0]

``` cpp
1. void inorder (BinaryTreeNode<int>* root, vector <int> &in) {
    //base case
    if(root == NULL)
        return ;
    
    inorder(root -> left, in);
    in.push_back(root -> data);
    inorder(root -> right, in);
}

bool twoSumInBST(BinaryTreeNode<int>* root, int target) {
    vector <int> inorderVal;
    inorder(root, inorderVal);

    int i = 0, j = inorderVal.size() - 1;

    while(i < j) {
        
        int sum = inorderVal[i] + inorderVal[j];
        if (sum == target)
            return true;
        else if (sum > target)
            j--;
        else
            i++;
    }
    return false;
}
```

``` cpp
2. void inorder(TreeNode<int>* root, vector <int> &ans) {
    //base case
    if(root == NULL)
        return;
    
    inorder(root -> left, ans);
    ans.push_back(root -> data);
    inorder(root -> right, ans);
}

TreeNode<int>* flatten(TreeNode<int>* root) {

    vector <int> ans;
    inorder(root, ans);
    int size = ans.size();
    TreeNode<int>* newRoot = new TreeNode<int>(ans[0]);
    TreeNode<int>* curr = newRoot;

    for (int i = 1; i < size; i++) {
        TreeNode<int>* temp = new TreeNode<int>(ans[i]);

        curr -> left = NULL;
        curr -> right = temp;
        curr = temp;
    }

    curr -> left = NULL;
    curr -> right = NULL;

    return newRoot;
} 
```

``` cpp
3. void inorder (TreeNode<int>* root, vector <int> &ans) {
    //base case
    if(root == NULL)
        return ;

    inorder(root -> left, ans);
    ans.push_back(root -> data);
    inorder(root -> right, ans);
} 

TreeNode<int>* inorderToBST (int s, int e, vector <int> &ans) {
    //base case
    if(s > e)
        return NULL;

    int mid = s + (e-s) / 2;
    TreeNode<int>* temp = new TreeNode<int> (ans[mid]);
    temp -> left = inorderToBST(s, mid -1, ans);
    temp -> right = inorderToBST(mid + 1, e, ans);
    return temp;
}

TreeNode<int>* balancedBst(TreeNode<int>* root) {
    
    vector <int> ans;
    inorder (root, ans);

    return inorderToBST(0, ans.size() - 1, ans);
} 
```

``` cpp
4. BinaryTreeNode<int>* solve(vector<int> &preorder, int mini, int maxi, int &i) {
    //base case
    if(i >= preorder.size())
        return NULL;
    if(preorder[i] < mini || preorder[i] > maxi)
        return NULL;

    BinaryTreeNode<int>* root = new BinaryTreeNode<int> (preorder[i++]);

    root -> left = solve(preorder, mini, root -> data, i);
    root -> right = solve(preorder, root -> data, maxi, i);
    return root;    
}

BinaryTreeNode<int>* preorderToBST(vector<int> &preorder) {
    
    int mini = INT_MIN;
    int maxi = INT_MAX;
    int i = 0;
    return solve(preorder, mini, maxi, i);
}
```
