# Coding Quesion

1. Construct Tree from Inorder & Preorder: [https://practice.geeksforgeeks.org/problems/construct-tree-1/1]
2. Tree from Postorder and Inorder: [https://practice.geeksforgeeks.org/problems/tree-from-postorder-and-inorder/1]

```cpp
1. class Solution {
    private:
    int Findposition(int in[], int inorderStart, int inorderEnd, int element){
        
        for(int i = inorderStart; i<=inorderEnd; i++) {
            
            if(in[i] == element)
                return i; 
        }
        return -1 ;
    }
    
    Node* solve(int in[], int pre[], int &index, int inorderStart, int inorderEnd, int n) {
        //base case
        if(index >= n || inorderStart > inorderEnd)
            return NULL ;
        
        int element = pre[index++] ;                          // At every interation index is increasing
        Node* root  = new Node(element); 
        int position  = Findposition(in, inorderStart, inorderEnd, element);
        
        root->left = solve(in, pre, index, inorderStart, position-1, n);
        root->right = solve(in, pre, index, position+1, inorderEnd, n);
        
        return root;
    }
    
    public:
    
    Node* buildTree(int in[], int pre[], int n) {
        int preorderindex = 0;           //Pre order is NLR so First element is root
         
        Node* ans = solve(in, pre, preorderindex, 0, n-1, n);
        return ans;
    }
};
```

```cpp
2. int Findposition(int in[], int inorderStart, int inorderEnd, int element, int n){
    
    for(int i = inorderStart; i<=inorderEnd; i++) {
        
        if(in[i] == element)
            return i; 
    }
    return -1;
}

Node* solve(int in[], int post[], int &index, int inorderStart, int inorderEnd, int n) {
    //base case
    if(index < 0 || inorderStart > inorderEnd)
        return NULL;
    
    int element = post[index--];                          // At every interation index is decreasing
    Node* root  = new Node(element); 
    int position  = Findposition(in, inorderStart, inorderEnd, element, n);
    
    //recursive calls
    root-> right = solve(in, post, index, position+1, inorderEnd, n);
    root-> left = solve(in, post, index, inorderStart, position-1, n);
    
    return root;
}

Node *buildTree(int in[], int post[], int n) {

    int postorderindex = n-1;           //Post order is LRN so last element is root
    
    Node* ans = solve(in, post, postorderindex, 0, n-1, n);
    return ans;
}
```
