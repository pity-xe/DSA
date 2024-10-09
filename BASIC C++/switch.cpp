#include <iostream>
using namespace std;

int main(){
    char letter_grade;
    cout<<"enter the letter grade u expect in exam: ";
    cin >> letter_grade;

    switch (letter_grade)
    {
    case 'a':
    case 'A':
        /* code */
        cout << "\nyou need marks above 90,so study hard!!";
        break;
    case 'b':
    case 'B':
        cout << "\nyou need marks above 80";
        break;
    case 'c':
    case 'C':
        cout << "\nyou need marks around 70.";
        break;
    case 'f':
    case 'F':
        {
            char confirm;
            cout << "are you sure(Y/N): ";
            cin >> confirm;
            if (confirm== 'y' || confirm == 'Y')
            {
                cout << "\nok,you need to study more.";
            }
            else if (confirm == 'n' || confirm == 'N')
            {
                cout << "\nGo Study";
            }
            else {
                cout << "\nIllegal";
            }

            break;
            
            
        }
    default:
        cout << "\nsorry not a valid grade.";
        break;
    }


}
