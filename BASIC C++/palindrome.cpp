#include <iostream>
#include <cctype>
#include <cstring>
#include <string>
#include <bits/stdc++.h>

using namespace std;
void reverse(char str[],int n){
    int s=0;
    int e = n-1;
    while(s<e){
        swap(str[s++],str[e--]);
    }
}

int main(){
    char name[20];

    cout <<"Enter your name: ";
    cin>>name;

    int len = strlen(name);

    char new_name[20] = {reverse(name,len)};
    cout<<"your reverse name is: ";
    cout << name<<endl;
    
    


    
    



    return 0;
}