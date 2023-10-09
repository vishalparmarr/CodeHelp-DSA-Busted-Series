# Coding Question

1. Queue Reversal: [https://practice.geeksforgeeks.org/problems/queue-reversal/1]
2. 
3. Reverse First K elements of Queue: [https://practice.geeksforgeeks.org/problems/reverse-first-k-elements-of-queue/1]
4. First non-repeating character in a stream: [https://practice.geeksforgeeks.org/problems/first-non-repeating-character-in-a-stream1216/1]
5. Circular tour: [https://practice.geeksforgeeks.org/problems/circular-tour-1587115620/1]
6. 
7. 
8. Interleave the First Half of the Queue with Second Half: [https://practice.geeksforgeeks.org/problems/interleave-the-first-half-of-the-queue-with-second-half/1]

``` cpp
1. class Solution {
    public:
    queue<int> rev(queue<int> q) {
        
        stack <int> s;
        
        while(!q.empty()){
            int element = q.front();
            q.pop();
            s.push(element);
        }
        
        while(!s.empty()) {
            int element = s.top();
            s.pop();
            q.push(element);
        }
        return q;
    }
};
```

``` cpp
2. 
```

``` cpp
3. queue<int> modifyQueue(queue<int> q, int k) {
    
    stack <int> s;
    
    while(k != 0){
        int element = q.front();
        q.pop();
        s.push(element);
        k--;
    }
    
    int size = q.size();
    
    while(!s.empty()){
        int element = s.top();
        s.pop();
        q.push(element);
    }
    
    while(size != 0){
        int element = q.front();
        q.pop();
        q.push(element);
        size--;
    }
    return q;
}
```

``` cpp
4. class Solution {
    public:
 string FirstNonRepeating(string A) {

        unordered_map <char,int> count;
        queue <int> q;
        string ans = "";
        
        for(int i = 0; i < A.length(); i++) {
            
            char ch = A[i];
            
            //increase count
            count[ch]++;
            
            //store in queue
            q.push(ch);
            
            while (!q.empty()){
                //Repeating character
                if(count[q.front()] > 1){
                    q.pop();
                }
                else{
                    //non-repeating character
                    ans.push_back(q.front());
                    break;
                }
            }

        if(q.empty())
            ans.push_back('#');
        }
        return ans;
    }
};
```

``` cpp
5. class Solution {
  public:
  
    int tour(petrolPump p[],int n) {
        
        int deficit = 0;
        int start = 0;
        int balance = 0;
        
        for (int i = 0; i < n; i++) {
            
            balance += p[i].petrol - p[i].distance;
            
            if (balance < 0) {
                
                deficit += balance;
                start = i+1;
                balance = 0;
            }
        }
        
        if (deficit + balance >= 0)
            return start;
            
        else
            return -1;
    }
};
```

``` cpp
8. class Solution {
public:
    vector<int> rearrangeQueue(queue<int> &q) {
        
        queue <int> q1;
        vector<int> ans;
        int half = q.size() / 2;
        
        while(half--) {
            int value = q.front();
            q.pop();
            q1.push(value);
        }
        
        while(!q1.empty()) {
            
            int value = q1.front();
            q1.pop();
            ans.push_back(value);
            value = q.front();
            q.pop();
            ans.push_back(value);
        }
        return ans;
    }
}; 
```
