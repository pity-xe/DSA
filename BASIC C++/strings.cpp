#include <iostream>
#include <cctype>
#include <cstring>
#include <string>

using namespace std;

int valid(string str){
    int i;
    for (i=0;i<str.length(); i++){
        if(!(str[i]>=65 && str[i]<=90) && !(str[i]>= 97 && str[i]>=122) && !(str[i]>=48 && str[i]<=57)){
            return 0;
        } 
        
    }

    return 1;
}

int main(){

    // char A[] = "welcome";
    // int i;
    // int b = strlen(A);
    
    // //lowercase to uppercase
    // for (int i=0;i<b; i++ ){
    //     A[i]-=32;
    //     cout << A[i] ;

    // }

    // //toggling with characters

    // char B[] = "PrEEti";
    // int c = strlen(B);
    // for (int i=0;i<c; i++ ){
    //     if(B[i]>=65 && B[i]<=90){
    //         B[i]+=32;
    //     }
    //     else if(B[i]>='a' && B[i] <= 122){
    //         B[i]-=32;

    //     }
    //     cout << B[i];
    // }

    //CONSONANTS AND VOWELS
    // string line;
    // int vowels, consonants, digits, spaces,word;

    // vowels =  consonants = digits = spaces =word = 0;

    // cout << "Enter a line of string: ";
    // getline(cin, line);

    // for(int i = 0; i < line.length(); ++i)
    // {
    //     if(line[i]=='a' || line[i]=='e' || line[i]=='i' ||
    //        line[i]=='o' || line[i]=='u' || line[i]=='A' ||
    //        line[i]=='E' || line[i]=='I' || line[i]=='O' ||
    //        line[i]=='U')
    //     {
    //         ++vowels;
    //     }
    //     else if((line[i]>='a'&& line[i]<='z') || (line[i]>='A'&& line[i]<='Z'))
    //     {
    //         ++consonants;
    //     }
    //     else if(line[i]>='0' && line[i]<='9')
    //     {
    //         ++digits;
    //     }
    //     else if (line[i]==' ')
    //     {
    //         ++spaces;
    //     }
    // }

    // cout << "Vowels: " << vowels << endl;
    // cout << "Consonants: " << consonants << endl;
    // cout << "Digits: " << digits << endl;
    // cout << "White spaces: " << spaces << endl;

    // for (int i = 0; i < line.length(); ++i){
    //     if(line[i]==' '&& line[i-1] != ' ')
    //     word++;
    // }
    // cout << "no of words are: "<<word; 


    //Validate a string

    string str = "Preeti Wagh02";
    if (valid(str)){
        cout <<"valid string";
    }
    else{
        cout <<"Invalid string";
    }





    return 0;
}