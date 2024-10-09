#include <iostream>
using namespace std;

class hero{

private:
    int health;
public:
    char level;

 void ftn(){
        cout<<"health";
    }
    int  getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    void setHealth(int h){
        health =h;
    }

    void setLevel(char l){
        level = l;
    }

};



int main(){

    hero ramesh;
    cout<<"Ramesh Health is : "<<ramesh.getHealth();
     ramesh.setHealth(70);
    ramesh.level='A';
    cout <<"health is: "<< ramesh.getHealth()<<endl;
    cout<<"level is: "<<ramesh.level<<endl;


}