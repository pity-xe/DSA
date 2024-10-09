#include <iostream>
using namespace std;

int main() {
    // int total{};
    // int num1{},num2{},num3{};
    // double average{0.0};
    // const int count{3};

    // cout<< "enetr three numbers : "<<endl;
    // cin>> num1>> num2 >>num3;

    // total = num1+num2+num3;
    // average = static_cast<double>(total)/count;

    // cout <<"three numbers entered were: "<<num1 <<num2<<num3<< endl;
    // cout << "total of three numbers is: "<<total<<endl;
    // cout<<"and the average is: "<<average<<endl;

    int score{};
    cout << "enter the score(1-100): ";
    cin>> score;

    char letter_grade;

    if (score >=10 && score <=100){
        

    }else{
        cout << "Sorry!" << score << "is out of range";
    }


    return 0;
}

