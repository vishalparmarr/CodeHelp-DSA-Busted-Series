#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int>& nums, int k) {
      
  int n = nums.size();
  vector<int> temp(n);
  
  for(int i = 0; i < n; i++)
    temp[(i+k)%n] = nums[i];

  nums = temp;  
}

int main() {

  vector<int> v1 = {1,2,3,4,5,6,7};
  int k = 3;
  rotate(v1,k);

  for(int i = 0; i < v1.size(); i++)
    cout << v1[i] << " ";
}