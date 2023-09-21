# Coding Question

1. Delete Middle Element in Stack: [tittle](https://bit.ly/3ovTIu2),
2. Valid Parenthesis: [tittle](https://bit.ly/34kxPaq),
3. InsertAtBottom in Stack: [tittle](https://bit.ly/34qqmGL),
4. Reverse a Stack using recursion: [tittle](https://bit.ly/3HCBnD4),
5. Sort a Stack using recursion: [tittle](https://bit.ly/3snpr1B),
6. Redundant Brackets: [tittle](https://bit.ly/3srTkOv),
7. Minimum bracket Reversal: [tittle](https://bit.ly/3GAYRr5)

``` cpp
1. void solve(stack<int>&inputStack, int count, int size){

   //base condition
   if(count == (size/2)){
      inputStack.pop();
      return;
   }

   int num = inputStack.top();
   inputStack.pop();

   //Recursive Call
   solve(inputStack, count+1, size);
   inputStack.push(num);
}

void deleteMiddle(stack<int>&inputStack, int N){

    int count = 0;
    solve(inputStack, count, N);
}

2. bool isValidParenthesis(string s)
{
    stack<char> st;

    for(int i = 0; i<s.length(); i++){

        char ch = s[i];

        //Opening bracket, stack push
        if(ch == '{' || ch == '(' || ch == '[')
            st.push(ch);
        
        //Closing bracket, stack pop
        else{

            if (!st.empty()) {

              char top = st.top();

              if ((ch == ')' && top == '(') ||
                  (ch == '}' && top == '{') ||
                  (ch == ']' && top == '['))

                  st.pop();

                else
                    return false;
            }
            else
                return false;
        }
    }

    //Checking answer
    if(st.empty())
        return true;
    else
        return false;
}

3. void solve(stack<int>& myStack, int x){

     //base case
    if(myStack.empty()){
        myStack.push(x);
        return;
    }

    int num = myStack.top();
    myStack.pop();

    solve(myStack, x);
    myStack.push(num);
}
stack<int> pushAtBottom(stack<int>& myStack, int x) {
   solve(myStack, x);
   return myStack;
}

4. void insertAtBottom(stack<int>& stack, int x){

     //base case
    if(stack.empty()){
        stack.push(x);
        return;
    }

    int num = stack.top();
    stack.pop();

    insertAtBottom(stack, x);
    stack.push(num);
}

void reverseStack(stack<int> &stack) {
   
   //base case
   if(stack.empty())
    return;

    int num = stack.top();
    stack.pop();

    //Recursive Call
    reverseStack(stack);

    insertAtBottom(stack, num);
}

5. void Sorted(stack<int> &stack, int num){

//base case
if(stack.empty() || (stack.top() < num)){
    stack.push(num);
    return;
}

int n = stack.top();
stack.pop();

//Recursive call
Sorted(stack, num);

stack.push(n);
}

void sortStack(stack<int> &stack)
{
//base case
if(stack.empty())
    return;

int num = stack.top();
stack.pop();

//Recursive Call
sortStack(stack);

Sorted(stack, num);
}

6. void Sorted(stack<int> &stack, int num){

//base case
if(stack.empty() || (stack.top() < num)){
    stack.push(num);
    return;
}

int n = stack.top();
stack.pop();

//Recursive call
Sorted(stack, num);

stack.push(n);
}

void sortStack(stack<int> &stack)
{
//base case
if(stack.empty())
    return;

int num = stack.top();
stack.pop();

//Recursive Call
sortStack(stack);

Sorted(stack, num);
}

```
