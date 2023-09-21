#include <iostream>
using namespace std;

int countDistinctWayToClimbStair(long long nStairs) {
    
    //base case
    if(nStairs < 0)
        return 0;
    
    if(nStairs == 0)
        return 1;
    
    //R.C
    int ans = countDistinctWayToClimbStair(nStairs-1) + countDistinctWayToClimbStair(nStairs-2);
    
    return ans;
}

int main (){

    int stairs;
    cin >> stairs;

    int ans = countDistinctWayToClimbStair(stairs);
    cout << ans;
}