# Coding Questions :-

1. [Reverse The Array](https://www.naukri.com/code360/problems/reverse-the-array_1262298?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio3)

2. [Move Zeroes](https://leetcode.com/problems/move-zeroes/)

``` cpp
1. void reverseArray(vector<int> &arr , int m) {

	int start = m + 1;
	int end = arr.size() - 1;

	while(start < end ) {

		swap(arr[start], arr[end]);
		start++;
		end--;
	}
}
```

``` cpp
2.  void moveZeroes(vector<int>& nums) {
    
        int i = 0;
    
        for (int j = 0; j < nums.size(); j++) {
            if (nums[j] != 0) {
                swap(nums[j],nums[i]);
                i++;
            }
        }
    }
```

## Homework :-

1.[Merge Sorted Array](https://leetcode.com/problems/merge-sorted-array/)

``` cpp
1. void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int a1 = m-1, a2 = n-1;
        int i = nums1.size() - 1;

        while(i >= 0) {
            
            if(a1 < 0|| a2 < 0)
                break;
            
            if(nums1[a1] > nums2[a2])
                nums1[i--] = nums1[a1--];
            else
                nums1[i--] = nums2[a2--];
        }

        while(a1> = 0)
            nums1[i--] = nums1[a1--];
        while(a2 >= 0)
            nums1[i--] = nums2[a2--];
    } 
```
