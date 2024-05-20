# Coding Questions :-

1. [Reverse Integer](https://leetcode.com/problems/reverse-integer)
2. [Complement of Base 10 Integer](https://leetcode.com/problems/complement-of-base-10-integer)
3. [Power of Two](https://leetcode.com/problems/power-of-two/)

``` cpp
1. int reverse(int x) {
        
    int ans  = 0;

    while( x != 0) {
            
        int digit = x % 10;
            
        if((ans > INT_MAX/10) || (ans < INT_MIN/10))
            return 0;
            
        ans = (ans * 10) + digit;
        x = x / 10;     
    }

    return ans;
    }
```

``` cpp
2. int bitwiseComplement(int n) {
        
        int m = n;
        int mask = 0;
        
        if(n == 0)
            return 1;
        
        while( m != 0) {
            mask = (mask << 1) | 1;
            m = m >> 1;
        }
        
        int ans = (~n) & mask;
        return ans;        
    }
```

``` cpp
3. bool isPowerOfTwo(int n) {
        
    if(n <= 0) 
        return false;
    
    else
        return((n & (n-1)) == 0);
    }
```