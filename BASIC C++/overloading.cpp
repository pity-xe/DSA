#include <iostream>
#include <vector>

using namespace std;
 
void print(int);
void print(double);
void print(string);
void print(vector<string>);

void print(int num){
    cout<<"printing num: "<<num<<endl;
}
void print(double num){
    cout<< "printing double: "<<num<<endl;
}
void print(string s){
    cout << "printing string: "<< s <<endl;
}
void print(vector<string> v){
    cout<< "printing vectors of strings: "<<endl;
    for (auto s:v)
       cout << s + " ";
    cout << endl;
}


int main(){
    print(20);
    print("preeti");
    print(67.98);
    
    vector<string> three{"preeti","utki","parents"};
    print(three);


    return 0;
}