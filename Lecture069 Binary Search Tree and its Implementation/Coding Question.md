# Coding Quesion

1. Search In BST: [https://www.codingninjas.com/studio/problems/search-in-bst_1402878?leftPanelTab=0]

```cpp
1. bool searchInBST(BinaryTreeNode<int> *root, int x) {
    //base case
    if(root == NULL)
        return false;
    
    if(root -> data == x)
        return true;

    if(root -> data < x) 
        searchInBST(root -> right, x);
    else
        searchInBST(root -> left, x);
}
```
