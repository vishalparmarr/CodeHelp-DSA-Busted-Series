# Coding Question

1. Delete Middle Element in Stack: [tittle](https://bit.ly/3ovTIu2),
2. Valid Parenthesis: [tittle](https://bit.ly/34kxPaq),
3. InsertAtBottom in Stack: [tittle](https://bit.ly/34qqmGL),
4. Reverse a Stack using recursion: [tittle](https://bit.ly/3HCBnD4),
5. Sort a Stack using recursion: [tittle](https://bit.ly/3snpr1B),
6. Redundant Brackets: [tittle](https://bit.ly/3srTkOv),
7. Minimum bracket Reversal: [tittle](https://bit.ly/3GAYRr5)

`#include <bits/stdc++.h> 

void solve(stack<int>&inputStack, int count, int size){

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
}`