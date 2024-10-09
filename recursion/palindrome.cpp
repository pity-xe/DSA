#include <iostream>
using namespace std;

bool isPalindrome(string str,int i,int j){
    if(i>j){
        return true;
    }

    if(str[i] != str[j]){
        return false;
    }
    else{
        isPalindrome(str,i+1,j-1);
    }
}

int main(){
    string name  = "aabbccbbaa";

    bool ans = isPalindrome(name,0,name.length()-1);
    if(ans){
        cout<< "String is a palindrome";
    }
    else{
        cout <<"String is not a palindrome";
    }
}