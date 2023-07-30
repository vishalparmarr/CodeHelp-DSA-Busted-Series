#include <bits/stdc++.h> 
using namespace std;

void sort012(int *arr, int n) {

   int zero = 0, one = 0, two = 0;

   for(int i = 0; i < n; i++){

      if(arr[i] == 0)
         zero++;

      else if(arr[i]==1)
         one++;

      else
        two++;
   }

   int i=0;
   int j=0;

   while(j < zero) {

      arr[i++] = 0;
      j++;
   }  

   j = 0;
   while (j < one) {

      arr[i++]=1;
      j++;
   }
   
   j=0;
   while (j < two) {

      arr[i++]=2;
      j++;
   }
}

int main() {

    int arr[11] = {2,1,0,1,2,0,1,1,1,2,0}; 

    sort012(arr,11);

    for(int i = 0; i < 11; i++)
        cout << arr[i];
    
}

 