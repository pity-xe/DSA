#include <iostream>
#include <cctype>
#include <cstring>
#include <string>
#include <bits/stdc++.h>

using namespace std;
 char toLowerCase(char ch){
    if(ch>= 'a' && ch<= 'z'){
        return ch;
    }
    else {
        char temp =ch -'A' + 'a';
        return temp;
    }
 }
bool checkpalidrome(char s[], int n){
    int a= 0;
    int e = n-1;
    while (a<= e)
    {
         /* code */
        if(toLowerCase(s[a]) != toLowerCase(s[e])){
            return false;
        }
        else {
            a++;
            e--;
        }

    }
    return true ;
    

    }
    


void reversestr(char name[], int n){
    int s=0;
    int e = n-1;
    while(s<e){
        swap(name[s++],name[e--]);
    }
}
int getlength(char name[]){
    int count = 0;
    for(int i =0; name[i] != '\0'; i++){
        count ++;
    }
    return count;
}

int main(){
    char name[20];

    cout <<"Enter your name: ";
    cin>>name;

    cout <<"Your name is : "<<name<<endl;
    int len = getlength(name);
    cout << "Length of your name is : "<<len<<endl;
    reversestr(name,len);
    cout<<"your name is: ";
    cout << name<<endl;
    
   
    cout <<"palindrome or not: "<<checkpalidrome(name,len)<<endl;
    
    if (checkpalidrome(name,len)==1){
        cout<<"yes"<<endl;
    
    }
    else{
        cout<<"no"<<endl;
    }

    cout << "Character is "<< toLowerCase('b')<<endl;
    cout << "Character is "<< toLowerCase('C')<<endl;
    


    

    return 0;
}
