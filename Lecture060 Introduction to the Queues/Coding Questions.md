# Coding Question

1. Implement a Queue: [https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqbU5INEhFeXZqT3l6dXZjY1lJSWpSQVl5clByd3xBQ3Jtc0tscmhqNVNEdEMteTFmQTNYTms0T3J0WDN0TnRUOENXU3dBREJ0cldtR1ZnaHlPTi1uTERWenp4MlExNFJlazVoNEs3alFsbzVGRjR2QVBCcnFUQmJ5dFJLN0NDU2dtcmw5SW50dTRwdXhfV0NELTdURQ&q=https%3A%2F%2Fbit.ly%2F3uL7QDG&v=W7uB9-TKfTg]

2. Circular Queue: [https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqbnNKMTBKMGJGRjNNQ1Q3YlN4MU5vWlplOUlFZ3xBQ3Jtc0tuTjU2OHRMeVVMcnhURG9mZmM3eWNrVzZfNGhaZktiSTlDd19wNU80a0FCVVB0VFJ0S2E4bEhRYVpHNlMxcS02NUxnTzhXbFNnY0FfRlVVUkRFdU15R0VzM2xIRGw2MUlqa0NZYjVpTmNMTkhKNndVUQ&q=https%3A%2F%2Fbit.ly%2F34xocVZ&v=W7uB9-TKfTg]

3. Implement Deque: [https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqbk1ZLXd3MEpfVXJ4WWhnU2dydlpMdkNQaTFUUXxBQ3Jtc0tuUFFqRldaRzVBWGZNMEtYbzdTSU5acHdpcXZJc1BiZWFEVlRMbklVOWV3LWg5c0NyWFVwNFlCZHpXREF5a1F6RnlORXNDNGVTLVEtQXl5RWx0Nk9Za01NcE9uNWxqOWNRdy1sNzNOOEhPMkg5ODZrNA&q=https%3A%2F%2Fbit.ly%2F3JoEvmF&v=W7uB9-TKfTg]

``` cpp
1. class Queue {

private:

    int *arr;
    int fronts;
    int rear;

public:

    Queue() {
        
       arr = new int[100000]; 
       fronts = -1;
       rear = -1;
    }

    bool isEmpty() {
        
        if(fronts == -1 || fronts > rear)
            return true;
        else
            return false;
    }

    void enqueue(int data) {
        
        if(fronts == -1)
           fronts++;
        
            rear++;
            arr[rear] = data;   
    }

    int dequeue() {
        
        if(fronts > rear || rear == -1) 
            return -1;
        else
            return arr[fronts++];
    }

    int front() {
        
        if(fronts > rear || rear == -1)
            return -1;
        else
            return arr[fronts];
    }
};
```

``` cpp
2. class CircularQueue{    
    int *arr;    
    int front;    
    int rear;    
    int size;        
    
    public:   
    
    CircularQueue(int n){        
        size = n;        
        arr = new int[size];        
        front = rear = -1;    
    }

    bool enqueue(int value){            
        
        if( (front == 0 && rear == size-1) || (rear == (front-1)%(size-1)) ) {                    
            return false;        
        }        
        
        else if(front == -1){   
            front = rear = 0;                   
        }

        else if(rear == size-1 && front != 0) {            
            rear = 0;        
        }        

        else {          
            rear++;       
        }                
        
        arr[rear] = value;                
        return true;    
    }
    int dequeue() {        
        
        if(front == -1) {                 
            return -1;        
        }        
        
        int ans = arr[front];        
        arr[front] = -1;        
        
        if(front == rear) {            
            front = rear = -1;        
        }        
        
        else if(front == size - 1) {            
            front = 0;         
        }        
        
        else {           
            front++;        
        }        
        
    return ans;    
    } 
};
```

``` cpp
3. class Deque {

    int *arr;
    int size;
    int front;
    int rear;

public:

    Deque(int n) {

        size = n;
        arr = new int[size];
        front = rear = -1;
    }

    bool pushFront(int x) {

    if((front==0 && rear==size-1) || (front!=0 && rear == (front-1) % (size-1)) )
        return false;

    else if(isEmpty())
        front = rear = 0;

    else if(rear != size -1 && front == 0)
        front = size-1;

    else
        front--;

    arr[front] = x;
    return true;
    }

    bool pushRear(int x) {

        if(isFull())
            return false;

        else if(isEmpty())
            front = rear = 0;

        else if(rear == size-1 && front !=0)
            rear = 0;

        else
            rear++;

        arr[rear] = x;
        return true;
    }

    int popFront() {

        if(isEmpty())
            return -1;

        int ans = arr[front];
        arr[front] = -1;

        if(front == rear)
            front = rear = -1;

        else if(front == size-1)
            front = 0;

        else
            front++;

        return ans;
    }

    int popRear() {

        if(isEmpty())
            return -1;

        int ans = arr[rear];
        arr[rear] = -1;

        if(front == rear)
            front = rear = -1;

        else if(rear == 0)
            rear = size-1;

        else
            rear--;

        return ans;
    }

    int getFront() {

        if(isEmpty())
            return -1;

        return arr[front];
    }

    int getRear() {

        if(isEmpty())
            return -1;

        return arr[rear];
    }

    bool isEmpty() {

        if(front == -1)
            return true;

        else
            return false;
    }

    bool isFull() {

        if((front==0 && rear==size-1) || (front!=0 && rear == (front-1) % (size-1)) )
            return true;

        else
            return false;
    }
};
```
