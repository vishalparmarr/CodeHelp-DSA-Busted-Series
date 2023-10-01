# Coding Quesion

1. Implement 2 Stacks in an Array: [https://bit.ly/3gr4wW8]

```cpp
1. #include <bits/stdc++.h> 
class TwoStack {

private:
    int top1,top2;
    int *arr;
    int size;    
public:

    // Initialize TwoStack.
    TwoStack(int s) {
       
        this -> size = s;
        arr = new int[size];
        top1 = -1;
        top2 = size; 
    }
    
    // Push in stack 1.
    void push1(int num) {
   
        if(top2 - top1 > 1){
            top1++;
            arr[top1] = num;
        }
    }

    // Push in stack 2.
    void push2(int num) {
    
        if(top2 - top1 > 1){
            top2--;
            arr[top2] = num;
        }
    }

    // Pop from stack 1 and return popped element.
    int pop1() {
        
        if (top1 == -1){
            return -1;
        }
        else{
            int ans = arr[top1];
            top1--;
            return ans;
        }
    }

    // Pop from stack 2 and return popped element.
    int pop2() {
        
        if(top2 == size){
            return -1;
        }
        else{
            int ans = arr[top2];
            top2++;
            return ans;
        }
    }
};
```
