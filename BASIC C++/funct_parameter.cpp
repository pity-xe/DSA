#include <iostream>
#include <vector>
using namespace std;

void pass_val1(int);
void pass_val2(string);
void pass_val3(vector<string>);
void call_val3(vector<string> v);

void pass_val1(int num)
{
    num=1000;
    cout <<num<<endl;
}

void pass_val2(string s)
{
    s = "changed";
}

void pass_val3(vector<string> v)
{
    v.clear();
}

void call_val3(vector<string> v)
{
    for(auto s: v)
       cout <<s<<" ";
    cout <<endl;
}

int main(){
    int num{10};
    int num2{20};

    cout <<"number before calling pass_val1 function: "<<num<<endl;
    pass_val1(10);
    cout <<"number after calling pass_val1 function: "<<num<<endl;






    return 0;
}