# Coding Questions :-

1. [Find Unique](https://www.codingninjas.com/studio/problems/find-unique_625159?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1&leftPanelTabValue=PROBLEM)

2. [Find Duplicate in Array](https://www.naukri.com/code360/problems/find-duplicate-in-array_1112602?interviewProblemRedirection=true&search=find%20dup&leftPanelTabValue=PROBLEM)

3. [Duplicate In Array](https://www.naukri.com/code360/problems/duplicate-in-array_893397?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1&leftPanelTabValue=PROBLEM)

4. [Pair Sum](https://www.naukri.com/code360/problems/pair-sum_697295?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1)

5. [Intersection Of Two Sorted Arrays](https://www.naukri.com/code360/problems/intersection-of-2-arrays_1082149?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1)

``` cpp
1. int findUnique(int *arr, int size) {
    
    int ans = 0;
    for(int i = 0; i < size; i++)
        ans = ans ^ arr[i];
    
    return ans;
}
```

``` cpp
2. int findDuplicate(vector<int> &arr, int n) {
	
	int ans = 0;
	sort(arr.begin(), arr.end());

	for(int i = 0; i < arr.size(); i++) {

        if (arr[i] == arr[i + 1]) 
            return arr[i];
    }
}
```

``` cpp
3. int findDuplicate(vector<int> &arr)  {
    
    int ans = 0;
    
    //XOR ing all array elements
    for (int i = 0; i < arr.size(); i++)
    	ans = ans ^ arr[i];
    
    //XOR [1, n-1]
    for(int i = 1; i < arr.size(); i++)
    	ans = ans ^ i;
    
    return ans;
}
```

``` cpp
4. vector<vector<int> > pairSum(vector<int> &arr, int s){
   
   vector< vector<int> > ans;
   
   for(int i = 0; i < arr.size(); i++ ) {

   		for(int j = i + 1; j < arr.size(); j++) {
        	
            if(arr[i] + arr[j] == s) {
            
            	vector<int> temp;
                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));
				ans.push_back(temp);
            }
        }
   }

   sort(ans.begin(), ans.end());
   return ans;
} 
```

``` cpp
5. vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m) {
	int i = 0, j = 0;
    vector<int> ans;
    
    while(i < n && j < m) {
    
        if(arr1[i] == arr2[j]) {
            ans.push_back(arr1[i]);
            i++;
            j++;
    }
        else if (arr1[i] < arr2[j]) 
    	    i++;
        else 
    	    j++;
    }
    return ans;
}
```

## HomeWork :-

1. [Unique Number of Occurrences](https://leetcode.com/problems/unique-number-of-occurrences/)

2. [Find All Duplicates in an Array](https://leetcode.com/problems/find-all-duplicates-in-an-array/)

3. [3Sum](https://www.naukri.com/code360/problems/triplets-with-given-sum_893028?source=youtube&campaign=LoveBabbar_Codestudiovideo1&utm_source=youtube&utm_medium=affiliate&utm_campaign=LoveBabbar_Codestudiovideo1)

4. [ Sort 0 1 2](https://www.naukri.com/code360/problems/sort-0-1-2_631055?source=youtube&campaign=LoveBabbar_Codestudiovideo1&utm_source=youtube&utm_medium=affiliate&utm_campaign=LoveBabbar_Codestudiovideo1)

```cpp
1.  bool uniqueOccurrences(vector<int>& arr) {

        int n = arr.size();
        unordered_map <int,int> m;
        
        for(int i = 0; i < n; i++)
            m[arr[i]]++;
        
        set <int> s;
        for (auto a: m)
            s.insert(a.second);
        
        if(s.size() == m.size())
            return true;
        
        return false;
    }
```

``` cpp
2. vector<int> findDuplicates(vector<int>& nums) {
       
        vector <int> arr;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size() - 1; i++){

            if (nums[i] == nums[i+1])
                arr.push_back(nums[i]);
        } 
    
    return arr;
    }
```

``` cpp
3. vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {

    vector<vector<int>> result;
    sort(arr.begin(),arr.end());
   
    for(int i=0; i<n-2; i++){
    
        int left = i + 1; 
        int right= n - 1;
        while(left < right){
            int sum = arr[i]+arr[left]+arr[right];
            //Now Condition to check Sum
            if(sum==K){
                //The push_back() function in C++ is used to add new elements at the end of a vector.
                // So we add a object as a single element
                result.push_back({arr[i],arr[left],arr[right]});
                left++;
                right--;
                // Ignore duplicate values for the second element
                while(left < right && arr[left] == arr[left-1]) {
                    left++;
                }
                // Ignore duplicate values for the third element
                while(left < right && arr[right] == arr[right+1]) {
                    right--;
                }
            }
            else if(sum < K)
            //means that we need to move the left pointer to next element
            // for to equal sum
            // or you can say for bigger number to get to equal of K
            {
                left++;
            }
            else{
                right--;
            }
        }
         // Ignore duplicate values for the first element
        while( i + 1 < n && arr[i] == arr[i + 1]) {
            i++;
        }
    }
    return result;
}
```

``` cpp
4. void sort012(int *arr, int n) {

   int zero = 0, one = 0, two = 0;

   for(int i = 0; i < n; i++) {

      if(arr[i] == 0)
         zero++;

      else if(arr[i] == 1)
         one++;

      else
        two++;
   }

   int i=0;
   int j=0;

   while(j < zero){
      arr[i++]=0;
      j++;
   }  
   
   j=0;

   while(j < one) {
      arr[i++] = 1;
      j++;
   }

   j=0;

   while(j < two) {
      arr[i++] = 2;
      j++;
   }
}
```