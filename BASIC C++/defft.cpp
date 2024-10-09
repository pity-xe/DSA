#include <iostream>
using namespace std;

const double pi{3.141};

//Function Prototypes
void area_circle();
void volume_cylinder();
double calc_circle(double);
double calc_cylinder(double , double);


void area_circle(){
    double radius{};
    cout << "\nEnter the radius of circle: ";
    cin >> radius;

    cout <<"Area of circle with radius "<<radius<<" is: "<<calc_circle(radius)<<endl;

}

void volume_cylinder(){
    double radius{};
    double height{};
    cout << "\nEnter the radius of cylinder: ";
    cin >> radius;
    cout << "\nEnter the height of cylinder: ";
    cin >> height;



    cout <<"Volume of cylinder with radius "<<radius<<" and height "<<height <<" is: "<<calc_cylinder(radius,height)<<endl;

}

int main(){

    area_circle();
    volume_cylinder();

    return 0;
}

double calc_circle(double radius){
    return pi*radius*radius;
}

double calc_cylinder(double radius, double height){
    return pi*radius*radius*height;
}