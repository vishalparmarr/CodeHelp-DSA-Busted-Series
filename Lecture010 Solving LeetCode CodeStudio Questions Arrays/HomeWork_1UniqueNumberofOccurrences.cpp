#include <bits/stdc++.h>
using namespace std;

    bool uniqueOccurrences(vector<int>& arr) {

        sort(arr.begin(), arr.end());
        set<int> arr1;
        set<int> arr2;

        for(int i = 0; i < arr.size(); i++)
            arr1.insert(arr[i]);
        
        int count = 1;

        for(int i = 0; i < arr.size()-1; i++) {
            if(arr[i] == arr[i+1]) 
                count++;

            if(arr[i] != arr[i+1]) {
                arr2.insert(count); 
                count = 1;
            }
        }

        arr2.insert(count);
        if (arr1.size() == arr2.size()) 
            return true;
        
        return false;
    }

int main() {

    vector<int> arr = {1,2,2,1,1,3};

    cout << uniqueOccurrences(arr);

}
