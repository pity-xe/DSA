#include <iostream>
using namespace std;

int main() {

    // for(int i{1} ; i<=10 ; i+=2)
    //     cout << i << endl;

   
   for(int i{1},j{5}; i<=5; ++i ,++j){
     cout << i << "+" << j << "=" << (i+j) << endl;
   }
    cout << "blastoff" << endl;
        
        
    
    cout << endl;
    return 0;

}