# Coding Questions :-

1. [Number of 1 Bits](https://leetcode.com/problems/number-of-1-bits/)

2. [Subtract the Product and Sum of Digits of an Integer](https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/)

``` cpp
1. int hammingWeight(int n) {
        int count = 0;
        while(n != 0) {
            if(n & 1)
                count++;
            
           n = n >> 1;
        }
        return count;
    }
```

``` cpp
2. int subtractProductAndSum(int n) {
        int product = 1;
        int sum = 0;
        
        while(n != 0){
            int digit = n % 10;
            product = product * digit;
            sum = sum + digit;
            
            n = n/10;
        }
        
        int ans = product - sum;
        return ans;
    }
```