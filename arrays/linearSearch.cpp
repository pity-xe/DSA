 #include <iostream>
 using namespace std;

 bool search(int arr[], int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i] == key){
            return true;
        }
    }
    return false;

 }


 int main(){
    int size;
    cout<<"Enter size of an array: ";
    cin>>size;

    int num[100];

    for(int i= 0;i<size; i++){
        cout <<"Enter elements in an array: ";
        cin>>num[i];
    }

    cout<<"Enter an element to search for: ";
    int key;
    cin >>key;


    bool found = search(num,size,key);

    if(found){
        cout<< "Element is present"<<endl;
    }
    else{
        cout <<"Element is absent"<<endl;
    }



       
 }