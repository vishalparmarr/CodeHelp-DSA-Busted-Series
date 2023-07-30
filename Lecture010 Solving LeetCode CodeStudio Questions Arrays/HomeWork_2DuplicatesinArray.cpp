#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

    vector<int> findDuplicates(vector<int>& nums) {
       
        vector <int> arr;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size() - 1; i++){

            if (nums[i] == nums[i+1])
                arr.push_back(nums[i]);
        } 
    
    return arr;
    }

int main() {

    vector<int> nums = {4,3,2,7,8,2,3,1};

    vector<int> ans =  findDuplicates(nums);

    for(int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
}
