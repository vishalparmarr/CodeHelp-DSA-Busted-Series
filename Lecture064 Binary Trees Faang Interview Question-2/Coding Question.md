# Coding Quesion

1. ZigZag Tree Traversal: [https://practice.geeksforgeeks.org/problems/zigzag-tree-traversal/1]
2. Boundary Traversal of binary tree: [https://practice.geeksforgeeks.org/problems/boundary-traversal-of-binary-tree/1]
3. Vertical Traversal of Binary Tree: [https://practice.geeksforgeeks.org/problems/print-a-binary-tree-in-vertical-order/1]
4. Top View of Binary Tree: [https://practice.geeksforgeeks.org/problems/top-view-of-binary-tree/1]
5. Bottom View of Binary Tree: [https://practice.geeksforgeeks.org/problems/bottom-view-of-binary-tree/1]
6. Right View of Binary Tree: [https://practice.geeksforgeeks.org/problems/right-view-of-binary-tree/1]
7. Left View of Binary Tree: [https://practice.geeksforgeeks.org/problems/left-view-of-binary-tree/1]
8. Diagonal Traversal of Binary Tree: [https://practice.geeksforgeeks.org/problems/diagonal-traversal-of-binary-tree/1]

```cpp
1. class Solution {
    public:
   
    vector <int> zigZagTraversal(Node* root) {
        
        vector <int> result;
        //base case
        if(root == NULL)
            return result;
        
        bool leftToRight = true;
        
        queue<Node*> q;
        q.push(root);
        
        while(!q.empty()) {
            
            int size = q.size();
            vector <int> ans(size);
            
            //Level Process
            for(int i = 0; i < size; i++) {
                
                Node* frontnode = q.front();
                q.pop();
                
                //normal insert or reverse insert
                int index = leftToRight ? i : size - i - 1;
                ans[index] = frontnode -> data;
                
                if(frontnode -> left)
                    q.push(frontnode -> left);
                    
                if(frontnode -> right)
                    q.push(frontnode -> right);
            }
            //change the direction
            leftToRight = !leftToRight;
            
            for(auto i : ans)
                result.push_back(i);
        }
        return result;
    }
};
```

``` cpp
2. class Solution {
public:

    void lefttraverse (Node* root, vector <int> &ans) {
        //base case
        if( (root == NULL) || (root -> left == NULL && root -> right == NULL) ) 
            return;
        
        ans.push_back(root -> data);
        
        if(root -> left)
            lefttraverse(root -> left, ans);
        else
            lefttraverse(root -> right, ans);
    }
    
    void leaftraverse (Node* root, vector <int> &ans) {
        //base case
        if(root == NULL)
            return;
        
        if(root -> left == NULL && root -> right == NULL){
            ans.push_back(root -> data);
            return;
        }
            
        leaftraverse(root -> left, ans);
        leaftraverse(root -> right, ans);
    } 
    
    void righttraverse (Node* root, vector <int> &ans) {
        //base case
        if( (root == NULL) || (root -> left == NULL && root -> right == NULL) ) 
            return;
            
        if(root -> right)
            righttraverse(root -> right, ans);
        else
            righttraverse(root -> left, ans);
        
        ans.push_back(root -> data);
    }
    
    vector <int> boundary(Node *root) {
       
        vector <int> ans;
       //base case
        if(root == NULL)
            return ans;
        
        ans.push_back(root -> data);
        
        //left ke element
        lefttraverse(root -> left, ans);
        //left ke leaf node
        leaftraverse(root -> left, ans);
        //right ke leaf node
        leaftraverse(root -> right, ans);
        //right ke element
        righttraverse(root -> right, ans);
       
        return ans;
    }
};
```

``` cpp
3. class Solution {
    public:

    vector<int> verticalOrder(Node *root) {
        
        map <int, map <int, vector <int> > > nodes;
        queue <pair <Node*, pair <int, int> > > q;
        vector <int> ans;
        
        if(root == NULL)
            return ans;
            
        q.push(make_pair(root, make_pair(0,0)));
        
        while (!q.empty()) {
            
            pair <Node*, pair <int, int> > temp = q.front();
            q.pop();
            Node* frontnode = temp.first;
            int hd = temp.second.first;
            int lvl = temp.second.second;
            
            nodes[hd][lvl].push_back(frontnode -> data);
            
            if(frontnode -> left)
                q.push(make_pair(frontnode -> left, make_pair(hd-1, lvl+1)));
                
            if(frontnode -> right)
                q.push(make_pair(frontnode -> right, make_pair(hd+1, lvl+1)));
        }
        
        for(auto i : nodes) {
            
            for(auto j : i.second) {
                
                for(auto k: j.second) {
                    ans.push_back(k);
                }
            }
        }
        return ans;
    }
};
```

``` cpp
4. 
```
