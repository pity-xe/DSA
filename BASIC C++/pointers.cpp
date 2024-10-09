#include <iostream>
#include <vector>

using namespace std;
void double_data(int *int_ptr){
        *int_ptr *=2;
    }

void swap(int *a ,int *b){
    int temp = *a;
    *a=*b;
   *b = temp;

    }

void display(vector<string> *v){
    for (auto str: *v)
       cout<< str<<" "<< endl;
}

int main(){
    // int num{10};
    // cout << "value of num is "<<num << endl;
    // cout << "size of num is "<<sizeof num << endl;
    // cout << "address of num is "<< &num << endl;

    // int *p;
    // cout << "value of p is "<< p << endl;
    // cout << "size of p is "<<sizeof p << endl;
    // cout << "address of p is "<< &p << endl;

    // p = nullptr;
    // cout << "value of p is "<<p << endl;

    // int *p1{nullptr};
    // double *p2{nullptr};
    // unsigned long long *p3{nullptr};
    // vector<string> *p4{nullptr};
    // string *p5{nullptr};

    // cout << "size of p1 is "<<sizeof p1 << endl;
    // cout << "size of p2 is "<<sizeof p2 << endl;
    // cout << "size of p3 is "<<sizeof p3 << endl;
    // cout << "size of p4 is "<<sizeof p4 << endl;
    // cout << "size of p5 is "<<sizeof p5 << endl;

    int score{10};
    double temp{100.2};

    int *score_p{nullptr};

    // score_p = &score;
    // cout <<"value of score is: "<<score<<endl;
    // cout<<"address of score is: "<<&score<<endl;
    // cout<<"value of score_p is: "<<score_p<<endl;
    // score_p = &temp; // compile error!!!!!!

    //DYNAMIC MEMORY ALLOCATION

    // int *int_ptr{};
    

    // int_ptr = new int;
    // *int_ptr = 100;
    // delete int_ptr;
    // cout <<"Value of num is: "<< *int_ptr<<endl;
    // int size;
    // cout<<"Enter size of an array: ";
    // cin << size;

    //ARRAYS AND POINTERS

    // int scores[]={100,95,60};
    // int *arr_ptr{scores};
    
    // while (*arr_ptr != 2){
    //     cout<< *arr_ptr <<endl;
    //     arr_ptr++; 
    // }

    // cout<< "/n---------------------------------";
    // arr_ptr = scores;
    // while (*arr_ptr != -1)
       
    // {
    //     cout<< *arr_ptr++<< endl;
    // }

    //PASSING POINTERS TO A FUNCTION

    // int value{10};
    // int *int_ptr{nullptr};

    // cout <<"Value: "<< value<<endl;
    // double_data(&value);
    // cout <<value<<endl;

    // int_ptr= &value;
    // double_data(int_ptr);
    // cout <<"Value: "<< value<<endl;

    // int x{100}, y{200};

    // cout << "value of x is: "<<x<<endl;
    // cout << "value of y is: "<<y<<endl;

    // swap(&x,&y);
    // cout << "value of x is: "<<x<<endl;
    // cout << "value of y is: "<<y<<endl;

    // vector<string> stooges{"larry","preeti","tejas"};
    // display(&stooges);

     
    






    












 
    return 0;
}