#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    void solve(vector<int> nums, vector<int> output, int index, vector<vector<int>>& ans) {
        //base case
        if(index >= nums.size()) {
            ans.push_back(output);
            return ;
        }
        
        //exclude
        solve(nums, output, index+1, ans);
        
        //include
        int element = nums[index];
        output.push_back(element);
        solve(nums, output, index+1, ans);
        
    }
    
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>> ans;
        vector<int> output;
        int index = 0;
        solve(nums, output, index, ans);
        return ans;
    }
};

int main() {
    vector<int> arr = {1,2,3};
    Solution s1;

    vector<vector<int>> ans = s1.subsets(arr);

    for(int i = 0; i <= ans.size(); i++){
        for(int j = 0; j <= ans.size(); j++){
            cout << ans[i][j];
        }
    }
}