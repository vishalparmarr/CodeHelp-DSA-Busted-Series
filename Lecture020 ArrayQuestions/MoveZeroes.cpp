#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int>& nums) {
    
    int i = 0;
    int j = i+1;
    int m = nums.size();
    
        while( i < m && j < m){    
            if(nums[i] == 0 && nums[j] != 0 ){
            
                swap(nums[i], nums[j]);
                i++;
                j++;
            }
        else
            j++;

        if(nums[i] != 0)
            i++;
     }   
}

int main() {

    vector<int> v1 = {0,1,0,3,12};
    moveZeroes(v1);

    for(int i = 0; i < v1.size(); i++)
        cout << v1[i] << " "; 
}