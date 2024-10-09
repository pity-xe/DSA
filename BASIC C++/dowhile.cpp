#include <iostream>
using namespace std;

int main(){

    char selection{};
    do
    {
        
        cout <<"\n_______________________";
        cout << "\n1 Doing this"<< endl;
        cout << "2.Doing that"<< endl;
        cout << "3.Doing something else "<< endl;
        cout << "Q.Quit"<< endl;
        cout << "\nPlease enter your choice: ";
        cin >> selection;

        switch (selection)
        {
        case 1:
            cout << "you chose 1- Doing this";
            break;
        case 2:
            cout << "you chose 2- Doing that";
            break;
        case 3:
            cout << "you chose 3 - Doing something else.";
            break;
        case 'Q':
            cout << "Goodbye";
            break;

        
        default:
            cout << "Wrong choice ---Try again.";
            break;
        }

    } while (selection != 'q' && selection != 'Q');
     
     cout <<"Thanks";
     
    return 0;
}