#include <bits/stdc++.h>
using namespace std;

vector<int> reverse(vector<int> v) {
    
    int start = 0;
    int end = v.size() - 1;
    
    while(start < end)
        swap(v[start++], v[end--]);
    
    return v;
}

vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	
    int i = n - 1;
    int j = m - 1;
    vector<int> ans;
    int carry = 0;
    
    while(i >= 0 && j >= 0) {
        int val1 = a[i];
        int val2 = b[j];
        int sum = val1 + val2 + carry;   
        
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
        j--;
    }
    
    // first case
    while(i >= 0) {
        int sum = a[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
    }
    
     // second case
    while(j >= 0) {
        int sum = b[j] + carry;
        carry = sum / 10;
        int value = sum % 10;
        ans.push_back(value);
        j--;
    }
    
     // third case
    while(carry != 0) {
        int sum = carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
    }

    return reverse(ans);
}

int main() {

    vector<int> a = {4, 5, 1};

    vector<int> b = {3, 4, 5};

    vector<int> ans = findArraySum(a, a.size(), b, b.size());

    for(int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
}