#include <iostream>
using namespace std;

class Solution {
public:
    int hammingWeight(int n) {
    
        int count = 0;
        while(n!=0) {
            
            //checking last bit
            if(n&1) {
                count++;
            }
            n = n>>1;
        }
        return count;
    }
};

int main(){

    Solution s1;
    cout << s1.hammingWeight(6);
}