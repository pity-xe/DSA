#include <iostream>
#include <vector>
using namespace std;

int main(){

    int num_items{};

    cout << "how many data items do you have? ";
    cin >> num_items;

    vector<int> data {};



    for(int i = 0; i <+ num_items; ++i){
        int data_item{};
        cout << "enter data item " << i << ":";
        cin >> data_item;
        data.push_back(data_item);
    }
    
    cout <<"\nDisplaying Histogram" << endl;
    for (auto val :data){
        for (int i = 1; i <= val; ++i){
            cout << "-";
        }
         cout << endl;



    }
        
    
    cout <<  endl;
    


    return 0;
}

