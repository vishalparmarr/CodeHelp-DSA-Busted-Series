#include <bits/stdc++.h> 
using namespace std;

//Using Two Pointers Approach
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {

    vector<vector<int>> result;
    sort(arr.begin(),arr.end());
    //n-2 because we need to select three numbers at a time to form a triplet.
    //If we select n-1 or n numbers, we won't have enough numbers left to form a triplet. 
    for(int i=0; i<n-2; i++){

    //Now we are using two pointer technique here
        int left = i + 1; //Using to select next element
        int right= n - 1;//Last element 
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

int main(){

    vector<int> triple = {1, 2, 3, 1, 2, 3};
    int sum =  6;
    int size = 6;

    vector<vector<int>> vect = findTriplets(triple,sum,size);

     for (int i = 0; i < vect.size(); i++) {

        for (int j = 0; j < vect[i].size(); j++)
            cout << vect[i][j] << " ";
        
        cout << endl;
    }
}