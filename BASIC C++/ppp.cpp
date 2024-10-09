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

    // int score{};
    // cout << "enter the score(1-100): ";
    // cin>> score;

    // char letter_grade;

    // if (score >=10 && score <=100){
    //     if(score >= 90){
    //         if(score >= 95)
    //           letter_grade = 'A+';
    //         else
    //           letter_grade = 'A';
    //     }
    //     else if(score >= 80)
    //         letter_grade = 'B';
    //     else if(score >= 70)
    //         letter_grade = 'C';
    //     else if(score >= 60)
    //         letter_grade = 'D';
    //     else
    //         letter_grade = 'F';
        
    //     cout << "Your Grade for exam is : "<< letter_grade <<endl;

    //     if (letter_grade == 'F') {
    //         cout <<"You have failed and need to repeat the class."<<endl;
    //     }
    //     else{
    //         cout << "congrats" <<endl;

    //     }
       

        

    // }else{
    //     cout << "Sorry! " << score << " is out of range";
    // }
    int length, width{} ,height;
    double base_cost{2.50};
    double tier1_surcharge{0.10};
    double tier2_surcharge{0.25};


    cout << "\n=========Welcome to shipping calculator==========" <<endl;
    cout << "enter the length in inches : ";
    cin >> length;
    cout << "enter the width in inches: ";
    cin >> width;
    cout << "enter the height in inches: ";
    cin >>height;

    if(length <=10 && width <=10 && height <=10){
        cout << "Package can be shipped";
        int package_vol;
        package_vol = length*width*height;
        double package_cost{};
        package_cost = base_cost;
        if(package_vol > 500){
            package_cost += package_cost*tier2_surcharge;
            cout <<"\nadding tier2 surcharge"<<endl;

        }else if(package_vol > 100){
            package_cost += package_cost*tier1_surcharge;
            cout <<"\nadding tier1 surcharge"<<endl;
        }
        cout <<"\nthe volume of package is: "<< package_vol<<endl;
        cout << "\nthe surcharge cost of package is: "<< package_cost<<endl;



    }
    else{
        cout <<"\nwe cannot ship the package.";
    }


    return 0;
}

