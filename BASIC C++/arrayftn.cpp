#include <iostream>
using namespace std;

void print_array(int arr[], size_t size);
void set_array(int arr[],size_t size,int value);

void print_array(int arr[], size_t size){
    for(size_t i=0; i<size; i++){
        cout << arr[i]<< " ";

    }
    cout <<endl;
}

void set_array( int arr[],size_t size,int value){
    for(size_t i=0; i<size; i++){
        arr[i]=value;
    }
    cout <<endl;

}
int main(){
    int my_nums[]{30,56,565,67,32,31};

    print_array(my_nums,6);
    set_array(my_nums,6,23);
    print_array(my_nums,6);


    return 0;
}