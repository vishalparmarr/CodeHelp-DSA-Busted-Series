#include <iostream>
using namespace std;

class Solution {
public:
    void subtractProductAndSum (int n) {
        
        int prod = 1;
        int sum = 0;
        
        while(n != 0) {
            
            int digit = n % 10;
            prod = prod * digit;
            sum = sum + digit;
            
            n = n / 10;
        }
        
        int answer = prod - sum;
        cout << answer;
    }

    int main (){

        Solution s1;
       s1.subtractProductAndSum(6);
    
    }
};