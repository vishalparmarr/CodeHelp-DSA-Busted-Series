# Coding Question

1. N Stacks in an Array: [https://bit.ly/3BexNwv]

``` cpp
1. class NStack {

    int *arr, *top, *next;
    int n, s, freespot;

public:
   
    NStack(int N, int S) {
        
        n = N;
        s = S;
        arr = new int[s];
        top = new int[n];
        next = new int[s];
        freespot = 0;

        //top initialization
        for (int i = 0; i < n; i++)
            top[i] = -1;

        //next initialization
        for (int i = 0; i < s; i++)
            next[i] = i+1;

        //update the last index of next 
        next[s-1] = -1;        
    }

    bool push(int x, int m) {

       //check stack is overflow
       if(freespot == -1)
        return false;
        
       //find index
       int index = freespot;

       //update freespot
       freespot = next[index];

       //push element 
       arr[index] = x;

       //update next
        next[index] = top[m-1];

        //update top
        top[m-1] = index;

        return true;
    }

    int pop(int m) {
        
        //check stack is underflow
        if(top[m-1] == -1)
            return -1;

        //update index
        int index = top[m-1];

        //update top
        top[m-1] = next[index];

        //update next
        next[index] = freespot;

        //update freespot
        freespot = index;

        return arr[index];
    }
};
```
