#include <bits/stdc++.h>
using namespace std;

bool palindrome(string str, int i) { 
        
    if(str.size() == 1)
        return true;

    if(i >str.size()-1-i)
        return true;

    if(str[i] !=str[str.size()-1-i])
        return false;
       
    else  
       return palindrome(str, ++i);
}

int main() {
    
    string str;
    cout << "ENTER A STRING  = ";
    getline(cin,str);

    bool ans = palindrome(str, 0);
   
    if(ans)
        cout << "PALINDROME";
    else
        cout<< "NOT PALINDROME";
}