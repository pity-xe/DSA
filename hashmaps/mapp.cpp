#include <iostream>
#include <map>
#include <unordered_map>

using namespace std;

int main(){

    //creation
    unordered_map<string,int> mp;

    //insertion
    //1
    pair<string,int> p = make_pair("wagh",3);
    mp.insert(p);

    //2
    pair<string,int> pair2("preeti",2);
    mp.insert(pair2);

    //3
    mp["name"]= 1;

    //searching
    cout<< mp["name"]<<endl;
    cout<<mp.at("preeti")<<endl;
    cout<<mp.size()<<endl;
    
    cout<<mp["am"]<<endl;
    cout<<mp.at("am")<<endl;




}