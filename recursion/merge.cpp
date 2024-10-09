 #include <iostream>
 using namespace std;

 void merge(int *arr,int s,int e){
    int mid = s + (e-s)/2;

    int len1 = mid -s+1;
    int len2 = s - mid;
    
     


 }

void solve(int *arr,int s,int e){
    //base case
    while(s>=e){
        return ;
    }

    int mid = s+ (e-s)/2;


    //left side
    solve(arr,s,mid);

    //right side
    solve(arr,mid+1,e);

    merge(arr,s,e);
}

 int main(){
    int arr[] = {3,6,4,7,9,21,23,11,10};
    int n = 9;

    solve(arr,0,n-1);

    for(int i = 0;i<n;i++){
        cout<<"arr[i]"<<" ";
    }cout <<endl;


 }